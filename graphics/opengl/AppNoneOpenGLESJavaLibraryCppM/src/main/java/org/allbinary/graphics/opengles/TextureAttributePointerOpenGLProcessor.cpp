
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_TEXTUREATTRIBUTEPOINTEROPENGLPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_TEXTUREATTRIBUTEPOINTEROPENGLPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/TextureAttributePointerOpenGLProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TextureAttributePointerOpenGLProcessor::instance_owner() -> TextureAttributePointerOpenGLProcessor* { static std::unique_ptr<TextureAttributePointerOpenGLProcessor> value(new TextureAttributePointerOpenGLProcessor()); return value.get(); }
TextureAttributePointerOpenGLProcessor* TextureAttributePointerOpenGLProcessor::instance = TextureAttributePointerOpenGLProcessor::instance_owner();

    auto TextureAttributePointerOpenGLProcessor::getInstance() -> TextureAttributePointerOpenGLProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TextureAttributePointerOpenGLProcessor::instance;
    
}


TextureAttributePointerOpenGLProcessor::TextureAttributePointerOpenGLProcessor(){
}


    auto TextureAttributePointerOpenGLProcessor::process(GL10* gl, Object* anyType) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_TEXTUREATTRIBUTEPOINTEROPENGLPROCESSOR_CPP
