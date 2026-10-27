
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
















                                        
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


    public: Object* bitmapConfig;

public: Config(Object* bitmapConfig){
this->bitmapConfig= bitmapConfig;
    
}


};

            
    public: ARGB_8888 = new Config(NullUtil::getInstance()->NULL_OBJECT);

    public: OpenGLBitmap* createBitmap(int32_t width, int32_t height, OpenGLBitmapFactory::Config* config){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(NullUtil::getInstance()->NULL_OBJECT);
    
}


                //@Throws(IOException.constructor)
            
    public: OpenGLBitmap* decodeStream(InputStream* inputStream){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(NullUtil::getInstance()->NULL_OBJECT);
    
}


    public: PlatformBitmapBase* createBitmap(Image* image){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(NullUtil::getInstance()->NULL_OBJECT);
    
}


};

            

