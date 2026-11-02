
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/OpenGLBitmapFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <android/graphics/Bitmap.h>

      
#include <android/graphics/BitmapFactory.h>

      
#include <java/io/IOException.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //#include "org/allbinary/graphics/Config.h"
#include "org/allbinary/graphics/OpenGLBitmap.h"


OpenGLBitmapFactory::OpenGLBitmapFactory() : ARGB_8888(javaInner(new Config(Bitmap::Config->ARGB_8888), this)) {
        }
        auto OpenGLBitmapFactory::instance_owner() -> OpenGLBitmapFactory* { static std::unique_ptr<OpenGLBitmapFactory> value(new OpenGLBitmapFactory()); return value.get(); }
OpenGLBitmapFactory* OpenGLBitmapFactory::instance = OpenGLBitmapFactory::instance_owner();

    auto OpenGLBitmapFactory::getInstance() -> OpenGLBitmapFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLBitmapFactory::instance;
    
}


OpenGLBitmapFactory::Config::Config(Bitmap::Config* bitmapConfig){
this->bitmapConfig= bitmapConfig;
    
}


    auto OpenGLBitmapFactory::createBitmap(int32_t width, int32_t height, OpenGLBitmapFactory::Config* config) -> OpenGLBitmap*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(Bitmap::createBitmap(width, height, config->bitmapConfig));
    
}


                //@Throws(IOException.constructor)
            
    auto OpenGLBitmapFactory::decodeStream(InputStream* inputStream) -> OpenGLBitmap*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(BitmapFactory::decodeStream(inputStream));
    
}


    auto OpenGLBitmapFactory::createBitmap(Image* image) -> PlatformBitmapBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap((image)).getBitmap());
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_CPP
