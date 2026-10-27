
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ZIP_ZIPFILEUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ZIP_ZIPFILEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipInputStream.h>
#include <java/util/zip/ZipOutputStream.h>
class LogUtil;
class AbDataOutputStream;
class AbFileInputStream;
class AbFileOutputStream;
class DataOutputStreamFactory;
class StreamUtil;
class AbFile;
class FileUtil;
class StringMaker;
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ZipFileUtil
            : public virtual Object
         {

    private: static ZipFileUtil* instance_owner();
    private: static ZipFileUtil* instance;

    public: static ZipFileUtil* getInstance();


            
    public: ZipFileUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    public: void create(std::string outFilename, BasicArrayList* fileBasicArrayList);

                //@Throws(Exception.constructor)
            
    public: void unzip(std::string path, AbFile* zipFile, std::string fileName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ZIP_ZIPFILEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_ZIP_ZIPFILEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ZIP_ZIPFILEUTIL_H_COMPLETE
        #if __has_include(<java/util/zip/ZipEntry.h>)
#include <java/util/zip/ZipEntry.h>
#endif
#if __has_include(<java/util/zip/ZipInputStream.h>)
#include <java/util/zip/ZipInputStream.h>
#endif
#if __has_include(<java/util/zip/ZipOutputStream.h>)
#include <java/util/zip/ZipOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbDataOutputStream.h>)
#include <org/allbinary/logic/io/AbDataOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileInputStream.h>)
#include <org/allbinary/logic/io/AbFileInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileOutputStream.h>)
#include <org/allbinary/logic/io/AbFileOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/DataOutputStreamFactory.h>)
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileUtil.h>)
#include <org/allbinary/logic/io/file/FileUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
