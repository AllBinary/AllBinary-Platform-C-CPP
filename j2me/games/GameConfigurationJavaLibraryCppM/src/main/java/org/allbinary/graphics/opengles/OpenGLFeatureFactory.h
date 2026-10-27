
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLFeature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLFeatureFactory
            : public virtual Object
         {

    private: static OpenGLFeatureFactory* instance_owner();
    private: static OpenGLFeatureFactory* instance;

    public: static OpenGLFeatureFactory* getInstance();

private: OpenGLFeatureFactory();

    public: OpenGLFeature* OPENGL_OPTIONS;

    public: OpenGLFeature* OPENGL;

    public: OpenGLFeature* OPENGL_SURFACE_VIEW;

    public: OpenGLFeature* OPENGL_2D;

    public: OpenGLFeature* OPENGL_3D;

    public: OpenGLFeature* OPENGL_2D_AND_3D;

    public: OpenGLFeature* OPENGL_AUTO_SELECT;

    public: OpenGLFeature* OPENGL_MINIMUM;

    public: OpenGLFeature* OPENGL_AS_GAME_THREAD;

    public: OpenGLFeature* OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS;

    public: OpenGLFeature* IMAGE_COLOR_DEPTH_4444;

    public: OpenGLFeature* IMAGE_COLOR_DEPTH_8888;

    public: OpenGLFeature* IMAGE_COLOR_DEPTH_565;

    public: OpenGLFeature* OPENGL_COLOR_DEPTH_4444;

    public: OpenGLFeature* OPENGL_COLOR_DEPTH_8888;

    public: OpenGLFeature* OPENGL_COLOR_DEPTH_565;

    public: OpenGLFeature* OPENGL_DRAW_TEXTURE;

    public: OpenGLFeature* OPENGL_VERTEX_BUFFER_OBJECT;

    public: OpenGLFeature* OPENGL_SIMPLE_OBJECT3D_PROCESSOR;

    public: OpenGLFeature* OPENGL_COMPLEX_OBJECT3D_PROCESSOR;

    public: OpenGLFeature* OPENGL_SIMPLE_TEXTURE_PROCESSOR;

    public: OpenGLFeature* OPENGL_COMPLEX_TEXTURE_PROCESSOR;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/graphics/opengles/OpenGLFeature.h")
#include "org/allbinary/graphics/opengles/OpenGLFeature.h"
#endif

        #endif
    
