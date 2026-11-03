
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_MODIFIEROPENGLESIMAGEPROCESSOR_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_MODIFIEROPENGLESIMAGEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/ModifierOpenGLESImageProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"


ModifierOpenGLESImageProcessor::ModifierOpenGLESImageProcessor() {
        }
        auto ModifierOpenGLESImageProcessor::instanceC_owner() -> ModifierOpenGLESImageProcessor* { static std::unique_ptr<ModifierOpenGLESImageProcessor> value(new ModifierOpenGLESImageProcessor()); return value.get(); }
ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor::instanceC = ModifierOpenGLESImageProcessor::instanceC_owner();

    auto ModifierOpenGLESImageProcessor::getInstance() -> ModifierOpenGLESImageProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModifierOpenGLESImageProcessor::instanceC;
    
}


    auto ModifierOpenGLESImageProcessor::colorMask(GL10* gl, float red, float green, float blue, float alpha) -> void{
gl->glColor4f(red, green, blue, alpha);
    
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_MODIFIEROPENGLESIMAGEPROCESSOR_CPP
