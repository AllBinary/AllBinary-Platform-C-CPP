
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
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/NullServiceReferenceFactory.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/osgi/framework/ServiceRegistration.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OSGIActivatorUtil
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static void registerAsService(BundleContext bundleContext, Object* anyType, std::string serviceName){
OSGIActivatorUtil::registerAsService(bundleContext, anyType, serviceName, StdUtil::getInstance().createHashtable());
    
}


                //@Throws(Exception.constructor)
            
    public: static void registerAsService(BundleContext bundleContext, Object* anyType, std::string serviceName, ABHashtable<Object*, Object*> properties){

    ServiceRegistration serviceRegistration = bundleContext.registerService(serviceName, anyType, properties);;
    

    ServiceReference serviceReference = serviceRegistration.getReference();;
    
serviceReference= bundleContext.getServiceReference(serviceName);
    

                        if(serviceReference == NullServiceReferenceFactory::getInstance().NULL_SERVICE_REFERENCE)
                        
                                    {
                                    


                            throw Exception("No Such Service Reference");
                    

                                    }
                                
}


private: OSGIActivatorUtil(){
}


};

            

