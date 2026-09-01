
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2MEForJ2ME
class AbFileSystem
            : public Object
         {

    private: static AbFileSystem instance() { return AbFileSystem(); }

    public: static AbFileSystem getInstance();

    private: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: bool isDirectoryOrFile(std::string path);

    public: bool isDirectory(std::string path);

    public: std::vector<std::string> getFilesAsStringArrayForPath(std::string currentDirPath);

    public: std::string readAsString(std::string fileName);

    public: std::string readAsString(std::string fileName, std::vector<int8_t> bytes);

    public: bool close(Object* closeable);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H
