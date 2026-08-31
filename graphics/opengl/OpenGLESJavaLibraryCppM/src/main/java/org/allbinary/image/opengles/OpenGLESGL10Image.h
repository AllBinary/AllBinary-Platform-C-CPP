
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL10IMAGE_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL10IMAGE_H

#include <java/nio/ByteBuffer.h>

      
#include <java/nio/ByteOrder.h>

      
#include <java/nio/FloatBuffer.h>

      
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/opengles/OpenGLLogUtil.h>

      
#include <org/allbinary/opengles/GLUtil.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESImage.h"
#include "OpenGLESImageDraw.h"
#include "OpenGLESImageProperties.h"
#include "OpenGLESImageProcessor.h"

class OpenGLESGL10Image: public OpenGLESImage {
        

    private: const textureVertexFloatBuffer: FloatBuffer = ByteBuffer.allocateDirect(4 *4 *2)!.order(ByteOrder.nativeOrder())!.asFloatBuffer()!;

    private: const realOpenGLESImageDraw: OpenGLESImageDraw = new class extends OpenGLESImageDraw
                                {
                                
    private: const glUtil: GLUtil = GLUtil.getInstance()!;
    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;
    private: const textureVertexFloatBuffer: FloatBuffer = this::.textureVertexFloatBuffer;
    private: const regionTextureRectangleFloatArray: std::vector<float> = new Array(8);
    private: const regionTextureVertexFloatBuffer: FloatBuffer = ByteBuffer.allocateDirect(4 *4 *2)!.order(ByteOrder.nativeOrder())!.asFloatBuffer()!;
    private: const regionRectangleFloatArray: std::vector<float> = [0,0,0,0,0,0,0,0,0,0,0,0];
    const regionRectangleVertexFloatBuffer: FloatBuffer = ByteBuffer.allocateDirect(4 *4 *3)!.order(ByteOrder.nativeOrder())!.asFloatBuffer()!;
    const openGLESImageProperties: OpenGLESImageProperties = this::.openGLESImageProperties;
    public drawRegion(GL10 gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);
    public draw(GL10 gl, int32_t x, int32_t y, int32_t z);
                                }
                            ;

    private: openGLESImageDraw: OpenGLESImageDraw = OpenGLESImageDraw.getInstance()!;

public constructor (Image image, PlatformBitmapBaseFactory bitmapFactory, PlatformTextureBaseFactory textureFactory);

    initVertices();

    public set(GL gl);

    public drawRegion(GL10 gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);

    public draw(GL10 gl, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL10IMAGE_H
