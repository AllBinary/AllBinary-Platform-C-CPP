
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/security/spec/KeySpec.h>

      
#include <javax/crypto/spec/DESKeySpec.h>

      
#include <javax/crypto/spec/DESedeKeySpec.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto KeySpecFactory::instance_owner() -> KeySpecFactory* { static std::unique_ptr<KeySpecFactory> value(new KeySpecFactory()); return value.get(); }
KeySpecFactory* KeySpecFactory::instance = KeySpecFactory::instance_owner();

    auto KeySpecFactory::getInstance() -> KeySpecFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return KeySpecFactory::instance;
    
}


KeySpecFactory::KeySpecFactory(){
}


    auto KeySpecFactory::getInstance(std::string algorithm, std::vector<int8_t> keyData) -> KeySpec*{

        try {
            
    TsUtil* tsUtil = TsUtil::getInstance();;
    

                        if(tsUtil->compareTo(algorithm, this->DES) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new DESKeySpec(keyData);
    

                                    }
                                
                             else 
                        if(tsUtil->compareTo(algorithm, this->DESEDE) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new DESedeKeySpec(keyData);
    

                                    }
                                
                        else {
                            


                            throw RuntimeException();
                    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    



                            throw RuntimeException();
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_CPP
