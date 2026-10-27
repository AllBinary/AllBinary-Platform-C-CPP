
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_OSGI_FRAMEWORK_BASESERVICEREFERENCE_H
        #define ORG_OSGI_FRAMEWORK_BASESERVICEREFERENCE_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/osgi/framework/ServiceReference.h"

class BaseServiceReference
            : public Object
        , public ServiceReference {

    public: Object* getProperty(std::string key);

    public: std::vector<std::string> getPropertyKeys();

    public: int32_t compareTo(Object* o);

};

            


        #endif //ORG_OSGI_FRAMEWORK_BASESERVICEREFERENCE_H
