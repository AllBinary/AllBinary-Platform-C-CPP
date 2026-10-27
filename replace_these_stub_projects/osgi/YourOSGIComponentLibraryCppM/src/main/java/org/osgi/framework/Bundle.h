
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_BUNDLE_H
        #define ORG_OSGI_FRAMEWORK_BUNDLE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Bundle {

    public: virtual std::string getSymbolicName() = 0;

                //@Throws(BundleException.constructor)
            
    public: virtual void start() = 0;

                //@Throws(BundleException.constructor)
            
    public: virtual void start(int32_t options) = 0;

};

            


        #endif //ORG_OSGI_FRAMEWORK_BUNDLE_H
