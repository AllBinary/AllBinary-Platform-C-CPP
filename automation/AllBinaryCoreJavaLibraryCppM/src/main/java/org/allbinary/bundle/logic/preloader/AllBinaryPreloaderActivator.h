
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
        



        #ifndef ORG_ALLBINARY_BUNDLE_LOGIC_PRELOADER_ALLBINARYPRELOADERACTIVATOR_H
        #define ORG_ALLBINARY_BUNDLE_LOGIC_PRELOADER_ALLBINARYPRELOADERACTIVATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/osgi/framework/BundleActivator.h>
class BundleContext;
class ServiceReference;
class ServiceRegistration;
class CryptServiceFactory;
class StdUtil;
class LogUtil;
class CommonStrings;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryPreloaderActivator
            : public virtual Object
        , public BundleActivator {

    private: static inline BundleContext* context;

    private: static inline const std::string CRYPT_REGISTRY_NAME = "bundle.abcs.logic.system.loader.CryptService";

    public: static BundleContext* getBundleContext();

    /*protected*/ public: LogUtil* logUtil;

public: AllBinaryPreloaderActivator();

    private: CommonStrings* commonStrings;

                //@Throws(Exception.constructor)
            
    public: void start(BundleContext* context);

                //@Throws(Exception.constructor)
            
    public: void registerAsService();

                //@Throws(Exception.constructor)
            
    public: void stop(BundleContext* context);

};

            


        #endif //ORG_ALLBINARY_BUNDLE_LOGIC_PRELOADER_ALLBINARYPRELOADERACTIVATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUNDLE_LOGIC_PRELOADER_ALLBINARYPRELOADERACTIVATOR_H_COMPLETE)
        #define ORG_ALLBINARY_BUNDLE_LOGIC_PRELOADER_ALLBINARYPRELOADERACTIVATOR_H_COMPLETE
        #if __has_include(<org/osgi/framework/BundleActivator.h>)
#include <org/osgi/framework/BundleActivator.h>
#endif
#if __has_include(<org/osgi/framework/BundleContext.h>)
#include <org/osgi/framework/BundleContext.h>
#endif
#if __has_include(<org/osgi/framework/ServiceReference.h>)
#include <org/osgi/framework/ServiceReference.h>
#endif
#if __has_include(<org/osgi/framework/ServiceRegistration.h>)
#include <org/osgi/framework/ServiceRegistration.h>
#endif
#if __has_include(<org/allbinary/bundle/logic/system/loader/CryptServiceFactory.h>)
#include <org/allbinary/bundle/logic/system/loader/CryptServiceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
