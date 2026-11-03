
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
        



        #ifndef ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICEFACTORY_H
        #define ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Bundle;
#include <org/osgi/framework/ServiceFactory.h>
class ServiceRegistration;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CryptService;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CryptServiceFactory
            : public virtual Object
        , public virtual ServiceFactory {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: CryptService* cryptService;

public: CryptServiceFactory();

    public: Object* getService(Bundle* bundle, ServiceRegistration* registration);

    public: void ungetService(Bundle* bundle, ServiceRegistration* registration, Object* service);
    public: void ungetService(Bundle* bundle, ServiceRegistration* registration, const std::string& service) { return ungetService(bundle, registration, JavaString::box(service)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void ungetService(Bundle* bundle, ServiceRegistration* registration, BoxValue service) { return ungetService(bundle, registration, JavaBoxes::toObject(service)); }
    public: template<typename BoxElement> void ungetService(Bundle* bundle, ServiceRegistration* registration, const std::vector<BoxElement>& service) { return ungetService(bundle, registration, JavaBoxes::toObject(service)); }

};

            


        #endif //ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUNDLE_LOGIC_SYSTEM_LOADER_CRYPTSERVICEFACTORY_H_COMPLETE
        #if __has_include(<org/osgi/framework/Bundle.h>)
#include <org/osgi/framework/Bundle.h>
#endif
#if __has_include(<org/osgi/framework/ServiceFactory.h>)
#include <org/osgi/framework/ServiceFactory.h>
#endif
#if __has_include(<org/osgi/framework/ServiceRegistration.h>)
#include <org/osgi/framework/ServiceRegistration.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/bundle/logic/system/loader/CryptService.h")
#include "org/allbinary/bundle/logic/system/loader/CryptService.h"
#endif

        #endif
    
