
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHE_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLImageCache.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
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
        #include "org/allbinary/image/opengles/OpenGLESImage.h"
//ImageCacheOpenGLESJavaLibrary

OpenGLImageCache::OpenGLImageCache() : imageCache(ImageCacheFactory::getInstance()), preResourceImageUtil(PreResourceImageUtil::getInstance()), gl(NullGL10::NULL_GL10), lock(new SynchObject()), list(new BasicArrayListD()), renderer(new AllBinaryRendererBase3()){
}


    auto OpenGLImageCache::addListener(Object* renderer) -> void{
this->renderer= dynamic_cast<AllBinaryRendererBase3*>(renderer);
    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLImageCache::update(GL10* gl) -> void{
this->gl= gl;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        




                        for (
    int32_t index = this->list->size() -1;index >= 0; index--)
        {

    OpenGLESImage* openGLESImage = (dynamic_cast<OpenGLESImage*>(this->list->objectArray[index]));;
    

                        if(openGLESImage != OpenGLESImage::NULL_OPENGL_IMAGE)
                        
                                    {
                                    openGLESImage->set(gl);
    

                                    }
                                
}



}


                //@Throws(Exception.constructor)
            
    auto OpenGLImageCache::createImage(std::string caller, int32_t width, int32_t height) -> Image*{

    int32_t textureSize = width;;
    

                        if(height > width)
                        
                                    {
                                    textureSize= height;
    

                                    }
                                

        while((textureSize % 4) != 0)
        {
textureSize++;
    
}

width= textureSize;
    
height= textureSize;
    

    Image* image2 = this->imageCache->get(caller, width, height);;
    

    Image* image = this->preResourceImageUtil->encapsulate(image2);;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

                        if(image != NullImage::NULL_IMAGE)
                        
                                    {
                                    this->list->add(image);
    

                                    }
                                





                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLImageCache::createImageFromInputStream(Object* key, InputStream* inputStream) -> Image*{

    Image* cachedImage = this->imageCache->getWithKey(key);;
    

    Image* image = this->preResourceImageUtil->encapsulate(cachedImage);;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

                        if(image != NullImage::NULL_IMAGE)
                        
                                    {
                                    this->list->add(image);
    

                                    }
                                





                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    auto OpenGLImageCache::getGlP() -> GL10*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl;
    
}


    auto OpenGLImageCache::init(Image* image) -> void{

        try {
            
        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

                        if(this->list->contains(image))
                        
                                    {
                                    


                            throw RuntimeException();
                    

                                    }
                                
this->list->add(image);
    


this->renderer->add(image);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e);
    
}

}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGECACHE_CPP
