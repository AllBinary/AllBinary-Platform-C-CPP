
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHE_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>
class GL10;
class Image;
class NullImage;
class NullGL10;
class AllBinaryRendererBase3;
class BasicArrayList;
class BasicArrayListD;
#include <org/allbinary/image/ImageCache.h>
class ImageCacheFactory;
class PreResourceImageUtil;
class SynchObject;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLESImage;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ImageCacheOpenGLESJavaLibrary
class OpenGLImageCache: public ImageCache {

    private: ImageCache* imageCache;

    private: PreResourceImageUtil* preResourceImageUtil;

    private: GL10* gl;

    private: SynchObject* lock;

    private: BasicArrayList* list;

    private: AllBinaryRendererBase3* renderer;

public: OpenGLImageCache();

    public: void addListener(Object* renderer);
    public: void addListener(const std::string& renderer) { return addListener(JavaString::box(renderer)); }

                //@Throws(Exception.constructor)
            
    public: void update(GL10* gl);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Image* createImage(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Image* createImageFromInputStream(Object* key, InputStream* inputStream);
    /*protected*/ public: Image* createImageFromInputStream(const std::string& key, InputStream* inputStream) { return createImageFromInputStream(JavaString::box(key), inputStream); }

    public: GL10* getGlP();

    public: void init(Image* image);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHE_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/device/NullGL10.h>)
#include <org/allbinary/device/NullGL10.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/renderer/AllBinaryRendererBase3.h>)
#include <org/allbinary/graphics/opengles/renderer/AllBinaryRendererBase3.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif
#if __has_include(<org/allbinary/image/ImageCacheFactory.h>)
#include <org/allbinary/image/ImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/image/PreResourceImageUtil.h>)
#include <org/allbinary/image/PreResourceImageUtil.h>
#endif
#if __has_include(<org/allbinary/thread/SynchObject.h>)
#include <org/allbinary/thread/SynchObject.h>
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESImage.h")
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#endif

        #endif
    
