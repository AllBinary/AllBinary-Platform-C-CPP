
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/image/opengles/OpenGLESImage.h"
//This is not actually VBO impl
class OpenGLESGL11VBOImage: public OpenGLESImage {

    private: GLUtil* glUtil = GLUtil::getInstance();

    private: FloatBuffer* textureVertexFloatBuffer = ByteBuffer::allocateDirect(4 *4 *2)->order(ByteOrder::nativeOrder())->asFloatBuffer();

public: OpenGLESGL11VBOImage(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) : OpenGLESImage(image, bitmapFactory, textureFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initVertices();
    
this->regionRectangleVertexFloatBuffer->put(FloatBuffer::wrap(this->regionRectangleFloatArray));
    
this->regionTextureVertexFloatBuffer->put(FloatBuffer::wrap(this->regionTextureRectangleFloatArray));
    
}


    protected: void initVertices(){
this->textureVertexFloatBuffer->put(0);
    
this->textureVertexFloatBuffer->put(1);
    
this->textureVertexFloatBuffer->put(1);
    
this->textureVertexFloatBuffer->put(1);
    
this->textureVertexFloatBuffer->put(0);
    
this->textureVertexFloatBuffer->put(0);
    
this->textureVertexFloatBuffer->put(1);
    
this->textureVertexFloatBuffer->put(0);
    
this->textureVertexFloatBuffer->rewind();
    
}


    public: void set(GL* gl){

    GL10* gl10 = dynamic_cast<GL10*>(gl);;
    

                        if(super.initTexture(gl10))
                        
                                    {
                                    this->textureFactory.load(gl10, GL10::GL_TEXTURE_2D, 0, this, 0, true);
    
gl10->glDisable(GL10::GL_TEXTURE_2D);
    
OpenGLLogUtil::getInstance()->logError(gl10, this);
    

                                    }
                                
}


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

    protected: FloatBuffer* regionRectangleVertexFloatBuffer = ByteBuffer::allocateDirect(4 *4 *3)->order(ByteOrder::nativeOrder())->asFloatBuffer();

    private: const std::vector<float> regionTextureRectangleFloatArray = std::vector<float>(8);

    private: FloatBuffer* regionTextureVertexFloatBuffer = ByteBuffer::allocateDirect(4 *4 *2)->order(ByteOrder::nativeOrder())->asFloatBuffer();

    public: void drawRegion(GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z){
this->regionRectangleFloatArray[0]= x;
    
this->regionRectangleFloatArray[7]= viewHeight -y;
    
this->regionRectangleFloatArray[1]= this->regionRectangleFloatArray[7] -height;
    
this->regionRectangleFloatArray[3]= x +width;
    
this->regionRectangleFloatArray[4]= this->regionRectangleFloatArray[1];
    
this->regionRectangleFloatArray[6]= x;
    
this->regionRectangleFloatArray[9]= this->regionRectangleFloatArray[3];
    
this->regionRectangleFloatArray[10]= this->regionRectangleFloatArray[7];
    
this->regionTextureRectangleFloatArray[0]= x_src /this->getWidth();
    
this->regionTextureRectangleFloatArray[1]= (y_src +height) /this->getHeight();
    
this->regionTextureRectangleFloatArray[2]= (x_src +width) /this->getWidth();
    
this->regionTextureRectangleFloatArray[3]= this->regionTextureRectangleFloatArray[1];
    
this->regionTextureRectangleFloatArray[4]= this->regionTextureRectangleFloatArray[0];
    
this->regionTextureRectangleFloatArray[5]= y_src /this->getHeight();
    
this->regionTextureRectangleFloatArray[6]= this->regionTextureRectangleFloatArray[2];
    
this->regionTextureRectangleFloatArray[7]= this->regionTextureRectangleFloatArray[5];
    
this->glUtil->position(this->regionRectangleVertexFloatBuffer, 0);
    
gl->glVertexPointer(3, GL10::GL_FLOAT, 0, this->regionRectangleVertexFloatBuffer);
    
gl->glEnableClientState(GL10::GL_VERTEX_ARRAY);
    
gl->glEnable(GL10::GL_TEXTURE_2D);
    
gl->glBindTexture(GL10::GL_TEXTURE_2D, this->openGLESImageProperties.textureID);
    
gl->glEnableClientState(GL10::GL_TEXTURE_COORD_ARRAY);
    
this->glUtil->position(this->regionTextureVertexFloatBuffer, 0);
    
gl->glTexCoordPointer(2, GL10::GL_FLOAT, 0, this->regionTextureVertexFloatBuffer);
    
gl->glDrawArrays(GL10::GL_TRIANGLE_STRIP, 0, 4);
    
gl->glDisableClientState(GL10::GL_VERTEX_ARRAY);
    
gl->glDisableClientState(GL10::GL_TEXTURE_COORD_ARRAY);
    
gl->glDisable(GL10::GL_TEXTURE_2D);
    
}


    public: void draw(GL10* gl, int32_t x, int32_t y, int32_t z){
this->regionRectangleFloatArray[0]= x;
    
this->regionRectangleFloatArray[7]= (DisplayInfoSingleton::getInstance()->getLastHeight() -y);
    
this->regionRectangleFloatArray[1]= this->regionRectangleFloatArray[7] -this->getHeight();
    
this->regionRectangleFloatArray[3]= (x +this->getWidth());
    
this->regionRectangleFloatArray[4]= this->regionRectangleFloatArray[1];
    
this->regionRectangleFloatArray[6]= x;
    
this->regionRectangleFloatArray[9]= this->regionRectangleFloatArray[3];
    
this->regionRectangleFloatArray[10]= this->regionRectangleFloatArray[7];
    
this->glUtil->position(this->regionRectangleVertexFloatBuffer, 0);
    
gl->glVertexPointer(3, GL10::GL_FLOAT, 0, this->regionRectangleVertexFloatBuffer);
    
gl->glEnableClientState(GL10::GL_VERTEX_ARRAY);
    
gl->glEnable(GL10::GL_TEXTURE_2D);
    
gl->glBindTexture(GL10::GL_TEXTURE_2D, this->openGLESImageProperties.textureID);
    
gl->glEnableClientState(GL10::GL_TEXTURE_COORD_ARRAY);
    
this->glUtil->position(this->textureVertexFloatBuffer, 0);
    
gl->glTexCoordPointer(2, GL10::GL_FLOAT, 0, this->textureVertexFloatBuffer);
    
gl->glDrawArrays(GL10::GL_TRIANGLE_STRIP, 0, 4);
    
gl->glDisableClientState(GL10::GL_VERTEX_ARRAY);
    
gl->glDisableClientState(GL10::GL_TEXTURE_COORD_ARRAY);
    
gl->glDisable(GL10::GL_TEXTURE_2D);
    
}


};

            

