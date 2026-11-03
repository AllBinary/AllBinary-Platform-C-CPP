
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/renderer/RendererStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RendererStrings::RendererStrings() {
        }
        auto RendererStrings::instance_owner() -> RendererStrings* { static std::unique_ptr<RendererStrings> value(new RendererStrings()); return value.get(); }
RendererStrings* RendererStrings::instance = RendererStrings::instance_owner();

    auto RendererStrings::getInstance() -> RendererStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RendererStrings::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_CPP
