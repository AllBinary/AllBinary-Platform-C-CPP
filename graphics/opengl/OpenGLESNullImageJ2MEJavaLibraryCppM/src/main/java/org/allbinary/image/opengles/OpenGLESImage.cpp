
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
//OpenGLESNullImageJ2MEJavaLibrary
class OpenGLESImage
            : public Object
        , public OpenGLSurfaceChangedInterface {

    public: static OpenGLESImage* NULL_OPENGL_IMAGE() { static std::unique_ptr<OpenGLESImage> value(new OpenGLESImage(NullImage::NULL_IMAGE, PlatformBitmapBaseFactory::NULL_PLATFORM_BITMAP_BASE_FACTORY, PlatformTextureBaseFactory::NULL_PLATFORM_TEXTURE_BASE_FACTORY)); return value.get(); }

    public: static inline BasicArrayList* texture2dList = new BasicArrayListD();

    public: static inline const int32_t TYPE = 4;

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: PlatformTextureBaseFactory* textureFactory;

    public: PlatformBitmapBase* openGLBitmap;

    public: OpenGLESImageProperties* openGLESImageProperties = new OpenGLESImageProperties();

public: OpenGLESImage(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory){
this->openGLBitmap= bitmapFactory->createBitmap(image);
    
this->textureFactory= textureFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: void set(GL* gl){



                            throw new Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    protected: bool initTexture(GL10* gl){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void drawRegion(GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z){
}


    public: void draw(GL10* gl, int32_t x, int32_t y, int32_t z){
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESImage::TYPE;
    
}


};

            

