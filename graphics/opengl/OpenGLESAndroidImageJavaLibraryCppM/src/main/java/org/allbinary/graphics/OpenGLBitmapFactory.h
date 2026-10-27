
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/io/InputStream.h>
class Image;
class Bitmap;
class BitmapFactory;
#include <java/io/IOException.h>
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>
class PlatformBitmapBase;
class AndroidImageInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //class Config;
class OpenGLBitmap;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLBitmapFactory: public PlatformBitmapBaseFactory {
public: class Config;

    private: static OpenGLBitmapFactory* instance_owner();
    private: static OpenGLBitmapFactory* instance;

    public: static OpenGLBitmapFactory* getInstance();


            
    public: OpenGLBitmapFactory();
        
//inner= member=true isStatic=
public: class Config
            : public virtual Object
         {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: Bitmap::Config* bitmapConfig;

public: Config(Bitmap::Config* bitmapConfig);

};

            
    public: Config* ARGB_8888;

    public: OpenGLBitmap* createBitmap(int32_t width, int32_t height, OpenGLBitmapFactory::Config* config);

                //@Throws(IOException.constructor)
            
    public: OpenGLBitmap* decodeStream(InputStream* inputStream);

    public: PlatformBitmapBase* createBitmap(Image* image);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<android/graphics/Bitmap.h>)
#include <android/graphics/Bitmap.h>
#endif
#if __has_include(<android/graphics/BitmapFactory.h>)
#include <android/graphics/BitmapFactory.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>)
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>
#endif
#if __has_include(<org/allbinary/platform/graphics/PlatformBitmapBase.h>)
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>
#endif
#if __has_include(<org/microemu/android/device/AndroidImageInterface.h>)
#include <org/microemu/android/device/AndroidImageInterface.h>
#endif
#if __has_include("org/allbinary/graphics/OpenGLBitmap.h")
#include "org/allbinary/graphics/OpenGLBitmap.h"
#endif

        #endif
    
