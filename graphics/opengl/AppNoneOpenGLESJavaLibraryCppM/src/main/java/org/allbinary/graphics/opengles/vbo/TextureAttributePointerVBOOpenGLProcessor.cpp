
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_VBO_TEXTUREATTRIBUTEPOINTERVBOOPENGLPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_VBO_TEXTUREATTRIBUTEPOINTERVBOOPENGLPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/vbo/TextureAttributePointerVBOOpenGLProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TextureAttributePointerVBOOpenGLProcessor::instance_owner() -> TextureAttributePointerVBOOpenGLProcessor* { static std::unique_ptr<TextureAttributePointerVBOOpenGLProcessor> value(new TextureAttributePointerVBOOpenGLProcessor()); return value.get(); }
TextureAttributePointerVBOOpenGLProcessor* TextureAttributePointerVBOOpenGLProcessor::instance = TextureAttributePointerVBOOpenGLProcessor::instance_owner();

    auto TextureAttributePointerVBOOpenGLProcessor::getInstance() -> TextureAttributePointerVBOOpenGLProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TextureAttributePointerVBOOpenGLProcessor::instance;
    
}


TextureAttributePointerVBOOpenGLProcessor::TextureAttributePointerVBOOpenGLProcessor(){
}


    auto TextureAttributePointerVBOOpenGLProcessor::process(GL10* gl, Object* anyType) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_VBO_TEXTUREATTRIBUTEPOINTERVBOOPENGLPROCESSOR_CPP
