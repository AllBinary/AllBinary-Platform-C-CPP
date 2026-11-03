
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H
        #define ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Dictionary.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Bundle;
class ServiceRegistration;
class ServiceReference;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BundleContext
            : public virtual Object
         {

    public: virtual std::vector<Bundle*> getBundles() = 0;

                //@Throws(BundleException.constructor)
            
    public: virtual Bundle* installBundle(std::string location) = 0;

    public: virtual ServiceRegistration* registerService(std::string clazz, Object* service, Dictionary* properties) = 0;
    public: ServiceRegistration* registerService(std::string clazz, const std::string& service, Dictionary* properties) { return registerService(clazz, JavaString::box(service), properties); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> ServiceRegistration* registerService(std::string clazz, BoxValue service, Dictionary* properties) { return registerService(clazz, JavaBoxes::toObject(service), properties); }
    public: template<typename BoxElement> ServiceRegistration* registerService(std::string clazz, const std::vector<BoxElement>& service, Dictionary* properties) { return registerService(clazz, JavaBoxes::toObject(service), properties); }

    public: virtual Object* getService(ServiceReference* reference) = 0;

                //@Throws(InvalidSyntaxException.constructor)
            
    public: virtual std::vector<ServiceReference*> getServiceReferences(std::string clazz, std::string filter) = 0;

    public: virtual ServiceReference* getServiceReference(std::string clazz) = 0;

};

            


        #endif //ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H_COMPLETE)
        #define ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H_COMPLETE
        #if __has_include(<java/util/Dictionary.h>)
#include <java/util/Dictionary.h>
#endif
#if __has_include("org/osgi/framework/Bundle.h")
#include "org/osgi/framework/Bundle.h"
#endif
#if __has_include("org/osgi/framework/ServiceRegistration.h")
#include "org/osgi/framework/ServiceRegistration.h"
#endif
#if __has_include("org/osgi/framework/ServiceReference.h")
#include "org/osgi/framework/ServiceReference.h"
#endif

        #endif
    
