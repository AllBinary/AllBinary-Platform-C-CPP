
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FileData
            : public Object
         {

    private: static FileData instance() { return FileData(); }

    public: static FileData getInstance();

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

    public: const int32_t MAXDOWNLOADABLEFILESIZE = 1048576 *20;

    public: const int32_t MINDOWNLOADABLEFILESIZE = 1;

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEDATA_H
