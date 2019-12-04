function [sys,domains,guards] = load_behavior(robot, load_path, varargin)
    %% Flat-footed wakling

    % RightStance -> LeftImpact -> LeftStance -> RightImpact    RightStanceUp1 -> LeftImpact -> LeftStanceUp1 -> RightImpact -> RightStanceUp2    RightStanceDown1 -> LeftImpact -> LeftStanceDown1 -> RightImpact -> RightStanceDown2
    %      ^                                          |
    %      |__________________________________________|

    % Define domains
    right_stance = cassie.domain.single_support(robot, load_path, 'leg', 'right', 'guard', 'left_impact');
    left_impact  = cassie.domain.impact(robot, load_path, 'leg', 'left');
    left_stance = cassie.domain.single_support(robot, load_path, 'leg', 'left', 'guard', 'right_impact');
    right_impact  = cassie.domain.impact(robot, load_path, 'leg', 'right');
    
    right_stance_up_1 = cassie.domain.single_support(robot, load_path, 'leg', 'right', 'guard', 'left_impact');
    left_impact_up_1  = cassie.domain.impact(robot, load_path, 'leg', 'left');
    left_stance_up_1 = cassie.domain.single_support(robot, load_path, 'leg', 'left', 'guard', 'right_impact');
    right_impact_up_1  = cassie.domain.impact(robot, load_path, 'leg', 'right');
    right_stance_up_2 = cassie.domain.single_support(robot, load_path, 'leg', 'right', 'guard', 'left_impact');
    left_impact_up_2  = cassie.domain.impact(robot, load_path, 'leg', 'left');
    left_stance_up_2 = cassie.domain.single_support(robot, load_path, 'leg', 'left', 'guard', 'right_impact');
    
    bridge_impact_1  = cassie.domain.impact(robot, load_path, 'leg', 'right');
    
    right_stance_down_1 = cassie.domain.single_support(robot, load_path, 'leg', 'right', 'guard', 'left_impact');
    left_impact_down_1  = cassie.domain.impact(robot, load_path, 'leg', 'left');
    left_stance_down_1 = cassie.domain.single_support(robot, load_path, 'leg', 'left', 'guard', 'right_impact');
    right_impact_down_1  = cassie.domain.impact(robot, load_path, 'leg', 'right');
    right_stance_down_2 = cassie.domain.single_support(robot, load_path, 'leg', 'right', 'guard', 'left_impact');
    left_impact_down_2  = cassie.domain.impact(robot, load_path, 'leg', 'left');
    left_stance_down_2 = cassie.domain.single_support(robot, load_path, 'leg', 'left', 'guard', 'right_impact');
    
    domains = [right_stance, left_stance,...
        right_stance_up_1, left_stance_up_1, right_stance_up_2, left_stance_up_2,...
        right_stance_down_1, left_stance_down_1, right_stance_down_2, left_stance_down_2];
    guards = [left_impact, right_impact, left_impact_up_1, right_impact_up_1, left_impact_up_2, bridge_impact_1, left_impact_down_1, right_impact_down_1, left_impact_down_2];
    
    % Define hybrid system
    sys = HybridSystem('Cassie');
    sys = addVertex(sys, {'RightStance','LeftStance','RightStanceUp1','LeftStanceUp1', 'RightStanceUp2','LeftStanceUp2','RightStanceDown1','LeftStanceDown1', 'RightStanceDown2','LeftStanceDown2'}, 'Domain', {right_stance, left_stance, right_stance_up_1, left_stance_up_1, right_stance_up_2, left_stance_up_2, right_stance_down_1, left_stance_down_1, right_stance_down_2, left_stance_down_2});
    srcs = {'RightStance','LeftStance','RightStanceUp1','LeftStanceUp1','RightStanceUp2','LeftStanceUp2','RightStanceDown1','LeftStanceDown1','RightStanceDown2'};
    tars = {'LeftStance','RightStance','LeftStanceUp1','RightStanceUp2','LeftStanceUp2','RightStanceDown1','LeftStanceDown1','RightStanceDown2','LeftStanceDown2'};
    sys = addEdge(sys, srcs, tars);
    sys = setEdgeProperties(sys, srcs, tars, 'Guard', {left_impact, right_impact, left_impact_up_1, right_impact_up_1, left_impact_up_2, bridge_impact_1, left_impact_down_1, right_impact_down_1, left_impact_down_2});
end
