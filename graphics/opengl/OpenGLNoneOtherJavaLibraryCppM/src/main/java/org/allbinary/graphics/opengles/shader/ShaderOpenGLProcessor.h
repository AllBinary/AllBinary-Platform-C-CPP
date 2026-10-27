
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADEROPENGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADEROPENGLPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GL10;
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShaderOpenGLProcessor: public OpenGLProcessor {

public: ShaderOpenGLProcessor();

    public: void process0(GL10* gl);

    public: void process1(GL10* gl);

    public: void process(GL10* gl);

    public: void process2(GL10* gl);

    public: void process3(GL10* gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADEROPENGLPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADEROPENGLPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADEROPENGLPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLProcessor.h>)
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>
#endif

        #endif
    
