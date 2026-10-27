
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

class BundleContext;
class ServiceReference;
class LogUtil;
class OSGIServiceInterface;
class OSGIServiceVisitorInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OSGIServiceUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationServiceConsumer
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: OSGIServiceUtil* osgiServiceUtil;

    private: std::string registryName;

    private: BundleContext* bundleContext;

    private: OSGIServiceVisitorInterface* osgiServiceVisitorInterface;

public: InputAutomationServiceConsumer(std::string registryName, BundleContext* bundleContext, OSGIServiceVisitorInterface* osgiServiceVisitorInterface);

                //@Throws(Exception.constructor)
            
    public: void process();

                //@Throws(Exception.constructor)
            
    private: std::vector<ServiceReference*> getServiceReferences();

    public: BundleContext* getBundleContext();

    public: void setBundleContext(BundleContext* aBundleContext);

    public: std::string getRegistryName();

    public: void setRegistryName(std::string registryName);

    public: OSGIServiceVisitorInterface* getOsgiServiceVisitorInterface();

    public: void setOsgiServiceVisitorInterface(OSGIServiceVisitorInterface* osgiServiceVisitorInterface);

};

            


        #endif //ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_H_COMPLETE)
        #define ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/osgi/framework/BundleContext.h>)
#include <org/osgi/framework/BundleContext.h>
#endif
#if __has_include(<org/osgi/framework/ServiceReference.h>)
#include <org/osgi/framework/ServiceReference.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/osgi/OSGIServiceInterface.h>)
#include <org/allbinary/osgi/OSGIServiceInterface.h>
#endif
#if __has_include(<org/allbinary/osgi/OSGIServiceVisitorInterface.h>)
#include <org/allbinary/osgi/OSGIServiceVisitorInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/osgi/service/OSGIServiceUtil.h")
#include "org/allbinary/osgi/service/OSGIServiceUtil.h"
#endif

        #endif
    
