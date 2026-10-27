
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABCRYPTUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABCRYPTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/AbCryptUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/jcehelper/AbCrypt.h>

      
#include <org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AbCryptUtil::instance_owner() -> AbCryptUtil* { static std::unique_ptr<AbCryptUtil> value(new AbCryptUtil()); return value.get(); }
AbCryptUtil* AbCryptUtil::instance = AbCryptUtil::instance_owner();

    auto AbCryptUtil::getInstance() -> AbCryptUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbCryptUtil::instance;
    
}


AbCryptUtil::AbCryptUtil() : streamUtil(StreamUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto AbCryptUtil::decrypt(InputStream* inputStream, std::string key) -> std::vector<int8_t>{

    ByteArrayOutputStream* outputStream = 
                null
            ;;
    

        try {
            outputStream= dynamic_cast<ByteArrayOutputStream*>(this->streamUtil->get(inputStream, new ByteArrayOutputStream(), std::vector<int8_t>(16384)));
    

    AbCrypt* abCrypt = new AbCrypt(KeySpecFactory::getInstance()->DESEDE);;
    
abCrypt->init(key);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return abCrypt->decrypt(outputStream->toByteArray());;
    

         finally {
            this->streamUtil->close(outputStream);
    
this->streamUtil->close(inputStream);
    

         }
        
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABCRYPTUTIL_CPP
