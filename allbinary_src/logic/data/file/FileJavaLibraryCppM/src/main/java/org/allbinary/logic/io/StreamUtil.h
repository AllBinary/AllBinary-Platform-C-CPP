
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
#include <java/io/Closeable.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StreamUtil
            : public virtual Object
         {

    private: static StreamUtil* instance_owner();
    private: static StreamUtil* instance;

    public: static StreamUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: StreamUtil();

                //@Throws(Exception.constructor)
            
    public: OutputStream* get(InputStream* inputStream, OutputStream* outputStream, std::vector<int8_t> buffer);

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> getByteArray(InputStream* inputStream, ByteArrayOutputStream* outputStream2, std::vector<int8_t> byteArray);

    public: bool close(Closeable* closeable);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/Closeable.h>)
#include <java/io/Closeable.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<java/io/OutputStream.h>)
#include <java/io/OutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
