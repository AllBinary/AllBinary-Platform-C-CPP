
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

      
#include <org/allbinary/animation/image/LazyImageRotationAnimation.h>

      
#include <org/allbinary/canvas/GameGlobalsFactory.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/game/canvas/ABToGBUtil.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/gd/resource/GDLazyResources.h>

      
#include <org/allbinary/game/gd/resource/GDResources.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/system/Memory.h>

      
#include <org/allbinary/thread/BaseImageLoadingProcessor.h>

      
#include <org/allbinary/thread/ConcurrentImageLoadingProcessor.h>

      
#include <org/allbinary/thread/SynchObject.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/ImageCacheBase.h"
//#include "org/allbinary/image/NotHTMLEndProcessor.h"
//#include "org/allbinary/image/FirstProcessor.h"
//#include "org/allbinary/image/NotHTMLProcessor.h"
//#include "org/allbinary/image/HTMLEndProcessor.h"
#include "org/allbinary/image/ImageFactory.h"

auto ImageCache::NULL_IMAGE_CACHE_owner() -> ImageCache* { static std::unique_ptr<ImageCache> value(new ImageCache()); return value.get(); }
ImageCache* ImageCache::NULL_IMAGE_CACHE = ImageCache::NULL_IMAGE_CACHE_owner();

ImageCache::NotHTMLProcessor::NotHTMLProcessor() {
        }
        
    auto ImageCache::NotHTMLProcessor::process() -> void{
outer->concurrentImageLoadingProcessor->runTask();
    
}


ImageCache::NotHTMLEndProcessor::NotHTMLEndProcessor() {
        }
        
    auto ImageCache::NotHTMLEndProcessor::process() -> void{

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->endIfPaintedSinceStart();
    
}


ImageCache::HTMLEndProcessor::HTMLEndProcessor() {
        }
        
    auto ImageCache::HTMLEndProcessor::process() -> void{

    int32_t size = outer->gdResources->currentLayoutRequiredTotal;;
    

                    //Otherwise - statement - EmptyStmt


                        if(size == 0)
                        
                                    {
                                    
    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->endIfPaintedSinceStart();
    

                                    }
                                
                             else 
                        if(outer->totalLoaded > size /12)
                        
                                    {
                                    
    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas->endIfPaintedSinceStart();
    
outer->endProcessor= javaInner(new NotHTMLEndProcessor(), outer);
    

                                    }
                                
}


ImageCache::FirstProcessor::FirstProcessor() {
        }
        
    auto ImageCache::FirstProcessor::process() -> void{
outer->firstProcess();
    
}


ImageCache::ImageCache() : tsUtil(TsUtil::getInstance()), concurrentImageLoadingProcessor(new ConcurrentImageLoadingProcessor(this)), commonStrings(CommonStrings::getInstance()), commonSeps(CommonSeps::getInstance()), resourceUtil(ResourceUtil::getInstance()), gameGlobalsFactory(GameGlobalsFactory::getInstance()), gdResources(GDResources::getInstance()), loadNowList(new BasicArrayListD()), loadSoonList(new BasicArrayListD()), loadList(new BasicArrayListD()), loadAfterList(new BasicArrayListD()), lock(new SynchObject()), processor(javaInner(new FirstProcessor(), this)), endProcessor(Processor::getInstance()){
}


    auto ImageCache::firstProcess() -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    bool isHTML = J2MEUtil::isHTML();;
    

                        if(isHTML)
                        
                                    {
                                    this->processor= Processor::getInstance();
    
this->endProcessor= javaInner(new HTMLEndProcessor(), this);
    

                                    }
                                
                        else {
                            this->processor= javaInner(new NotHTMLProcessor(), this);
    
this->endProcessor= javaInner(new NotHTMLEndProcessor(), this);
    

        try {
            this->runTask();
    

                //: 
} catch(Exception& e) 
            {
logUtil->putF(this->commonStrings->EXCEPTION, this, this->commonStrings->END_METHOD_NAME);
    
}


                        }
                            
}


    auto ImageCache::addListener(Object* renderer) -> void{
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::waitForLoadNow() -> void{

                        if(this->firstTime)
                        
                                    {
                                    
    ABToGBUtil* abToGBUtil = ABToGBUtil::getInstance();;
    

    AllBinaryGameCanvas* abCanvas = dynamic_cast<AllBinaryGameCanvas*>(abToGBUtil->abCanvas);;
    

        while(this->loadNowList->isEmpty() && (!abCanvas->isInitialized() || (abCanvas->isInitialized() && this->hasAnyLazyAnimationFactories)) && !this->progressEnded_)
        {
Thread::sleep(120);
    
}

this->firstTime= false;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::loadImageForAnimation() -> void{

    LazyImageRotationAnimation* lazyImageRotationAnimation = 
                nullptr
            ;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

                        if(this->loadNowList->isEmpty())
                        
                                    {
                                    this->endProcessor->process();
    

                        if(this->loadSoonList->isEmpty())
                        
                                    {
                                    
                        if(this->loadAfterList->isEmpty())
                        
                                    {
                                    
                        if(this->firstTime)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(this->gameGlobalsFactory->newCanvas)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->loadNextImage();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
                        else {
                            lazyImageRotationAnimation= dynamic_cast<LazyImageRotationAnimation*>(this->loadAfterList->get(0));
    

                        if(this->loadImageForLazyAnimation(lazyImageRotationAnimation))
                        
                                    {
                                    this->loadAfterList->remove(lazyImageRotationAnimation);
    

                                    }
                                

                        }
                            

                                    }
                                
                        else {
                            lazyImageRotationAnimation= dynamic_cast<LazyImageRotationAnimation*>(this->loadSoonList->get(0));
    

                        if(this->loadImageForLazyAnimation(lazyImageRotationAnimation))
                        
                                    {
                                    this->loadSoonList->remove(lazyImageRotationAnimation);
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
lazyImageRotationAnimation= dynamic_cast<LazyImageRotationAnimation*>(this->loadNowList->get(0));
    



                        if(this->loadImageForLazyAnimation(lazyImageRotationAnimation))
                        
                                    {
                                    
        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        
this->loadNowList->remove(lazyImageRotationAnimation);
    



                        if(lazyImageRotationAnimation->layoutIndex != 0)
                        
                                    {
                                    
    BasicArrayList* list = this->getAssociated(lazyImageRotationAnimation);;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

    int32_t size = list->size();;
    

                        if(size > 0)
                        
                                    {
                                    this->loadSoonList->addAllList(list);
    

                                    }
                                



                                    }
                                

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    

    bool isHTML = J2MEUtil::isHTML();;
    

                        if(this->loadNowList->isEmpty() && (!isHTML || this->firstTime))
                        
                                    {
                                    progressCanvas->endFromInitialLazyLoadingComplete();
    

                                    }
                                
                        else {
                            
                        if(this->totalLoaded % 10 == 0)
                        
                                    {
                                    progressCanvas->addNormalPortion(1, this->LOAD_IMAGE_FOR_ANIMATION);
    

                                    }
                                

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::loadImages() -> void{

        while(!this->loadList->isEmpty() || !this->loadNowList->isEmpty())
        {
this->loadImageForAnimations();
    
this->loadNextImage();
    
}

}


                //@Throws(Exception.constructor)
            
    auto ImageCache::loadImageForAnimations() -> void{

        while(!this->loadNowList->isEmpty())
        {
this->loadImageForAnimation();
    
}

}


                //@Throws(Exception.constructor)
            
    auto ImageCache::loadRemainingAnimations() -> void{

        while(!this->loadAfterList->isEmpty() || !this->loadNowList->isEmpty())
        {

        while(!this->loadNowList->isEmpty())
        {
this->loadImageForAnimation();
    
}


    LazyImageRotationAnimation* lazyImageRotationAnimation = 
                nullptr
            ;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

                        if(!this->loadAfterList->isEmpty())
                        lazyImageRotationAnimation= dynamic_cast<LazyImageRotationAnimation*>(this->loadAfterList->removeAt(0));
                                



                        if(lazyImageRotationAnimation != 
                                    nullptr
                                )
                        
                                    {
                                    this->loadImageForLazyAnimation(lazyImageRotationAnimation);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto ImageCache::loadImageForLazyAnimation(LazyImageRotationAnimation* lazyImageRotationAnimation) -> bool{

    Image* image = lazyImageRotationAnimation->animationInterfaceFactoryInterface->getImage();;
    

                        if(this->loadImage(image))
                        
                                    {
                                    lazyImageRotationAnimation->setRealAnimation();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::loadNextImage() -> void{

    Image* image = 
                nullptr
            ;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

                        if(this->loadList->size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
image= dynamic_cast<Image*>(this->loadList->removeAt(0));
    


this->loadImage(image);
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::loadImage(Image* image) -> bool{

                        if(image->isReady())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            
                        if(image->getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(image->setReady())
                        
                                    {
                                    
                        if(image->isReady())
                        
                                    {
                                    this->totalLoaded++;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                

                                    }
                                
                        else {
                            
    std::string key = image->getName();;
    

    Image* image2 = this->creatImage(key);;
    

                        if(image2->isReady())
                        
                                    {
                                    this->init(image, image2);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            image->setImage(image2->getImage());
    

                        }
                            

                        }
                            

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::init(Image* image, Image* image2) -> void{
image->init(image2->getImage());
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::creatImage(std::string key) -> Image*{

    InputStream* inputStream = this->resourceUtil->getResourceAsStream(key);;
    

    Image* image = ImageFactory::getInstance()->createImageFromInputStream(inputStream);;
    
image->setName(key);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
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
    

                        if(this->nextIndex > this->widths->length -1)
                        
                                    {
                                    
                        if(foundIndex ==  -1)
                        
                                    {
                                    foundIndex= this->nextIndex;
    
this->widths[this->nextIndex]= width;
    
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
                                    
    InputStream* inputStream = 
                nullptr
            ;;
    

        try {
            image= this->createImageFromInputStream(key, inputStream);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Exception: Trying Again After GC", this, this->commonStrings->GET, &e);
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("InputStream: ")->append(StringUtil::getInstance()->toString(inputStream))), this, this->commonStrings->GET);
    
this->tsUtil->gc();
    
this->tsUtil->gc();
    
this->logUtil->putF(Memory::getInfo(), this, this->commonStrings->GET);
    
Thread::sleep(100);
    
image= this->createImageFromInputStream(key, inputStream);
    
}

this->hashtable->put(key, image);
    

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

                        if(resourceStringArray[index] == key)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return index;
    

                                    }
                                
}

this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("unable to find key: ")->append(StringUtil::getInstance()->toString(key))), this, this->commonStrings->RUN);
    



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::createImageFromInputStream(Object* key, InputStream* inputStream) -> Image*{

    GDLazyResources* gdLazyResources = GDLazyResources::getInstance();;
    

    std::vector<std::string> resourceStringArray = gdLazyResources->requiredResourcesBeforeLoadingArray;;
    

    int32_t size = resourceStringArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(key == resourceStringArray[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->creatImage(JavaBoxes::unbox<std::string>(key));;
    

                                    }
                                
}

this->runTask();
    

    int32_t index = this->getIndex(key);;
    

    int32_t width = gdLazyResources->imageResourceWidthArray[index];;
    

    int32_t height = gdLazyResources->imageResourceHeightArray[index];;
    

    Image* image = this->createImageLater(JavaBoxes::unbox<std::string>(key), width, height);;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        
this->loadList->add(image);
    





                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::createImageLater(std::string key, int32_t width, int32_t height) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Image::createImageLater(key, width, height);;
    
}


    auto ImageCache::getAssociated(LazyImageRotationAnimation* lazyImageRotationAnimation) -> BasicArrayList*{

    BasicArrayList* list = new BasicArrayListD();;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

    LazyImageRotationAnimation* lazyImageRotationAnimation2 = 
                nullptr
            ;;
    

    int32_t size = this->loadAfterList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
lazyImageRotationAnimation2= dynamic_cast<LazyImageRotationAnimation*>(this->loadAfterList->get(index));
    

                        if(lazyImageRotationAnimation2->instanceId == lazyImageRotationAnimation->instanceId)
                        
                                    {
                                    list->add(lazyImageRotationAnimation2);
    

                                    }
                                
}


    int32_t size2 = list->size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
this->loadAfterList->remove(list->get(index));
    
}






                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return list;
    
}


    auto ImageCache::add(LazyImageRotationAnimation* lazyImageRotationAnimation) -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        
this->loadAfterList->add(lazyImageRotationAnimation);
    


}


                //@Throws(Exception.constructor)
            
    auto ImageCache::insertFirst(LazyImageRotationAnimation* lazyImageRotationAnimation) -> void{

                        if(this->loadNowList->contains(lazyImageRotationAnimation))
                        
                                    {
                                    
                                    }
                                
                        else {
                            
        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        
this->loadNowList->add(lazyImageRotationAnimation);
    
this->loadAfterList->remove(lazyImageRotationAnimation);
    



                        }
                            
this->runTask();
    
}


    auto ImageCache::progressEnded() -> void{
this->progressEnded_= true;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCache::runTask() -> void{
this->processor->process();
    
}


    auto ImageCache::initProgress() -> void{

                        if(this->firstTime)
                        
                                    {
                                    this->firstTime= false;
    

                                    }
                                
}


    auto ImageCache::isLazy() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHE_CPP
