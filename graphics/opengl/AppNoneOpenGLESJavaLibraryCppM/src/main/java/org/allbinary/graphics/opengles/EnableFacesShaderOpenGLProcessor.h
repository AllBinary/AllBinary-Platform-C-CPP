
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_H

#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EnableFacesShaderOpenGLProcessor: public ObjectThreedOpenGLProcessor {

    private: static EnableFacesShaderOpenGLProcessor instance() { return EnableFacesShaderOpenGLProcessor(); }

    public: static EnableFacesShaderOpenGLProcessor getInstance();

public: EnableFacesShaderOpenGLProcessor();

    public: void process(GL10 gl, Object* anyType);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_H
