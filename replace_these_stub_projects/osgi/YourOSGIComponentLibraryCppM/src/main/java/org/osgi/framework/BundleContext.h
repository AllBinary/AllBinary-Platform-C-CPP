
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H
        #define ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Dictionary.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/osgi/framework/Bundle.h"
#include "org/osgi/framework/ServiceRegistration.h"
#include "org/osgi/framework/ServiceReference.h"

class BundleContext {

    public: virtual std::vector<Bundle*> getBundles() = 0;

                //@Throws(BundleException.constructor)
            
    public: virtual Bundle* installBundle(std::string location) = 0;

    public: virtual ServiceRegistration* registerService(std::string clazz, Object* service, Dictionary* properties) = 0;

    public: virtual Object* getService(ServiceReference* reference) = 0;

                //@Throws(InvalidSyntaxException.constructor)
            
    public: virtual std::vector<ServiceReference*> getServiceReferences(std::string clazz, std::string filter) = 0;

    public: virtual ServiceReference* getServiceReference(std::string clazz) = 0;

};

            


        #endif //ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H
