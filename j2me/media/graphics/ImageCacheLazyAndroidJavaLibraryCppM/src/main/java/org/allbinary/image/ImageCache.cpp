
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGECACHE_CPP
        #define ORG_ALLBINARY_IMAGE_IMAGECACHE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/ImageCache.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/game/gd/resource/GDResources.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/system/Memory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/ImageCacheBase.h"

auto ImageCache::NULL_IMAGE_CACHE_owner() -> ImageCache* { static std::unique_ptr<ImageCache> value(new ImageCache()); return value.get(); }
ImageCache* ImageCache::NULL_IMAGE_CACHE = ImageCache::NULL_IMAGE_CACHE_owner();

ImageCache::ImageCache() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), systemWrapper(ABSystemWrapper::getInstance()), tsUtil(TsUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::get(std::string caller, int32_t width, int32_t height) -> Image*{

    int32_t foundIndex = this->getIndexWH(width, height);;
    

    Image* image = this->getFromAvailable(foundIndex, width, height);;
    

                        if(image == NullImage::NULL_IMAGE)
                        
                                    {
                                    this->volume += width *height;
    

                        if(this->volume > 32000)
                        
                                    {
                                    this->tsUtil->gc();
    
this->volume= 0;
    

                                    }
                                
image= this->ImageCacheBase::createImage(caller, width, height);
    

                        if(foundIndex ==  -1)
                        
                                    {
                                    foundIndex= this->nextIndex;
    
this->widths[this->nextIndex]= width;
    
this->heights[this->nextIndex]= height;
    
this->nextIndex++;
    

                                    }
                                
this->listOfList[foundIndex]->add(image);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::get(Object* key) -> Image*{

    ResourceUtil* resourceUtil = ResourceUtil::getInstance();;
    

    int32_t resourceId = resourceUtil->getResourceId(JavaBoxes::unbox<std::string>(key));;
    

    Image* image = this->getImage(resourceId);;
    

                        if(image == NullImage::NULL_IMAGE)
                        
                                    {
                                    
    InputStream* inputStream = 
                nullptr
            ;;
    

        try {
            this->logUtil->putF(Memory::getInfo(), this, this->commonStrings->GET);
    
image= this->createImage(key, inputStream);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Exception: Trying Again After GC", this, this->commonStrings->GET, &e);
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("InputStream: ")->append(JavaString::valueOf(inputStream))), this, this->commonStrings->GET);
    
this->tsUtil->gc();
    
this->tsUtil->gc();
    
this->logUtil->putF(Memory::getInfo(), this, this->commonStrings->GET);
    
Thread::sleep(100);
    
image= this->createImage(key, inputStream);
    
}

this->hashtable->put(resourceId, image);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
}


    auto ImageCache::getIndex(Object* key) -> int32_t{

    GDResources* gdResources = GDResources::getInstance();;
    

    std::vector<std::string> resourceStringArray = gdResources->resourceStringArray;;
    

    int32_t size = resourceStringArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if((JavaString::box(resourceStringArray[index]) == key))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return index;
    

                                    }
                                
}

this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("unable to find key: ")->append(StringUtil::getInstance()->toString(key))), this, this->commonStrings->RUN);
    



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::createImage(Object* key, InputStream* inputStream) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Image::createImageLater(JavaBoxes::unbox<std::string>(key),  -1,  -1);;
    
}


    auto ImageCache::isLazy() -> bool{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHE_CPP
