
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
        



        #ifndef ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_H
        #define ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
class TsUtil;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CryptInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicCryptUtil
            : public virtual Object
         {

    private: static BasicCryptUtil* instance_owner();
    private: static BasicCryptUtil* instance;

    public: static BasicCryptUtil* getInstance();


            
    public: BasicCryptUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: TsUtil* tsUtil;

    private: const std::string XML_START = "<?xml";

                //@Throws(Exception.constructor)
            
    public: InputStream* getDecryptedInputStream(InputStream* inputStream, CryptInterface* cryptInterface);

};

            


        #endif //ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_H_COMPLETE
        #if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/init/crypt/jcehelper/CryptInterface.h")
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"
#endif

        #endif
    
