
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

    private: const FloatBuffer textureVertexFloatBuffer = ByteBuffer::allocateDirect(4 *4 *2).order(ByteOrder::nativeOrder()).asFloatBuffer();

    private: const OpenGLESImageDraw realOpenGLESImageDraw = class extends OpenGLESImageDraw
                                {
                                
    const GLUtil glUtil = GLUtil::getInstance();
    const DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();
    const FloatBuffer textureVertexFloatBuffer = this->textureVertexFloatBuffer;
    const std::vector<float> regionTextureRectangleFloatArray = new Array(8);
    const FloatBuffer regionTextureVertexFloatBuffer = ByteBuffer::allocateDirect(4 *4 *2).order(ByteOrder::nativeOrder()).asFloatBuffer();
    const std::vector<float> regionRectangleFloatArray = {0,0,0,0,0,0,0,0,0,0,0,0};
    const FloatBuffer regionRectangleVertexFloatBuffer = ByteBuffer::allocateDirect(4 *4 *3).order(ByteOrder::nativeOrder()).asFloatBuffer();
    const OpenGLESImageProperties openGLESImageProperties = this->openGLESImageProperties;
    public: void drawRegion(GL10 gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z){

    int32_t imageWidth = this->getWidth();;
    

    int32_t imageHeight = this->getHeight();;
    
this->regionRectangleFloatArray[7]= viewHeight;
    
this->regionRectangleFloatArray[1]= this->regionRectangleFloatArray[7] -height;
    
this->regionRectangleFloatArray[3]= width;
    
this->regionRectangleFloatArray[4]= this->regionRectangleFloatArray[1]!;
    
this->regionRectangleFloatArray[9]= this->regionRectangleFloatArray[3]!;
    
this->regionRectangleFloatArray[10]= this->regionRectangleFloatArray[7]!;
    
this->regionTextureRectangleFloatArray[0]= x_src /imageWidth;
    
this->regionTextureRectangleFloatArray[1]= () /imageHeight;
    
this->regionTextureRectangleFloatArray[2]= () /imageWidth;
    
this->regionTextureRectangleFloatArray[3]= this->regionTextureRectangleFloatArray[1]!;
    
this->regionTextureRectangleFloatArray[4]= this->regionTextureRectangleFloatArray[0]!;
    
this->regionTextureRectangleFloatArray[5]= y_src /imageHeight;
    
this->regionTextureRectangleFloatArray[6]= this->regionTextureRectangleFloatArray[2]!;
    
this->regionTextureRectangleFloatArray[7]= this->regionTextureRectangleFloatArray[5]!;
    

    float u_center = (this->regionTextureRectangleFloatArray[0] +this->regionTextureRectangleFloatArray[2]) /2.0;;
    

    float v_center = (this->regionTextureRectangleFloatArray[5] +this->regionTextureRectangleFloatArray[1]) /2.0;;
    
this->glUtil.rotateUVs(this->regionTextureRectangleFloatArray,  -this->openGLESImageProperties.angle, u_center, v_center);
    
gl.glPushMatrix();
    

    OpenGLESImageProcessor imageProcessor = this->imageProcessor;;
    
this->openGLESImageTranslate.translate(gl, this, x,  -y);
    
imageProcessor.scale(gl, this->openGLESImageProperties.scaleX, this->openGLESImageProperties.scaleY);
    
imageProcessor.colorMask(gl, this->openGLESImageProperties.redf, this->openGLESImageProperties.greenf, this->openGLESImageProperties.bluef, this->openGLESImageProperties.alphaf);
    
this->openGLESImageTranslate.translate2(gl, this);
    
this->regionRectangleVertexFloatBuffer.put(this->regionRectangleFloatArray);
    
this->glUtil.position(this->regionRectangleVertexFloatBuffer, 0);
    
gl.glVertexPointer(3, GL10::GL_FLOAT, 0, this->regionRectangleVertexFloatBuffer);
    
gl.glEnableClientState(GL10::GL_VERTEX_ARRAY);
    
gl.glEnable(GL10::GL_TEXTURE_2D);
    
gl.glBindTexture(GL10::GL_TEXTURE_2D, this->openGLESImageProperties.textureID);
    
gl.glEnableClientState(GL10::GL_TEXTURE_COORD_ARRAY);
    
this->regionTextureVertexFloatBuffer.put(this->regionTextureRectangleFloatArray);
    
this->glUtil.position(this->regionTextureVertexFloatBuffer, 0);
    
gl.glTexCoordPointer(2, GL10::GL_FLOAT, 0, this->regionTextureVertexFloatBuffer);
    
gl.glDrawArrays(GL10::GL_TRIANGLE_STRIP, 0, 4);
    
gl.glDisableClientState(GL10::GL_VERTEX_ARRAY);
    
gl.glDisableClientState(GL10::GL_TEXTURE_COORD_ARRAY);
    
gl.glDisable(GL10::GL_TEXTURE_2D);
    
gl.glPopMatrix();
    
}

    public: void draw(GL10 gl, int32_t x, int32_t y, int32_t z){

    int32_t width = this->getWidth();;
    

    int32_t height = this->getHeight();;
    
this->regionRectangleFloatArray[7]= this->displayInfoSingleton.getLastHeight();
    
this->regionRectangleFloatArray[1]= this->regionRectangleFloatArray[7] -height;
    
this->regionRectangleFloatArray[3]= width;
    
this->regionRectangleFloatArray[4]= this->regionRectangleFloatArray[1]!;
    
this->regionRectangleFloatArray[9]= this->regionRectangleFloatArray[3]!;
    
this->regionRectangleFloatArray[10]= this->regionRectangleFloatArray[7]!;
    
this->regionTextureRectangleFloatArray[0]= 0;
    
this->regionTextureRectangleFloatArray[1]= 1;
    
this->regionTextureRectangleFloatArray[2]= 1;
    
this->regionTextureRectangleFloatArray[3]= 1;
    
this->regionTextureRectangleFloatArray[4]= 0;
    
this->regionTextureRectangleFloatArray[5]= 0;
    
this->regionTextureRectangleFloatArray[6]= 1;
    
this->regionTextureRectangleFloatArray[7]= 0;
    
gl.glPushMatrix();
    
this->openGLESImageTranslate.translate(gl, this, x,  -y);
    

    OpenGLESImageProcessor imageProcessor = this->imageProcessor;;
    
imageProcessor.scale(gl, this->openGLESImageProperties.scaleX, this->openGLESImageProperties.scaleY);
    
imageProcessor.colorMask(gl, this->openGLESImageProperties.redf, this->openGLESImageProperties.greenf, this->openGLESImageProperties.bluef, this->openGLESImageProperties.alphaf);
    
this->openGLESImageTranslate.translate2(gl, this);
    
this->regionRectangleVertexFloatBuffer.put(this->regionRectangleFloatArray);
    
this->glUtil.position(this->regionRectangleVertexFloatBuffer, 0);
    
gl.glVertexPointer(3, GL10::GL_FLOAT, 0, this->regionRectangleVertexFloatBuffer);
    
gl.glEnableClientState(GL10::GL_VERTEX_ARRAY);
    
gl.glEnable(GL10::GL_TEXTURE_2D);
    
gl.glBindTexture(GL10::GL_TEXTURE_2D, this->openGLESImageProperties.textureID);
    
gl.glEnableClientState(GL10::GL_TEXTURE_COORD_ARRAY);
    
this->glUtil.rotateUVs(this->regionTextureRectangleFloatArray,  -this->openGLESImageProperties.angle, 0.5, 0.5);
    
this->glUtil.position(this->textureVertexFloatBuffer, 0);
    
this->textureVertexFloatBuffer.put(this->regionTextureRectangleFloatArray);
    
this->glUtil.position(this->textureVertexFloatBuffer, 0);
    
gl.glTexCoordPointer(2, GL10::GL_FLOAT, 0, this->textureVertexFloatBuffer);
    
gl.glDrawArrays(GL10::GL_TRIANGLE_STRIP, 0, 4);
    
gl.glDisableClientState(GL10::GL_VERTEX_ARRAY);
    
gl.glDisableClientState(GL10::GL_TEXTURE_COORD_ARRAY);
    
gl.glDisable(GL10::GL_TEXTURE_2D);
    
gl.glPopMatrix();
    
}

                                }
                            ;

    private: OpenGLESImageDraw openGLESImageDraw = OpenGLESImageDraw::getInstance();

public: OpenGLESGL10Image(Image image, PlatformBitmapBaseFactory bitmapFactory, PlatformTextureBaseFactory textureFactory){
            super(image, bitmapFactory, textureFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initVertices();
    
}


    protected: void initVertices(){
this->textureVertexFloatBuffer.put(0);
    
this->textureVertexFloatBuffer.put(1);
    
this->textureVertexFloatBuffer.put(1);
    
this->textureVertexFloatBuffer.put(1);
    
this->textureVertexFloatBuffer.put(0);
    
this->textureVertexFloatBuffer.put(0);
    
this->textureVertexFloatBuffer.put(1);
    
this->textureVertexFloatBuffer.put(0);
    
this->textureVertexFloatBuffer.rewind();
    
}


    public: void set(GL gl){

    GL10 gl10 = gl as GL10;;
    

                        if(super.initTexture(gl10))
                        
                                    {
                                    this->textureFactory.load(gl10, GL10::GL_TEXTURE_2D, 0, this, 0, true);
    
gl10.glDisable(GL10::GL_TEXTURE_2D);
    
this->openGLESImageDraw= this->realOpenGLESImageDraw;
    
OpenGLLogUtil::getInstance().logError(gl10, this);
    

                                    }
                                
}


    public: void drawRegion(GL10 gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z){
this->openGLESImageDraw.drawRegion(gl, viewHeight, x_src, y_src, width, height, x, y, z);
    
}


    public: void draw(GL10 gl, int32_t x, int32_t y, int32_t z){
this->openGLESImageDraw.draw(gl, x, y, z);
    
}


};

            

