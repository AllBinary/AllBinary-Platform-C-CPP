
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

            #include <vector>
        
#include <java/nio/ByteBuffer.h>

      
#include <java/nio/ByteOrder.h>

      
#include <java/nio/FloatBuffer.h>

      
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/opengles/OpenGLLogUtil.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/opengles/GLUtil.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESImage.h"
//This is not actually VBO impl
class OpenGLESGL11VBOImage: public OpenGLESImage {

    private: const GLUtil glUtil = GLUtil::getInstance();

    private: FloatBuffer textureVertexFloatBuffer = ByteBuffer::allocateDirect(4 *4 *2).order(ByteOrder::nativeOrder()).asFloatBuffer();

public: OpenGLESGL11VBOImage(Image image, PlatformBitmapBaseFactory bitmapFactory, PlatformTextureBaseFactory textureFactory);

    protected: void initVertices();

    public: void set(GL gl);

    protected: const std::vector<float> regionRectangleFloatArray = {
                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr
};

    protected: FloatBuffer regionRectangleVertexFloatBuffer = ByteBuffer::allocateDirect(4 *4 *3).order(ByteOrder::nativeOrder()).asFloatBuffer();

    private: const std::vector<float> regionTextureRectangleFloatArray = std::vector<float>(8);

    private: FloatBuffer regionTextureVertexFloatBuffer = ByteBuffer::allocateDirect(4 *4 *2).order(ByteOrder::nativeOrder()).asFloatBuffer();

    public: void drawRegion(GL10 gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);

    public: void draw(GL10 gl, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11VBOIMAGE_H
