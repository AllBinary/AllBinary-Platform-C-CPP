
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H

            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/ImageFactory.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //#include "Config.h"
#include "OpenGLBitmap.h"

class OpenGLBitmapFactory: public PlatformBitmapBaseFactory {

    private: static OpenGLBitmapFactory instance() { return OpenGLBitmapFactory(); }

    public: static OpenGLBitmapFactory getInstance();

//inner= member=true isStatic=
class Config
            : public Object
         {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: Object* bitmapConfig;

private: Config(Object* bitmapConfig);

};

            
    public: const ARGB_8888 = Config(
                            nullptr);

    public: OpenGLBitmap createBitmap(int32_t width, int32_t height, OpenGLBitmapFactory::Config config);

                //@Throws(Exception.constructor)
            
    public: OpenGLBitmap decodeStream(InputStream inputStream);

    public: PlatformBitmapBase createBitmap(Image image);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H
