
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/CharSequence.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <java/io/Reader.h>

      
#include <java/io/Writer.h>

      
#include <java/nio/CharBuffer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimpleFileUtil
            : public Object
         {
        

    private: static const instance: SimpleFileUtil = new SimpleFileUtil();

    public static SimpleFileUtil getInstance();

    public static OutputStream nullOutputStream();

    public static Writer nullWriter();

    public static Reader nullReader();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const NULL_WRITER: Writer = SimpleFileUtil.nullWriter()!;

    public const NULL_READER: Reader = SimpleFileUtil.nullReader()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const nullUtil: NullUtil = NullUtil.getInstance()!;

    private: const streamUtil: StreamUtil = StreamUtil.getInstance()!;

    public BasicArrayList loadFileAsList(InputStream inputStream, int32_t max, std::vector<int8_t> byteArray1);

    public BasicArrayList loadFileAsListReturnLine(InputStream inputStream, int32_t max, std::vector<int8_t> byteArray1, int32_t includeReturnLine);

    public string createStringFromArrayOfStrings(std::vector<string> stringArray);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_H
