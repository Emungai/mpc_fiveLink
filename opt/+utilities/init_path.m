function init_path(export_path)
    % initialize the path
    addpath('C:\Users\mungam\Documents\MATLAB\Add-Ons\Toolboxes\JSONlab_ a toolbox to encode_decode JSON files\code\jsonlab-1.5')
    addpath('C:\Users\mungam\Documents\GitHub\frost-dev');
    if nargin > 0
        if ~exist(export_path, 'dir')
            mkdir(export_path);
        end
        addpath(export_path);
    end

    frost_addpath;
end
