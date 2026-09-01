
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMLIGHTPOSITIONOPENGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMLIGHTPOSITIONOPENGLPROCESSOR_H

#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLObject3dProcessor.h"
#include "ShaderComposite.h"

class UniformLightPositionOpenGLProcessor: public OpenGLObject3dProcessor {

public: UniformLightPositionOpenGLProcessor(ShaderComposite shaderComposite, int32_t handleIndex);

    public: void process(GL10 gl, Object* unused);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMLIGHTPOSITIONOPENGLPROCESSOR_H
