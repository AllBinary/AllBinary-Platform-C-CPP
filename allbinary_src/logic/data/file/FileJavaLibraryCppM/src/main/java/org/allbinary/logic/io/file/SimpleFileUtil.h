
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
class NullUtil;
class LogUtil;
class NullOutputStream;
class NullReader;
class NullWriter;
class StreamUtil;
class StringMaker;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SimpleFileUtil
            : public virtual Object
         {

    private: static SimpleFileUtil* instance_owner();
    private: static SimpleFileUtil* instance;

    public: static SimpleFileUtil* getInstance();

    public: static OutputStream* nullOutputStream();

    public: static Writer* nullWriter();

    public: static Reader* nullReader();


            
    public: SimpleFileUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    public: Writer* NULL_WRITER;

    public: Reader* NULL_READER;

    private: CommonStrings* commonStrings;

    private: NullUtil* nullUtil;

    private: StreamUtil* streamUtil;

    public: BasicArrayList* loadFileAsList(InputStream* inputStream, int32_t max, std::vector<int8_t> byteArray1);

    public: BasicArrayList* loadFileAsListReturnLine(InputStream* inputStream, int32_t max, std::vector<int8_t> byteArray1, int32_t includeReturnLine);

    public: std::string createStringFromArrayOfStrings(std::vector<std::string> stringArray);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<java/io/OutputStream.h>)
#include <java/io/OutputStream.h>
#endif
#if __has_include(<java/io/Reader.h>)
#include <java/io/Reader.h>
#endif
#if __has_include(<java/io/Writer.h>)
#include <java/io/Writer.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/NullOutputStream.h>)
#include <org/allbinary/logic/io/NullOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/NullReader.h>)
#include <org/allbinary/logic/io/NullReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/NullWriter.h>)
#include <org/allbinary/logic/io/NullWriter.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
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
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
