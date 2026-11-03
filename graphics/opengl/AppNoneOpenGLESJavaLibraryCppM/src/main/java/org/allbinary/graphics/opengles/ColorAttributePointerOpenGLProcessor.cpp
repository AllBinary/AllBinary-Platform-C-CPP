
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_COLORATTRIBUTEPOINTEROPENGLPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_COLORATTRIBUTEPOINTEROPENGLPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/ColorAttributePointerOpenGLProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ColorAttributePointerOpenGLProcessor::instance_owner() -> ColorAttributePointerOpenGLProcessor* { static std::unique_ptr<ColorAttributePointerOpenGLProcessor> value(new ColorAttributePointerOpenGLProcessor()); return value.get(); }
ColorAttributePointerOpenGLProcessor* ColorAttributePointerOpenGLProcessor::instance = ColorAttributePointerOpenGLProcessor::instance_owner();

    auto ColorAttributePointerOpenGLProcessor::getInstance() -> ColorAttributePointerOpenGLProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ColorAttributePointerOpenGLProcessor::instance;
    
}


ColorAttributePointerOpenGLProcessor::ColorAttributePointerOpenGLProcessor(){
}


    auto ColorAttributePointerOpenGLProcessor::process(GL10* gl, Object* anyType) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_COLORATTRIBUTEPOINTEROPENGLPROCESSOR_CPP
