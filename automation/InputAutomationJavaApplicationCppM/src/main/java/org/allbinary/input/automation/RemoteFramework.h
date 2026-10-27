
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/util/Map.h>
class BundleContext;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RemoteFramework
            : public virtual Object
         {

    public: virtual BundleContext* connect(std::string host) = 0;

    public: virtual void disconnect(BundleContext* bc) = 0;

    public: virtual Map* getSystemProperties(BundleContext* bc) = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_REMOTEFRAMEWORK_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_REMOTEFRAMEWORK_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_REMOTEFRAMEWORK_H_COMPLETE
        #if __has_include(<java/util/Map.h>)
#include <java/util/Map.h>
#endif
#if __has_include(<org/osgi/framework/BundleContext.h>)
#include <org/osgi/framework/BundleContext.h>
#endif

        #endif
    
