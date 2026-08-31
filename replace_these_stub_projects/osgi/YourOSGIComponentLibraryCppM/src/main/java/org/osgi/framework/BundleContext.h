
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H
        #define ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H

#include <java/util/Dictionary.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Bundle.h"
#include "ServiceRegistration.h"
#include "ServiceReference.h"

class BundleContext {
        

    std::vector<Bundle> getBundles();

                //@Throws(BundleException.constructor)
            
    Bundle installBundle(string location);

    ServiceRegistration registerService(string clazz, any service, Dictionary properties);

    any getService(ServiceReference reference);

                //@Throws(InvalidSyntaxException.constructor)
            
    std::vector<ServiceReference> getServiceReferences(string clazz, string filter);

    ServiceReference getServiceReference(string clazz);

};

            


        #endif //ORG_OSGI_FRAMEWORK_BUNDLECONTEXT_H
