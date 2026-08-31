
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbKeys
            : public Object
         {
        

    private: static const instance: AbKeys = new AbKeys();

    public static AbKeys getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbKeys.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string getKey(AbeClientInformationInterface abeClientInformation, string keyName){

        try {
            this.logUtil!.putF("Getting Key: " +keyName, this, "getKey");
    

                        if(keyName!.compareTo("DirectX 8") == 0 || keyName!.compareTo("DirectX") == 0 || keyName!.compareTo("Low Level") == 0 || keyName!.compareTo("System Drivers") == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Temp For Input Library";
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeLicenseInterfaceFactory.getInstance()!.getLicenseInstance(abeClientInformation)!.getKey(keyName);;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {
this.logUtil!.put("Licensing Failure", this, "getKey()", e);
    



                            throw new LicensingException("Unknown License Failure");
                    
}
*/
}


};

            

