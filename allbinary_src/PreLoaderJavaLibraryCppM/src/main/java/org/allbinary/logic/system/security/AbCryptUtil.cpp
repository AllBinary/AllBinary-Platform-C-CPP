
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
        
class AbCryptUtil
            : public Object
         {

    private: static AbCryptUtil* instance() { static std::unique_ptr<AbCryptUtil> value(new AbCryptUtil()); return value.get(); }

    public: static AbCryptUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbCryptUtil::instance();
    
}


    private: StreamUtil* streamUtil = StreamUtil::getInstance();

private: AbCryptUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> decrypt(InputStream* inputStream, std::string key){

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


};

            

