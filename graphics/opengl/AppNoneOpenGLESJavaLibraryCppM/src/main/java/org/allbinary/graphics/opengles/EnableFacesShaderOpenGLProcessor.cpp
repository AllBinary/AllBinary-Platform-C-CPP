
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/EnableFacesShaderOpenGLProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto EnableFacesShaderOpenGLProcessor::instance_owner() -> EnableFacesShaderOpenGLProcessor* { static std::unique_ptr<EnableFacesShaderOpenGLProcessor> value(new EnableFacesShaderOpenGLProcessor()); return value.get(); }
EnableFacesShaderOpenGLProcessor* EnableFacesShaderOpenGLProcessor::instance = EnableFacesShaderOpenGLProcessor::instance_owner();

    auto EnableFacesShaderOpenGLProcessor::getInstance() -> EnableFacesShaderOpenGLProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EnableFacesShaderOpenGLProcessor::instance;
    
}


EnableFacesShaderOpenGLProcessor::EnableFacesShaderOpenGLProcessor(){
}


    auto EnableFacesShaderOpenGLProcessor::process(GL10* gl, Object* anyType) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_CPP
