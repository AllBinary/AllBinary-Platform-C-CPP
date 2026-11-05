
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
        
            #include "java/lang/Thread.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/game/gd/resource/GDResources.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/system/Memory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/ImageCacheBase.h"

auto ImageCache::NULL_IMAGE_CACHE_owner() -> ImageCache* { static std::unique_ptr<ImageCache> value(new ImageCache()); return value.get(); }
ImageCache* ImageCache::NULL_IMAGE_CACHE = ImageCache::NULL_IMAGE_CACHE_owner();

ImageCache::ImageCache() : commonStrings(CommonStrings::getInstance()), tsUtil(TsUtil::getInstance()){
}


    auto ImageCache::addListener(Object* renderer) -> void{
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

this->logUtil->putF((new StringMaker())->append("unable to find key: ")->append(StringUtil::getInstance()->toString(key))->toString(), this, this->commonStrings->RUN);
    



                            throw RuntimeException();
                    
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
                                
image= this->createImage(caller, width, height);
    

    std::vector<int32_t> widths = this->widths;;
    

                        if(this->nextIndex > widths.size() -1)
                        
                                    {
                                    
                        if(foundIndex ==  -1)
                        
                                    {
                                    foundIndex= this->nextIndex;
    
widths[this->nextIndex]= width;
    
this->heights[this->nextIndex]= height;
    
this->nextIndex++;
    

                                    }
                                
this->listOfList[foundIndex]->add(image);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::getWithKey(Object* key) -> Image*{

    Image* image = this->getImage(key);;
    

                        if(image == NullImage::NULL_IMAGE)
                        
                                    {
                                    
    ResourceUtil* resourceUtil = ResourceUtil::getInstance();;
    

    InputStream* resourceInputStream = resourceUtil->getResourceAsStream(JavaBoxes::unbox<std::string>(key));;
    

                        if(resourceInputStream == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw RuntimeException((new StringMaker())->append("Image resource is not available for key: ")->append(StringUtil::getInstance()->toString(key))->toString());
                    

                                    }
                                

        try {
            image= this->createImageFromInputStream(key, resourceInputStream);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Exception: Trying Again After GC", this, this->commonStrings->GET, &e);
    
this->logUtil->putF((new StringMaker())->append("InputStream: ")->append(StringUtil::getInstance()->toString(resourceInputStream))->toString(), this, this->commonStrings->GET);
    
this->tsUtil->gc();
    
this->tsUtil->gc();
    
this->logUtil->putF(Memory::getInfo(), this, this->commonStrings->GET);
    
Thread::sleep(100);
    
image= this->createImageFromInputStream(key, resourceInputStream);
    
}


                        if(J2MEUtil::isHTML())
                        
                                    {
                                    
                                    }
                                
                        else {
                            resourceInputStream->close();
    

                        }
                            
this->hashtable->put(key, image);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::loadImageForAnimation() -> void{
}


    auto ImageCache::progressEnded() -> void{
}


    auto ImageCache::runTask() -> void{
}


    auto ImageCache::isLazy() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHE_CPP
