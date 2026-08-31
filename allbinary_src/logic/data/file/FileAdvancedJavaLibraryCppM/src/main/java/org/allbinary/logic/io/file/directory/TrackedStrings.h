
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_TRACKEDSTRINGS_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_TRACKEDSTRINGS_H

            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TrackedStrings
            : public Object
         {
        

    private: static const instance: TrackedStrings = new TrackedStrings();

    public static TrackedStrings getInstance();

    public const TARGET_PATH_WINDOWS: string = "\\target\\";

    public const TARGET_PATH_UNIX: string = "/target/";

    public const HTML_TEMP: string = "HTMLTemp";

    public const APPLICATION: string = "Application";

    public const APP: string = "\\app";

    public const GIT_COMMAND: string = "git";

    public const CHANGE_DIRECTORY_OPTION: string = "-C";

    public const LIST_FILES_COMMAND: string = "ls-files";

    public const ERROR_UNMATCH_OPTION: string = "--error-unmatch";

    public const PATHSPEC_SEPARATOR: string = "--";

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_TRACKEDSTRINGS_H
