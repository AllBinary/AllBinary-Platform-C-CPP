
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_H

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
        

    private: static const instance: OpenGLFeatureFactory = new OpenGLFeatureFactory();

    public static OpenGLFeatureFactory getInstance();

private constructor ();

    public const OPENGL_OPTIONS: OpenGLFeature = new OpenGLFeature("OpenGL Options");

    public const OPENGL: OpenGLFeature = new OpenGLFeature("OpenGL");

    public const OPENGL_SURFACE_VIEW: OpenGLFeature = new OpenGLFeature("GLSurfaceView");

    public const OPENGL_2D: OpenGLFeature = new OpenGLFeature("OpenGL 2D");

    public const OPENGL_3D: OpenGLFeature = new OpenGLFeature("OpenGL 3D");

    public const OPENGL_2D_AND_3D: OpenGLFeature = new OpenGLFeature("OpenGL 2D/3D");

    public const OPENGL_AUTO_SELECT: OpenGLFeature = new OpenGLFeature("Auto Select");

    public const OPENGL_MINIMUM: OpenGLFeature = new OpenGLFeature("Minimum");

    public const OPENGL_AS_GAME_THREAD: OpenGLFeature = new OpenGLFeature("As game thread");

    public const OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS: OpenGLFeature = new OpenGLFeature("As different threads");

    public const IMAGE_COLOR_DEPTH_4444: OpenGLFeature = new OpenGLFeature("4444");

    public const IMAGE_COLOR_DEPTH_8888: OpenGLFeature = new OpenGLFeature("8888");

    public const IMAGE_COLOR_DEPTH_565: OpenGLFeature = new OpenGLFeature("565");

    public const OPENGL_COLOR_DEPTH_4444: OpenGLFeature = new OpenGLFeature("4444");

    public const OPENGL_COLOR_DEPTH_8888: OpenGLFeature = new OpenGLFeature("8888");

    public const OPENGL_COLOR_DEPTH_565: OpenGLFeature = new OpenGLFeature("565");

    public const OPENGL_DRAW_TEXTURE: OpenGLFeature = new OpenGLFeature("GL_OES_draw_texture");

    public const OPENGL_VERTEX_BUFFER_OBJECT: OpenGLFeature = new OpenGLFeature("vertex_buffer_object");

    public const OPENGL_SIMPLE_OBJECT3D_PROCESSOR: OpenGLFeature = new OpenGLFeature("Simple Object3d Processor");

    public const OPENGL_COMPLEX_OBJECT3D_PROCESSOR: OpenGLFeature = new OpenGLFeature("Complex Object3d Processor");

    public const OPENGL_SIMPLE_TEXTURE_PROCESSOR: OpenGLFeature = new OpenGLFeature("Simple Texture Processor");

    public const OPENGL_COMPLEX_TEXTURE_PROCESSOR: OpenGLFeature = new OpenGLFeature("Complex Texture Processor");

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_H
