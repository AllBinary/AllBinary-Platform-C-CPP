
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H
        #define ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/osgi/framework/Comparable.h"

class ServiceReference: public Comparable {

    public: virtual Object* getProperty(std::string key) = 0;

    public: virtual std::vector<std::string> getPropertyKeys() = 0;

};

            


        #endif //ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H
