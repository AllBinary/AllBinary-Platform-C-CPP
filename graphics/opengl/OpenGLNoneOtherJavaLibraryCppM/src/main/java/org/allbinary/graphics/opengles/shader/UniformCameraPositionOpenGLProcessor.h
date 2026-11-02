
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMCAMERAPOSITIONOPENGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMCAMERAPOSITIONOPENGLPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL10;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
class ShaderComposite;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UniformCameraPositionOpenGLProcessor: public OpenGLObject3dProcessor {

public: UniformCameraPositionOpenGLProcessor(ShaderComposite* shaderComposite, int32_t handleIndex);

    public: void process(GL10* gl, Object* anyType);
    public: void process(GL10* gl, const std::string& anyType) { return process(gl, JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void process(GL10* gl, BoxValue anyType) { return process(gl, JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMCAMERAPOSITIONOPENGLPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMCAMERAPOSITIONOPENGLPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMCAMERAPOSITIONOPENGLPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h")
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ShaderComposite.h")
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
#endif

        #endif
    
