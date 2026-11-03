
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
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/image/opengles/OpenGLESImageProperties.h"
#include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"
#include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
//OpenGLESNullImageJavaLibrary
auto OpenGLESImage::NULL_OPENGL_IMAGE_owner() -> OpenGLESImage* { static std::unique_ptr<OpenGLESImage> value(new OpenGLESImage(NullImage::NULL_IMAGE, PlatformBitmapBaseFactory::NULL_PLATFORM_BITMAP_BASE_FACTORY, PlatformTextureBaseFactory::NULL_PLATFORM_TEXTURE_BASE_FACTORY)); return value.get(); }
OpenGLESImage* OpenGLESImage::NULL_OPENGL_IMAGE = OpenGLESImage::NULL_OPENGL_IMAGE_owner();
BasicArrayList* OpenGLESImage::texture2dList = new BasicArrayListD();

OpenGLESImage::OpenGLESImage(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) : commonStrings(CommonStrings::getInstance()), openGLESImageProperties(new OpenGLESImageProperties()), imageProcessor(OpenGLESImageProcessor::getInstance()), openGLESImageTranslate(OpenGLESImageTranslate::getInstance()){
this->openGLBitmap= bitmapFactory->createBitmap(image);
    
this->textureFactory= textureFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLESImage::set(GL* gl) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto OpenGLESImage::initTexture(GL10* gl) -> bool{



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




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_CPP
