
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/osgi/framework/Bundle.h>

      
#include <org/osgi/framework/ServiceFactory.h>

      
#include <org/osgi/framework/ServiceRegistration.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CryptService.h"

class CryptServiceFactory
            : public Object
        : public ServiceFactory {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: cryptService: CryptService = new CryptService();

public constructor (){

            super();
        }


    public any getService(Bundle bundle, ServiceRegistration registration){
this.logUtil!.putF(this.commonStrings!.START, this, "getService");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cryptService;
    
}


    public ungetService(Bundle bundle, ServiceRegistration registration, any = {} service){
}


};

            

