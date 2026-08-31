
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIServiceInterface.h>

      
#include <org/allbinary/osgi/OSGIServiceVisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OSGIServiceUtil.h"

class InputAutomationServiceConsumer
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const osgiServiceUtil: OSGIServiceUtil = OSGIServiceUtil.getInstance()!;

    private: registryName: string;

    private: bundleContext: BundleContext;

    private: osgiServiceVisitorInterface: OSGIServiceVisitorInterface;

public constructor (string registryName, BundleContext bundleContext, OSGIServiceVisitorInterface osgiServiceVisitorInterface){

            super();
        this.setRegistryName(registryName);
    
this.setBundleContext(bundleContext);
    
this.setOsgiServiceVisitorInterface(osgiServiceVisitorInterface);
    
}


                //@Throws(Exception.constructor)
            
    public process(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.PROCESS);
    

    vector: Vector = this.osgiServiceUtil!.getServicesObjectVector(this.getBundleContext(), this.getServiceReferences())!;;
    
this.logUtil!.putF("Processing " +vector.length +" Services", this, this.commonStrings!.PROCESS);
    

    size: int32_t = vector.length!;;
    

    osgiServiceInterface: OSGIServiceInterface;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
osgiServiceInterface= vector.get(index) as OSGIServiceInterface;
    

                        if(!getOsgiServiceVisitorInterface()!.visit(osgiServiceInterface))
                        
                                    {
                                    


                            throw new Exception("Unable to process service: " +osgiServiceInterface);
                    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    std::vector<ServiceReference> getServiceReferences(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getBundleContext()!.getServiceReferences(this.getRegistryName(), 
                            nullptr);;
    
}


    public BundleContext getBundleContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.bundleContext;
    
}


    public setBundleContext(BundleContext aBundleContext){
this.bundleContext= aBundleContext;
    
}


    public string getRegistryName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.registryName;
    
}


    public setRegistryName(string registryName){
this.registryName= registryName;
    
}


    public OSGIServiceVisitorInterface getOsgiServiceVisitorInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.osgiServiceVisitorInterface;
    
}


    public setOsgiServiceVisitorInterface(OSGIServiceVisitorInterface osgiServiceVisitorInterface){
this.osgiServiceVisitorInterface= osgiServiceVisitorInterface;
    
}


};

            

