
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLESImage.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <javax/microedition/lcdui/OpenGLESPostLoadPlatformImage.h>

      
#include <javax/microedition/lcdui/PostLoadImageProcessor.h>

      
#include <org/allbinary/graphics/GraphicsStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"
#include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
#include "org/allbinary/image/opengles/OpenGLESImageProperties.h"
#include "org/allbinary/image/opengles/OpenGLImageCacheFactory.h"
//OpenGLESSWTJOGLImageJavaLibrary
auto OpenGLESImage::NULL_OPENGL_IMAGE_owner() -> OpenGLESImage* { static std::unique_ptr<OpenGLESImage> value(new OpenGLESImage(NullImage::NULL_IMAGE, PlatformBitmapBaseFactory::NULL_PLATFORM_BITMAP_BASE_FACTORY, PlatformTextureBaseFactory::NULL_PLATFORM_TEXTURE_BASE_FACTORY)); return value.get(); }
OpenGLESImage* OpenGLESImage::NULL_OPENGL_IMAGE = OpenGLESImage::NULL_OPENGL_IMAGE_owner();
BasicArrayList* OpenGLESImage::texture2dList = new BasicArrayListD();

OpenGLESImage::OpenGLESImage(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) : Image(image->getName(), PostLoadImageProcessor::NULL_POST_LOAD_IMAGE_PROCESSOR), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageProcessor(OpenGLESImageProcessor::getInstance()), openGLESImageTranslate(OpenGLESImageTranslate::getInstance()), openGLESImageProperties(new OpenGLESImageProperties()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->openGLBitmap= bitmapFactory->createBitmap(image);
    
this->textureFactory= textureFactory;
    
OpenGLImageCacheFactory::getInstance()->init(this);
    
this->platformImage= OpenGLESPostLoadPlatformImage::getInstance();
    
}


    auto OpenGLESImage::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>((this->openGLBitmap->getHeight() *this->openGLESImageProperties->scaleY2));
    
}


    auto OpenGLESImage::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>((this->openGLBitmap->getWidth() *this->openGLESImageProperties->scaleX2));
    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLESImage::set(GL* gl) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto OpenGLESImage::initTexture(GL10* gl) -> bool{

                        if(!OpenGLESImage::texture2dList->contains(this))
                        
                                    {
                                    OpenGLESImage::texture2dList->add(this);
    

    std::vector<int32_t> textures = std::vector<int32_t>(1);;
    
gl->glEnable(GL10::GL_TEXTURE_2D);
    

                        if(this->openGLESImageProperties->textureID !=  -1)
                        
                                    {
                                    textures[0]= this->openGLESImageProperties->textureID;
    
gl->glDeleteTextures(1, textures, 0);
    

                                    }
                                
gl->glGenTextures(1, textures, 0);
    
this->openGLESImageProperties->textureID= textures[0];
    
gl->glBindTexture(GL10::GL_TEXTURE_2D, this->openGLESImageProperties->textureID);
    
gl->glTexParameterf(GL10::GL_TEXTURE_2D, GL10::GL_TEXTURE_MIN_FILTER, GL10::GL_NEAREST);
    
gl->glTexParameterf(GL10::GL_TEXTURE_2D, GL10::GL_TEXTURE_WRAP_S, GL10::GL_CLAMP_TO_EDGE);
    
gl->glTexParameterf(GL10::GL_TEXTURE_2D, GL10::GL_TEXTURE_WRAP_T, GL10::GL_CLAMP_TO_EDGE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto OpenGLESImage::drawRegion(GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z) -> void{
}


    auto OpenGLESImage::draw(GL10* gl, int32_t x, int32_t y, int32_t z) -> void{
}


    auto OpenGLESImage::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLESImage::TYPE;
    
}


    auto OpenGLESImage::toString() -> std::string{

    GraphicsStrings* graphicsStrings = GraphicsStrings::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (new StringMaker())->append(this->getName())->append(Image::toString())->append(graphicsStrings->OPACITY)->appendfloat(this->openGLESImageProperties->alphaf)->toString();;
    
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_CPP
