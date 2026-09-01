
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H
        #define ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H

            #include <vector>
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Comparable.h"

class ServiceReference: public Comparable {

    Object* getProperty(std::string key);

    std::vector<std::string> getPropertyKeys();

};

            


        #endif //ORG_OSGI_FRAMEWORK_SERVICEREFERENCE_H
