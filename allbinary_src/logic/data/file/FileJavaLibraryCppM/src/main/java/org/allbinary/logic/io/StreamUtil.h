
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/Closeable.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StreamUtil
            : public Object
         {

    private: static StreamUtil* instance() { static std::unique_ptr<StreamUtil> value(new StreamUtil()); return value.get(); }

    public: static StreamUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: StreamUtil();

                //@Throws(Exception.constructor)
            
    public: OutputStream* get(InputStream* inputStream, OutputStream* outputStream, std::vector<int8_t> buffer);

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> getByteArray(InputStream* inputStream, ByteArrayOutputStream* outputStream2, std::vector<int8_t> byteArray);

    public: bool close(Closeable* closeable);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_H
