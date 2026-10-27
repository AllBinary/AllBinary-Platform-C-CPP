
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
class NullUtil;
class LogUtil;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //AndroidToJ2ME
class AbFileSystem
            : public virtual Object
         {

    private: static AbFileSystem* instance_owner();
    private: static AbFileSystem* instance;

    public: static AbFileSystem* getInstance();


            
    public: AbFileSystem();
        
    private: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    public: bool isDirectoryOrFile(std::string path);

    public: bool isDirectory(std::string path);

    public: std::vector<std::string> getFilesAsStringArrayForPath(std::string currentDirPath);

    public: std::string readAsString(std::string fileName);

    public: std::string readAsString(std::string fileName, std::vector<int8_t> bytes);

    public: bool close(Object* closeable);
    public: bool close(const std::string& closeable) { return close(JavaString::box(closeable)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/FileInputStream.h>)
#include <java/io/FileInputStream.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
