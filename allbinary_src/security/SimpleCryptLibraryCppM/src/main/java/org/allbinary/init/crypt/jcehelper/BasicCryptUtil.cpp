
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
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"

class BasicCryptUtil
            : public Object
         {

    private: static BasicCryptUtil* instance() { static std::unique_ptr<BasicCryptUtil> value(new BasicCryptUtil()); return value.get(); }

    public: static BasicCryptUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicCryptUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: TsUtil* tsUtil = TsUtil::getInstance();

    private: const std::string XML_START = "<?xml";

                //@Throws(Exception.constructor)
            
    public: InputStream* getDecryptedInputStream(InputStream* inputStream, CryptInterface* cryptInterface){

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
    

    std::string decryptedString = String.fromCharCode(...decrypted);;
    

    int32_t index = JavaString::indexOf(decryptedString, this->XML_START);;
    

                        if(index > 0)
                        
                                    {
                                    decryptedString= JavaString::substring(decryptedString, index);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ByteArrayInputStream(this->tsUtil->getByteArray(decryptedString));
    
}


};

            

