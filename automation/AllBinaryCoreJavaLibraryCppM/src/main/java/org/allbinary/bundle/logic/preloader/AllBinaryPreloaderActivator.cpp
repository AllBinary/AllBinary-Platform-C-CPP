
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
        
#include <java/util/Hashtable.h>

      
#include <org/osgi/framework/BundleActivator.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/osgi/framework/ServiceRegistration.h>

      
#include <org/allbinary/bundle/logic/system/loader/CryptServiceFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryPreloaderActivator
            : public Object
        : public BundleActivator {
        

    private: static context: BundleContext;

    private: static const CRYPT_REGISTRY_NAME: string = "bundle.abcs.logic.system.loader.CryptService";

    public static BundleContext getBundleContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryPreloaderActivator.context;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (){

            super();
        }


    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

                //@Throws(Exception.constructor)
            
    public start(BundleContext context){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "start");
    
AllBinaryPreloaderActivator.context= context;
    
this.registerAsService();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "start", e);
    



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public registerAsService(){

    properties: Hashtable<any, any> = new Hashtable<any, any>();;
    

    serviceRegistration: ServiceRegistration = AllBinaryPreloaderActivator.context.registerService(CRYPT_REGISTRY_NAME, new CryptServiceFactory(), properties)!;;
    

    serviceReference: ServiceReference = serviceRegistration!.getReference()!;;
    
serviceReference= AllBinaryPreloaderActivator.context.getServiceReference(CRYPT_REGISTRY_NAME);
    

                        if(serviceReference == 
                                    null
                                )
                        
                                    throw new Exception("No Such Service Reference");
                                
}


                //@Throws(Exception.constructor)
            
    public stop(BundleContext context){
this.logUtil!.putF(this.commonStrings!.START, this, "stop");
    
}


};

            

