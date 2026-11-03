
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
        



        #ifndef ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_CPP
        #define ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/init/crypt/jcehelper/BasicCryptUtil.h"
        

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

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"


BasicCryptUtil::BasicCryptUtil() : logUtil(LogUtil::getInstance()), tsUtil(TsUtil::getInstance()) {
        }
        auto BasicCryptUtil::instance_owner() -> BasicCryptUtil* { static std::unique_ptr<BasicCryptUtil> value(new BasicCryptUtil()); return value.get(); }
BasicCryptUtil* BasicCryptUtil::instance = BasicCryptUtil::instance_owner();

    auto BasicCryptUtil::getInstance() -> BasicCryptUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicCryptUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicCryptUtil::getDecryptedInputStream(InputStream* inputStream, CryptInterface* cryptInterface) -> InputStream*{

    ByteArrayOutputStream* buffer = new ByteArrayOutputStream();;
    

    int32_t ch= 0;;
    

        while(true)
        {
ch= inputStream->read();
    

                        if(ch ==  -1)
                        
                                    {
                                    break;

                    

                                    }
                                
buffer->write(ch);
    
}


    std::vector<int8_t> decrypted = cryptInterface->decrypt(buffer->toByteArray());;
    

    std::string decryptedString = JavaString::fromChars(decrypted);;
    

    int32_t index = JavaString::indexOf(decryptedString, this->XML_START);;
    

                        if(index > 0)
                        
                                    {
                                    decryptedString= JavaString::substring(decryptedString, index);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ByteArrayInputStream(this->tsUtil->getByteArray(decryptedString));
    
}




        #endif //ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_CPP
