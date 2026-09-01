
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/khronos/opengles/GL11.h>

      
#include <javax/microedition/khronos/opengles/GL11Ext.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/opengles/OpenGLLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESImage.h"
//Many devices don't support this even though it is supposed to
class OpenGLESGL11ExtImage: public OpenGLESImage {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: int32_t a= 0;

    private: std::vector<int32_t> rectangle;

public: OpenGLESGL11ExtImage(Image image, PlatformBitmapBaseFactory bitmapFactory, PlatformTextureBaseFactory textureFactory){
            super(image, bitmapFactory, textureFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->onDisplayChangeEvent(
                            nullptr);
    
this->rectangle= [0,this->getHeight(), this->getWidth(),  -this->getHeight();];
    
}


    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "onResize");
    
this->a= DisplayInfoSingleton::getInstance().getLastHeight() -this->getHeight();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "onResize", e);
    
}

}


    public: void set(GL gl){
this->onDisplayChangeEvent(
                            nullptr);
    

    GL11 gl11 = gl as GL11;;
    

                        if(super.initTexture(gl11))
                        
                                    {
                                    this->textureFactory.load(gl11, GL10::GL_TEXTURE_2D, 0, this, 0, true);
    
gl11.glTexParameteriv(GL10::GL_TEXTURE_2D, GL11Ext::GL_TEXTURE_CROP_RECT_OES, this->rectangle, 0);
    
gl11.glDisable(GL10::GL_TEXTURE_2D);
    
OpenGLLogUtil::getInstance().logError(gl11, this);
    

                                    }
                                
}


    public: void draw(GL10 gl, int32_t x, int32_t y, int32_t z){
gl.glEnable(GL10::GL_TEXTURE_2D);
    
gl.glBindTexture(GL10::GL_TEXTURE_2D, this->openGLESImageProperties.textureID);
    
gl = glgl as GL11Ext
gl.
                    glDrawTexfOES(x, this->a -y, z, this->getWidth(), this->getHeight());
    
gl.glDisable(GL10::GL_TEXTURE_2D);
    
}


};

            

