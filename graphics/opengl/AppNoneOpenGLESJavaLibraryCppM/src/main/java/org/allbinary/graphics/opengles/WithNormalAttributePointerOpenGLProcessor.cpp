
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_WITHNORMALATTRIBUTEPOINTEROPENGLPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_WITHNORMALATTRIBUTEPOINTEROPENGLPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/WithNormalAttributePointerOpenGLProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto WithNormalAttributePointerOpenGLProcessor::instance_owner() -> WithNormalAttributePointerOpenGLProcessor* { static std::unique_ptr<WithNormalAttributePointerOpenGLProcessor> value(new WithNormalAttributePointerOpenGLProcessor()); return value.get(); }
WithNormalAttributePointerOpenGLProcessor* WithNormalAttributePointerOpenGLProcessor::instance = WithNormalAttributePointerOpenGLProcessor::instance_owner();

    auto WithNormalAttributePointerOpenGLProcessor::getInstance() -> WithNormalAttributePointerOpenGLProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WithNormalAttributePointerOpenGLProcessor::instance;
    
}


WithNormalAttributePointerOpenGLProcessor::WithNormalAttributePointerOpenGLProcessor(){
}


    auto WithNormalAttributePointerOpenGLProcessor::process(GL10* gl, Object* aObject3d) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_WITHNORMALATTRIBUTEPOINTEROPENGLPROCESSOR_CPP
