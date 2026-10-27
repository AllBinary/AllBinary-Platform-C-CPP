
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLFeature.h"

class OpenGLFeatureFactory
            : public Object
         {

    private: static OpenGLFeatureFactory* instance() { static std::unique_ptr<OpenGLFeatureFactory> value(new OpenGLFeatureFactory()); return value.get(); }

    public: static OpenGLFeatureFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLFeatureFactory::instance();
    
}


private: OpenGLFeatureFactory(){
}


    public: OpenGLFeature* OPENGL_OPTIONS = new OpenGLFeature("OpenGL Options");

    public: OpenGLFeature* OPENGL = new OpenGLFeature("OpenGL");

    public: OpenGLFeature* OPENGL_SURFACE_VIEW = new OpenGLFeature("GLSurfaceView");

    public: OpenGLFeature* OPENGL_2D = new OpenGLFeature("OpenGL 2D");

    public: OpenGLFeature* OPENGL_3D = new OpenGLFeature("OpenGL 3D");

    public: OpenGLFeature* OPENGL_2D_AND_3D = new OpenGLFeature("OpenGL 2D/3D");

    public: OpenGLFeature* OPENGL_AUTO_SELECT = new OpenGLFeature("Auto Select");

    public: OpenGLFeature* OPENGL_MINIMUM = new OpenGLFeature("Minimum");

    public: OpenGLFeature* OPENGL_AS_GAME_THREAD = new OpenGLFeature("As game thread");

    public: OpenGLFeature* OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS = new OpenGLFeature("As different threads");

    public: OpenGLFeature* IMAGE_COLOR_DEPTH_4444 = new OpenGLFeature("4444");

    public: OpenGLFeature* IMAGE_COLOR_DEPTH_8888 = new OpenGLFeature("8888");

    public: OpenGLFeature* IMAGE_COLOR_DEPTH_565 = new OpenGLFeature("565");

    public: OpenGLFeature* OPENGL_COLOR_DEPTH_4444 = new OpenGLFeature("4444");

    public: OpenGLFeature* OPENGL_COLOR_DEPTH_8888 = new OpenGLFeature("8888");

    public: OpenGLFeature* OPENGL_COLOR_DEPTH_565 = new OpenGLFeature("565");

    public: OpenGLFeature* OPENGL_DRAW_TEXTURE = new OpenGLFeature("GL_OES_draw_texture");

    public: OpenGLFeature* OPENGL_VERTEX_BUFFER_OBJECT = new OpenGLFeature("vertex_buffer_object");

    public: OpenGLFeature* OPENGL_SIMPLE_OBJECT3D_PROCESSOR = new OpenGLFeature("Simple Object3d Processor");

    public: OpenGLFeature* OPENGL_COMPLEX_OBJECT3D_PROCESSOR = new OpenGLFeature("Complex Object3d Processor");

    public: OpenGLFeature* OPENGL_SIMPLE_TEXTURE_PROCESSOR = new OpenGLFeature("Simple Texture Processor");

    public: OpenGLFeature* OPENGL_COMPLEX_TEXTURE_PROCESSOR = new OpenGLFeature("Complex Texture Processor");

};

            

