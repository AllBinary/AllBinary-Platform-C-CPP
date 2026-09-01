
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H
        #define ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H

            #include <vector>
        
#include <java/util/Dictionary.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Bundle.h"
#include "ServiceRegistration.h"
#include "ServiceReference.h"

class BundleContext {

    std::vector<Bundle> getBundles();

                //@Throws(BundleException.constructor)
            
    Bundle installBundle(std::string location);

    ServiceRegistration registerService(std::string clazz, Object* service, Dictionary properties);

    Object* getService(ServiceReference reference);

                //@Throws(InvalidSyntaxException.constructor)
            
    std::vector<ServiceReference> getServiceReferences(std::string clazz, std::string filter);

    ServiceReference getServiceReference(std::string clazz);

};

            


        #endif //ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H
