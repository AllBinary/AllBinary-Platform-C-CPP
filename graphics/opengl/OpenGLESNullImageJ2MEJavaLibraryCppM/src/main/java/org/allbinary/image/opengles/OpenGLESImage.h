
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GL;
class GL10;
class Image;
class NullImage;
class PlatformBitmapBase;
class PlatformBitmapBaseFactory;
class PlatformTextureBaseFactory;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
class OpenGLESImageProperties;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //OpenGLESNullImageJ2MEJavaLibrary
class OpenGLESImage
            : public virtual Object
        , public OpenGLSurfaceChangedInterface {

    private: static OpenGLESImage* NULL_OPENGL_IMAGE_owner();
    public: static OpenGLESImage* NULL_OPENGL_IMAGE;

    public: static BasicArrayList* texture2dList;

    public: static inline const int32_t TYPE = 4;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: PlatformTextureBaseFactory* textureFactory;

    public: PlatformBitmapBase* openGLBitmap;

    public: OpenGLESImageProperties* openGLESImageProperties;

public: OpenGLESImage(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

                //@Throws(Exception.constructor)
            
    public: void set(GL* gl);

    /*protected*/ public: bool initTexture(GL10* gl);

    public: void drawRegion(GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);

    public: void draw(GL10* gl, int32_t x, int32_t y, int32_t z);

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/platform/graphics/PlatformBitmapBase.h>)
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>
#endif
#if __has_include(<org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>)
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>
#endif
#if __has_include(<org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>)
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h")
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESImageProperties.h")
#include "org/allbinary/image/opengles/OpenGLESImageProperties.h"
#endif

        #endif
    
