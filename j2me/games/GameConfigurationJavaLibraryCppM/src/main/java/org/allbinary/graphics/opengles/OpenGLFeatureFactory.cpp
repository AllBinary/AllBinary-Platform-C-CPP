
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLFeature.h"

class OpenGLFeatureFactory
            : public Object
         {

    private: static OpenGLFeatureFactory instance() { return OpenGLFeatureFactory(); }

    public: static OpenGLFeatureFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLFeatureFactory::instance();
    
}


private: OpenGLFeatureFactory(){
}


    public: const OpenGLFeature OPENGL_OPTIONS = OpenGLFeature("OpenGL Options");

    public: const OpenGLFeature OPENGL = OpenGLFeature("OpenGL");

    public: const OpenGLFeature OPENGL_SURFACE_VIEW = OpenGLFeature("GLSurfaceView");

    public: const OpenGLFeature OPENGL_2D = OpenGLFeature("OpenGL 2D");

    public: const OpenGLFeature OPENGL_3D = OpenGLFeature("OpenGL 3D");

    public: const OpenGLFeature OPENGL_2D_AND_3D = OpenGLFeature("OpenGL 2D/3D");

    public: const OpenGLFeature OPENGL_AUTO_SELECT = OpenGLFeature("Auto Select");

    public: const OpenGLFeature OPENGL_MINIMUM = OpenGLFeature("Minimum");

    public: const OpenGLFeature OPENGL_AS_GAME_THREAD = OpenGLFeature("As game thread");

    public: const OpenGLFeature OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS = OpenGLFeature("As different threads");

    public: const OpenGLFeature IMAGE_COLOR_DEPTH_4444 = OpenGLFeature("4444");

    public: const OpenGLFeature IMAGE_COLOR_DEPTH_8888 = OpenGLFeature("8888");

    public: const OpenGLFeature IMAGE_COLOR_DEPTH_565 = OpenGLFeature("565");

    public: const OpenGLFeature OPENGL_COLOR_DEPTH_4444 = OpenGLFeature("4444");

    public: const OpenGLFeature OPENGL_COLOR_DEPTH_8888 = OpenGLFeature("8888");

    public: const OpenGLFeature OPENGL_COLOR_DEPTH_565 = OpenGLFeature("565");

    public: const OpenGLFeature OPENGL_DRAW_TEXTURE = OpenGLFeature("GL_OES_draw_texture");

    public: const OpenGLFeature OPENGL_VERTEX_BUFFER_OBJECT = OpenGLFeature("vertex_buffer_object");

    public: const OpenGLFeature OPENGL_SIMPLE_OBJECT3D_PROCESSOR = OpenGLFeature("Simple Object3d Processor");

    public: const OpenGLFeature OPENGL_COMPLEX_OBJECT3D_PROCESSOR = OpenGLFeature("Complex Object3d Processor");

    public: const OpenGLFeature OPENGL_SIMPLE_TEXTURE_PROCESSOR = OpenGLFeature("Simple Texture Processor");

    public: const OpenGLFeature OPENGL_COMPLEX_TEXTURE_PROCESSOR = OpenGLFeature("Complex Texture Processor");

};

            

