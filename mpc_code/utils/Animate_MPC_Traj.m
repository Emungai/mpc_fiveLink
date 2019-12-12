function [] = Animate_MPC_Traj(Time,X_REF_Original,x_traj,animateTraj,animateRef)
    % Reference Trajectory
    if animateRef
        anim = Animator.FiveLinkAnimator(Time(1:end), X_REF_Original(1:7,1:end));
        anim.pov = Animator.AnimatorPointOfView.West;
        anim.Animate(true);
        anim.isLooping = false;
        anim.updateWorldPosition = true;
        conGUI = Animator.AnimatorControls();
        conGUI.anim = anim;
        title('reference')
    end

    % Actual Trajectory
    if animateTraj
        anim2 = Animator.FiveLinkAnimator(Time, x_traj(1:7,:));
        anim2.pov = Animator.AnimatorPointOfView.West;
        anim2.Animate(true);
        anim2.isLooping = false;
        anim2.updateWorldPosition = true;
        conGUI2 = Animator.AnimatorControls();
        conGUI2.anim = anim2;
        title('real trajectory');
    end
end