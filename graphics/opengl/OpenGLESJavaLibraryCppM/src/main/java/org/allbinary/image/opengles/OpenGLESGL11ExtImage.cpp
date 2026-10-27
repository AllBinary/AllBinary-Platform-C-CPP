
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGE_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLESGL11ExtImage.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/image/opengles/OpenGLESImage.h"
//Many devices don't support this even though it is supposed to

OpenGLESGL11ExtImage::OpenGLESGL11ExtImage(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) : OpenGLESImage(image, bitmapFactory, textureFactory), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->onDisplayChangeEvent(DisplayInfoSingleton::getInstance()->displayChangeEvent);
    
this->rectangle= {0,this->getHeight(), this->getWidth(),  -this->getHeight();};
    
}


    auto OpenGLESGL11ExtImage::onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "onResize");
    
this->a= DisplayInfoSingleton::getInstance()->getLastHeight() -this->getHeight();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onResize", &e);
    
}

}


    auto OpenGLESGL11ExtImage::set(GL* gl) -> void{
this->onDisplayChangeEvent(DisplayInfoSingleton::getInstance()->displayChangeEvent);
    

    GL11* gl11 = dynamic_cast<GL11*>(gl);;
    

                        if(OpenGLESImage::initTexture(gl11))
                        
                                    {
                                    this->textureFactory->load(gl11, GL10::GL_TEXTURE_2D, 0, this, 0, true);
    
gl11->glTexParameteriv(GL10::GL_TEXTURE_2D, GL11Ext::GL_TEXTURE_CROP_RECT_OES, this->rectangle, 0);
    
gl11->glDisable(GL10::GL_TEXTURE_2D);
    
OpenGLLogUtil::getInstance()->logError(gl11, this);
    

                                    }
                                
}


    auto OpenGLESGL11ExtImage::draw(GL10* gl, int32_t x, int32_t y, int32_t z) -> void{
gl->glEnable(GL10::GL_TEXTURE_2D);
    
gl->glBindTexture(GL10::GL_TEXTURE_2D, this->openGLESImageProperties->textureID);
    

    GL11Ext* gl11Ext = dynamic_cast<GL11Ext*>(gl);;
    
gl11Ext->glDrawTexfOES(x, (this->a -y), z, this->getWidth(), this->getHeight());
    
gl->glDisable(GL10::GL_TEXTURE_2D);
    
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGE_CPP
