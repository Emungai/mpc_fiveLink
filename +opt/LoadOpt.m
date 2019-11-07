function [nlp] = LoadOpt(sys, bounds,arg)
num_grid.DoubleSupportConstHeight=9;
num_grid.LeftStanceLift=9;
num_grid.LeftStanceLand=9;
num_grid.DoubleSupportDiffHeight=9;

opts = struct(...
    'DistributeTimeVariable', false,...
    'DistributeParameters', false,...
    'EqualityConstraintBoundary', 1e-10,...
    'CollocationScheme','HermiteSimpson');

nlp = HybridTrajectoryOptimization('rabbitStepUp', sys, num_grid, [],opts); %1e-4
nlp.configure(bounds,arg);
opt.costs.Torques(nlp,sys);
nlp.update;

end