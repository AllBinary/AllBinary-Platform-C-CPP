
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class AbFileInputStream;
class StreamUtil;
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SimpleFileUtil;
class AbFile;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileUtil2
            : public virtual Object
         {

    private: static FileUtil2* instance_owner();
    private: static FileUtil2* instance;

    public: static FileUtil2* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: StreamUtil* streamUtil;

private: FileUtil2();

    public: BasicArrayList* loadFileAsList(AbFile* file, int32_t max, std::vector<int8_t> byteArray1);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL2_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileInputStream.h>)
#include <org/allbinary/logic/io/AbFileInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/logic/io/file/SimpleFileUtil.h")
#include "org/allbinary/logic/io/file/SimpleFileUtil.h"
#endif
#if __has_include("org/allbinary/logic/io/file/AbFile.h")
#include "org/allbinary/logic/io/file/AbFile.h"
#endif

        #endif
    
