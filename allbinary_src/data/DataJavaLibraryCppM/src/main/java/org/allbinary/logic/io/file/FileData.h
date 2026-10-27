
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileData
            : public virtual Object
         {

    private: static FileData* instance_owner();
    private: static FileData* instance;

    public: static FileData* getInstance();

private: FileData();

    public: const std::string NAME = "FILE_NAME";

    public: const std::string ISFILE = "FILE_ISFILE";

    public: const std::string ISDIRECTORY = "FILE_ISDIRECTORY";

    public: const std::string ISHIDDEN = "FILE_ISHIDDEN";

    public: const std::string ISABSOLUTE = "FILE_ISABSOLUTE";

    public: const std::string ROOT_NAME = "FILE_ROOT_NAME";

    public: const std::string PATH = "FILE_PATH";

    public: const std::string ABSOLUTE_PATH = "FILE_ABSOLUTE_PATH";

    public: const std::string CANONICAL_PATH = "FILE_CANONICAL_PATH";

    public: const std::string PARENT = "FILE_PARENT";

    public: const int32_t MINLEN = 1;

    public: const int32_t MAXLEN = 120;

    public: const int32_t MAXIMAGEFILESIZE = 1048576;

    public: const int32_t MINIMAGEFILESIZE = 32;

    public: const int32_t MAXDOWNLOADABLEFILESIZE;

    public: const int32_t MINDOWNLOADABLEFILESIZE = 1;

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_H_COMPLETE
        
        #endif
    
