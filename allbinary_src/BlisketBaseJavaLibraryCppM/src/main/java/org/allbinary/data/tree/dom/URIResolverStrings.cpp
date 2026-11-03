
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/URIResolverStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

URIResolverStrings::URIResolverStrings() {
        }
        auto URIResolverStrings::instance_owner() -> URIResolverStrings* { static std::unique_ptr<URIResolverStrings> value(new URIResolverStrings()); return value.get(); }
URIResolverStrings* URIResolverStrings::instance = URIResolverStrings::instance_owner();

    auto URIResolverStrings::getInstance() -> URIResolverStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return URIResolverStrings::instance;
    
}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_CPP
