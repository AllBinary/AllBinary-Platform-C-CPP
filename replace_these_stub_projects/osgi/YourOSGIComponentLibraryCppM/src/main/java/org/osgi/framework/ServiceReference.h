
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H
        #define ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/osgi/framework/Comparable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ServiceReference: public Comparable {

    public: virtual Object* getProperty(std::string key) = 0;

    public: virtual std::vector<std::string> getPropertyKeys() = 0;

};

            


        #endif //ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H_COMPLETE)
        #define ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H_COMPLETE
        #if __has_include("org/osgi/framework/Comparable.h")
#include "org/osgi/framework/Comparable.h"
#endif

        #endif
    
