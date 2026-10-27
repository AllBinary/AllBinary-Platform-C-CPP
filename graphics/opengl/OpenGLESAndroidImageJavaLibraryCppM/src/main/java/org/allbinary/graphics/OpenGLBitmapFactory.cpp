
        /* Generated Code Do Not Modify */
        



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

class OpenGLBitmapFactory: public PlatformBitmapBaseFactory {

    private: static OpenGLBitmapFactory* instance() { static std::unique_ptr<OpenGLBitmapFactory> value(new OpenGLBitmapFactory()); return value.get(); }

    public: static OpenGLBitmapFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLBitmapFactory::instance();
    
}


//inner= member=true isStatic=
class Config
            : public Object
         {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: bitmapConfig;

: Config(Bitmap::Config* bitmapConfig){
this->bitmapConfig= bitmapConfig;
    
}


};

            
    public: ARGB_8888 = new Config(Bitmap::Config.ARGB_8888);

    public: OpenGLBitmap* createBitmap(int32_t width, int32_t height, OpenGLBitmapFactory::Config* config){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(Bitmap::createBitmap(width, height, config->bitmapConfig));
    
}


                //@Throws(IOException.constructor)
            
    public: OpenGLBitmap* decodeStream(InputStream* inputStream){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(BitmapFactory::decodeStream(inputStream));
    
}


    public: PlatformBitmapBase* createBitmap(Image* image){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap((image)).getBitmap());
    
}


};

            

