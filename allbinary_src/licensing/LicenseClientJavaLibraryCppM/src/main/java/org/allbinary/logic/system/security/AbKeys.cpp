
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbKeys
            : public Object
         {

    private: static AbKeys instance() { return AbKeys(); }

    public: static AbKeys getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbKeys::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: AbKeys(){
}


                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string getKey(AbeClientInformationInterface abeClientInformation, std::string keyName){

        try {
            this->logUtil.putF("Getting Key: " +keyName, this, "getKey");
    

                        if(keyName.compare("DirectX 8") == 0 || keyName.compare("DirectX") == 0 || keyName.compare("Low Level") == 0 || keyName.compare("System Drivers") == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Temp For Input Library";
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeLicenseInterfaceFactory::getInstance().getLicenseInstance(abeClientInformation).getKey(keyName);;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {
this->logUtil.put("Licensing Failure", this, "getKey()", e);
    



                            throw LicensingException("Unknown License Failure");
                    
}
*/
}


};

            

