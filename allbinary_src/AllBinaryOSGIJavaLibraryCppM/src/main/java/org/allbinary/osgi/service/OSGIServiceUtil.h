
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
        



        #ifndef ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_H
        #define ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_H

        
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
class BasicArrayListD;

class BundleContext;
class ServiceReference;
class LogUtil;
class OSGIServiceInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OSGIServiceUtil
            : public virtual Object
         {

    private: static OSGIServiceUtil* instance_owner();
    private: static OSGIServiceUtil* instance;

    public: static OSGIServiceUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: OSGIServiceUtil();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getServicesObjectVector(BundleContext* bundleContext, std::vector<ServiceReference*> serviceReferences);

};

            


        #endif //ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
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

        #endif
    
