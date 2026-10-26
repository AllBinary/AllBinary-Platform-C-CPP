
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const OSGIServiceUtil osgiServiceUtil = OSGIServiceUtil::getInstance();

    private: std::string registryName;

    private: BundleContext bundleContext;

    private: OSGIServiceVisitorInterface osgiServiceVisitorInterface;

public: InputAutomationServiceConsumer(std::string registryName, BundleContext bundleContext, OSGIServiceVisitorInterface osgiServiceVisitorInterface);

                //@Throws(Exception.constructor)
            
    public: void process();

                //@Throws(Exception.constructor)
            
    private: std::vector<ServiceReference> getServiceReferences();

    public: BundleContext getBundleContext();

    public: void setBundleContext(BundleContext aBundleContext);

    public: std::string getRegistryName();

    public: void setRegistryName(std::string registryName);

    public: OSGIServiceVisitorInterface getOsgiServiceVisitorInterface();

    public: void setOsgiServiceVisitorInterface(OSGIServiceVisitorInterface osgiServiceVisitorInterface);

};

            


        #endif //ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_H
