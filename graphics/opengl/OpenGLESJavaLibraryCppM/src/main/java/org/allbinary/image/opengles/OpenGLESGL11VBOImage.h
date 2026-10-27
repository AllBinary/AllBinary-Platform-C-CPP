
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11VBOIMAGE_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11VBOIMAGE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
class GL;
class GL10;
class Image;
class OpenGLLogUtil;
class DisplayInfoSingleton;
class GLUtil;
class PlatformBitmapBaseFactory;
class PlatformTextureBaseFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLESImage.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //This is not actually VBO impl
class OpenGLESGL11VBOImage: public OpenGLESImage {

    private: GLUtil* glUtil;

    private: FloatBuffer* textureVertexFloatBuffer;

public: OpenGLESGL11VBOImage(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

    /*protected*/ public: void initVertices();

    public: void set(GL* gl);

    /*protected*/ public: std::vector<float> regionRectangleFloatArray;

    /*protected*/ public: FloatBuffer* regionRectangleVertexFloatBuffer;

    private: std::vector<float> regionTextureRectangleFloatArray;

    private: FloatBuffer* regionTextureVertexFloatBuffer;

    public: void drawRegion(GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);

    public: void draw(GL10* gl, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11VBOIMAGE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11VBOIMAGE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11VBOIMAGE_H_COMPLETE
        #if __has_include(<java/nio/ByteBuffer.h>)
#include <java/nio/ByteBuffer.h>
#endif
#if __has_include(<java/nio/ByteOrder.h>)
#include <java/nio/ByteOrder.h>
#endif
#if __has_include(<java/nio/FloatBuffer.h>)
#include <java/nio/FloatBuffer.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLLogUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLLogUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/opengles/GLUtil.h>)
#include <org/allbinary/opengles/GLUtil.h>
#endif
#if __has_include(<org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>)
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>
#endif
#if __has_include(<org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>)
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESImage.h")
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#endif

        #endif
    
