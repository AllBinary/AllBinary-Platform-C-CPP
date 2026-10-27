
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_REMOTEFRAMEWORK_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_REMOTEFRAMEWORK_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/util/Map.h>

      
#include <org/osgi/framework/BundleContext.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RemoteFramework {

    public: virtual BundleContext* connect(std::string host) = 0;

    public: virtual void disconnect(BundleContext* bc) = 0;

    public: virtual Map* getSystemProperties(BundleContext* bc) = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_REMOTEFRAMEWORK_H
