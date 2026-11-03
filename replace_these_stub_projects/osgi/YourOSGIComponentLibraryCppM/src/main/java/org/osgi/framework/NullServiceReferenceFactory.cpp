
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
        



        #ifndef ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_CPP
        #define ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/osgi/framework/NullServiceReferenceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/osgi/framework/NullServiceReference.h"


NullServiceReferenceFactory::NullServiceReferenceFactory() : NULL_SERVICE_REFERENCE(new NullServiceReference()) {
        }
        auto NullServiceReferenceFactory::instance_owner() -> NullServiceReferenceFactory* { static std::unique_ptr<NullServiceReferenceFactory> value(new NullServiceReferenceFactory()); return value.get(); }
NullServiceReferenceFactory* NullServiceReferenceFactory::instance = NullServiceReferenceFactory::instance_owner();

    auto NullServiceReferenceFactory::getInstance() -> NullServiceReferenceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullServiceReferenceFactory::instance;
    
}




        #endif //ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_CPP
