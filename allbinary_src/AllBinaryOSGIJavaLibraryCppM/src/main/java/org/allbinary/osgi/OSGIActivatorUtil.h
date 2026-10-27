
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
        



        #ifndef ORG_ALLBINARY_OSGI_OSGIACTIVATORUTIL_H
        #define ORG_ALLBINARY_OSGI_OSGIACTIVATORUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StdUtil;
#include <org/allbinary/util/ABHashtable.h>
class BundleContext;
class NullServiceReferenceFactory;
class ServiceReference;
class ServiceRegistration;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OSGIActivatorUtil
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static void registerAsService(BundleContext* bundleContext, Object* anyType, std::string serviceName);

                //@Throws(Exception.constructor)
            
    public: static void registerAsService(BundleContext* bundleContext, Object* anyType, std::string serviceName, ABHashtable<Object*, Object*>* properties);

private: OSGIActivatorUtil();

};

            


        #endif //ORG_ALLBINARY_OSGI_OSGIACTIVATORUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_OSGI_OSGIACTIVATORUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_OSGI_OSGIACTIVATORUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/osgi/framework/BundleContext.h>)
#include <org/osgi/framework/BundleContext.h>
#endif
#if __has_include(<org/osgi/framework/NullServiceReferenceFactory.h>)
#include <org/osgi/framework/NullServiceReferenceFactory.h>
#endif
#if __has_include(<org/osgi/framework/ServiceReference.h>)
#include <org/osgi/framework/ServiceReference.h>
#endif
#if __has_include(<org/osgi/framework/ServiceRegistration.h>)
#include <org/osgi/framework/ServiceRegistration.h>
#endif

        #endif
    
