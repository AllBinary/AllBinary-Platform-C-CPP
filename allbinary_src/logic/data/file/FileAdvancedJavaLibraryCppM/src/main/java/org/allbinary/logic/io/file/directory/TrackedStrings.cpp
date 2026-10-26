
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TrackedStrings
            : public Object
         {

    private: static TrackedStrings instance() { return TrackedStrings(); }

    public: static TrackedStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrackedStrings::instance();
    
}


    public: const std::string TARGET_PATH_WINDOWS = "\\target\\";

    public: const std::string TARGET_PATH_UNIX = "/target/";

    public: const std::string HTML_TEMP = "HTMLTemp";

    public: const std::string APPLICATION = "Application";

    public: const std::string APP = "\\app";

    public: const std::string GIT_COMMAND = "git";

    public: const std::string CHANGE_DIRECTORY_OPTION = "-C";

    public: const std::string LIST_FILES_COMMAND = "ls-files";

    public: const std::string ERROR_UNMATCH_OPTION = "--error-unmatch";

    public: const std::string PATHSPEC_SEPARATOR = "--";

    public: const std::string SEP_BY_NULL_CHAR_INSTEAD_OF_NEW_LINE = "-z";

};

            

