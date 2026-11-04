
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABKEYS_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABKEYS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/AbKeys.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AbKeys::instance_owner() -> AbKeys* { static std::unique_ptr<AbKeys> value(new AbKeys()); return value.get(); }
AbKeys* AbKeys::instance = AbKeys::instance_owner();

    auto AbKeys::getInstance() -> AbKeys*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbKeys::instance;
    
}


AbKeys::AbKeys() : logUtil(LogUtil::getInstance()){
}


                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbKeys::getKey(AbeClientInformationInterface* abeClientInformation, std::string keyName) -> std::string{

        try {
            this->logUtil->putF(JavaString::valueOf("Getting Key: ") +JavaString::valueOf(keyName), this, "getKey");
    

                        if(keyName.compare("DirectX 8") == 0 || keyName.compare("DirectX") == 0 || keyName.compare("Low Level") == 0 || keyName.compare("System Drivers") == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Temp For Input Library";
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbeLicenseInterfaceFactory::getInstance()->getLicenseInstance(abeClientInformation)->getKey(keyName);;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {
this->logUtil->put("Licensing Failure", this, "getKey()", &e);
    



                            throw LicensingException("Unknown License Failure");
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABKEYS_CPP
