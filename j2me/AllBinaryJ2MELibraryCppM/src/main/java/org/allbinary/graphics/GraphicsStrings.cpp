
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_GRAPHICSSTRINGS_CPP
        #define ORG_ALLBINARY_GRAPHICS_GRAPHICSSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/GraphicsStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GraphicsStrings::GraphicsStrings() {
        }
        auto GraphicsStrings::instance_owner() -> GraphicsStrings* { static std::unique_ptr<GraphicsStrings> value(new GraphicsStrings()); return value.get(); }
GraphicsStrings* GraphicsStrings::instance = GraphicsStrings::instance_owner();

    auto GraphicsStrings::getInstance() -> GraphicsStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GraphicsStrings::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_GRAPHICSSTRINGS_CPP
