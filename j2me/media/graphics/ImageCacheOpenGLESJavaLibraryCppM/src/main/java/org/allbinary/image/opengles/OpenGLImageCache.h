
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

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/device/NullGL10.h>

      
#include <org/allbinary/graphics/opengles/renderer/AllBinaryRendererBase3.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/image/PreResourceImageUtil.h>

      
#include <org/allbinary/thread/SynchObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESImage.h"
//ImageCacheOpenGLESJavaLibrary
class OpenGLImageCache: public ImageCache {

    private: const ImageCache imageCache = ImageCacheFactory::getInstance();

    private: const PreResourceImageUtil preResourceImageUtil = PreResourceImageUtil::getInstance();

    private: GL10 gl = NullGL10::NULL_GL10;

    private: const SynchObject lock = SynchObject();

    private: const BasicArrayList list = BasicArrayListD();

    private: AllBinaryRendererBase3 renderer = AllBinaryRendererBase3();

public: OpenGLImageCache();

    public: void addListener(Object* renderer);

                //@Throws(Exception.constructor)
            
    public: void update(GL10 gl);

                //@Throws(Exception.constructor)
            
    protected: Image createImage(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    protected: Image createImageFromInputStream(Object* key, InputStream inputStream);

    public: GL10 getGlP();

    public: void init(Image image);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHE_H
