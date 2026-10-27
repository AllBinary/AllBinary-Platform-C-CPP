
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_SERVICEREGISTRATION_H
        #define ORG_OSGI_FRAMEWORK_SERVICEREGISTRATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ServiceReference;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ServiceRegistration
            : public virtual Object
         {

    public: virtual ServiceReference* getReference() = 0;

};

            


        #endif //ORG_OSGI_FRAMEWORK_SERVICEREGISTRATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_OSGI_FRAMEWORK_SERVICEREGISTRATION_H_COMPLETE)
        #define ORG_OSGI_FRAMEWORK_SERVICEREGISTRATION_H_COMPLETE
        #if __has_include("org/osgi/framework/ServiceReference.h")
#include "org/osgi/framework/ServiceReference.h"
#endif

        #endif
    
