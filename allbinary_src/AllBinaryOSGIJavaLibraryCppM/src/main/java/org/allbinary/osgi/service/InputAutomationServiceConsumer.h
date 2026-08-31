
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
        



        #ifndef ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_H
        #define ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_H

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

public constructor (string registryName, BundleContext bundleContext, OSGIServiceVisitorInterface osgiServiceVisitorInterface);

                //@Throws(Exception.constructor)
            
    public process();

                //@Throws(Exception.constructor)
            
    std::vector<ServiceReference> getServiceReferences();

    public BundleContext getBundleContext();

    public setBundleContext(BundleContext aBundleContext);

    public string getRegistryName();

    public setRegistryName(string registryName);

    public OSGIServiceVisitorInterface getOsgiServiceVisitorInterface();

    public setOsgiServiceVisitorInterface(OSGIServiceVisitorInterface osgiServiceVisitorInterface);

};

            


        #endif //ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_H
