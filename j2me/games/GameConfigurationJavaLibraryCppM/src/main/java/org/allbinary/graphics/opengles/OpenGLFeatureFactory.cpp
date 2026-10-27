
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLFeature.h"

auto OpenGLFeatureFactory::instance_owner() -> OpenGLFeatureFactory* { static std::unique_ptr<OpenGLFeatureFactory> value(new OpenGLFeatureFactory()); return value.get(); }
OpenGLFeatureFactory* OpenGLFeatureFactory::instance = OpenGLFeatureFactory::instance_owner();

    auto OpenGLFeatureFactory::getInstance() -> OpenGLFeatureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLFeatureFactory::instance;
    
}


OpenGLFeatureFactory::OpenGLFeatureFactory() : OPENGL_OPTIONS(new OpenGLFeature("OpenGL Options")), OPENGL(new OpenGLFeature("OpenGL")), OPENGL_SURFACE_VIEW(new OpenGLFeature("GLSurfaceView")), OPENGL_2D(new OpenGLFeature("OpenGL 2D")), OPENGL_3D(new OpenGLFeature("OpenGL 3D")), OPENGL_2D_AND_3D(new OpenGLFeature("OpenGL 2D/3D")), OPENGL_AUTO_SELECT(new OpenGLFeature("Auto Select")), OPENGL_MINIMUM(new OpenGLFeature("Minimum")), OPENGL_AS_GAME_THREAD(new OpenGLFeature("As game thread")), OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS(new OpenGLFeature("As different threads")), IMAGE_COLOR_DEPTH_4444(new OpenGLFeature("4444")), IMAGE_COLOR_DEPTH_8888(new OpenGLFeature("8888")), IMAGE_COLOR_DEPTH_565(new OpenGLFeature("565")), OPENGL_COLOR_DEPTH_4444(new OpenGLFeature("4444")), OPENGL_COLOR_DEPTH_8888(new OpenGLFeature("8888")), OPENGL_COLOR_DEPTH_565(new OpenGLFeature("565")), OPENGL_DRAW_TEXTURE(new OpenGLFeature("GL_OES_draw_texture")), OPENGL_VERTEX_BUFFER_OBJECT(new OpenGLFeature("vertex_buffer_object")), OPENGL_SIMPLE_OBJECT3D_PROCESSOR(new OpenGLFeature("Simple Object3d Processor")), OPENGL_COMPLEX_OBJECT3D_PROCESSOR(new OpenGLFeature("Complex Object3d Processor")), OPENGL_SIMPLE_TEXTURE_PROCESSOR(new OpenGLFeature("Simple Texture Processor")), OPENGL_COMPLEX_TEXTURE_PROCESSOR(new OpenGLFeature("Complex Texture Processor")){
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_CPP
