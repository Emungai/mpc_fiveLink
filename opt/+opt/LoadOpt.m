function [nlp] = LoadOpt(sys, bounds,arg)
num_grid.DoubleSupportConstHeight=10;
num_grid.RightStance=10;
num_grid.LeftStance=10;


opts = struct(...
    'EqualityConstraintBoundary', 1e-4);

nlp = HybridTrajectoryOptimization('rabbit', sys, num_grid, [],opts); %1e-4
nlp.configure(bounds,arg);
opt.costs.Torques(nlp,sys);
nlp.update;

end