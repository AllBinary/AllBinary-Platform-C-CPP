
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
        



            #include <vector>
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Thread.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/J2MEUtil.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCacheBase.h"
//#include "NotHTMLEndProcessor.h"
//#include "FirstProcessor.h"
//#include "NotHTMLProcessor.h"
//#include "HTMLEndProcessor.h"

class ImageCache: public ImageCacheBase {

    public: static const ImageCache NULL_IMAGE_CACHE = ImageCache();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const BaseImageLoadingProcessor concurrentImageLoadingProcessor = ConcurrentImageLoadingProcessor(this);

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const CommonSeps commonSeps = CommonSeps::getInstance();

    protected: const ResourceUtil resourceUtil = ResourceUtil::getInstance();

    private: const GameGlobalsFactory gameGlobalsFactory = GameGlobalsFactory::getInstance();

    private: const GDResources gdResources = GDResources::getInstance();

    public: const BasicArrayList loadNowList = BasicArrayListD();

    public: const BasicArrayList loadSoonList = BasicArrayListD();

    public: const BasicArrayList loadList = BasicArrayListD();

    public: const BasicArrayList loadAfterList = BasicArrayListD();

    private: const SynchObject lock = SynchObject();

    private: bool firstTime = true;

    private: int32_t totalLoaded = 0;

    public: bool progressEnded = false;

    public: bool hasAnyLazyAnimationFactories = false;

//inner= member=true isStatic=
class NotHTMLProcessor: public Processor {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: void process(){
concurrentImageLoadingProcessor.runTask();
    
}


};

            
//inner= member=true isStatic=
class NotHTMLEndProcessor: public Processor {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: void process(){

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.endIfPaintedSinceStart();
    
}


};

            
//inner= member=true isStatic=
class HTMLEndProcessor: public Processor {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: void process(){

    int32_t size = gdResources.currentLayoutRequiredTotal;;
    

                    //Otherwise - statement - EmptyStmt


                        if(size == 0)
                        
                                    {
                                    
    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.endIfPaintedSinceStart();
    

                                    }
                                
                             else 
                        if(totalLoaded > size /12)
                        
                                    {
                                    
    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.endIfPaintedSinceStart();
    
endProcessor= NotHTMLEndProcessor();
    

                                    }
                                
}


};

            
//inner= member=true isStatic=
class FirstProcessor: public Processor {
/*Static stuff is not allowed for CPP inner classes*//**/


    public: void process(){
this->firstProcess();
    
}


};

            
    private: Processor processor = FirstProcessor();

    private: Processor endProcessor = Processor::getInstance();

public: ImageCache(){
}


    public: void firstProcess(){

    LogUtil logUtil = LogUtil::getInstance();;
    

    bool isHTML = J2MEUtil::isHTML();;
    

                        if(isHTML)
                        
                                    {
                                    this->processor= Processor::getInstance();
    
this->endProcessor= HTMLEndProcessor();
    

                                    }
                                
                        else {
                            this->processor= NotHTMLProcessor();
    
this->endProcessor= NotHTMLEndProcessor();
    

        try {
            runTask();
    

                //: 
} catch(e) 
            {
logUtil.putF(this->commonStrings.EXCEPTION, this, this->commonStrings.END_METHOD_NAME);
    
}


                        }
                            
}


    public: void addListener(Object* renderer){
}


                //@Throws(Exception.constructor)
            
    public: void waitForLoadNow(){

                        if(this->firstTime)
                        
                                    {
                                    
    ABToGBUtil abToGBUtil = ABToGBUtil::getInstance();;
    

    AllBinaryGameCanvas abCanvas = abToGBUtil.abCanvas as AllBinaryGameCanvas;;
    

        while(this->loadNowList.isEmpty() && (!abCanvas.isInitialized() || (abCanvas.isInitialized() && this->hasAnyLazyAnimationFactories)) && !this->progressEnded)
        {
Thread::sleep(120);
    
}

this->firstTime= false;
    

                                    }
                                
}


    private: const std::string LOAD_IMAGE_FOR_ANIMATION = "Load Image Animation";

                //@Throws(Exception.constructor)
            
    public: void loadImageForAnimation(){

    LazyImageRotationAnimation lazyImageRotationAnimation = 
                null
            ;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

                        if(this->loadNowList.isEmpty())
                        
                                    {
                                    this->endProcessor.process();
    

                        if(this->loadSoonList.isEmpty())
                        
                                    {
                                    
                        if(this->loadAfterList.isEmpty())
                        
                                    {
                                    
                        if(this->firstTime)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(this->gameGlobalsFactory.newCanvas)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->loadNextImage();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            lazyImageRotationAnimation= this->loadAfterList.get(0) as LazyImageRotationAnimation;
    

                        if(this->loadImageForLazyAnimation(lazyImageRotationAnimation))
                        
                                    {
                                    this->loadAfterList.remove(lazyImageRotationAnimation);
    

                                    }
                                

                        }
                            

                                    }
                                
                        else {
                            lazyImageRotationAnimation= this->loadSoonList.get(0) as LazyImageRotationAnimation;
    

                        if(this->loadImageForLazyAnimation(lazyImageRotationAnimation))
                        
                                    {
                                    this->loadSoonList.remove(lazyImageRotationAnimation);
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
lazyImageRotationAnimation= this->loadNowList.get(0) as LazyImageRotationAnimation;
    



                        if(this->loadImageForLazyAnimation(lazyImageRotationAnimation))
                        
                                    {
                                    
        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        
this->loadNowList.remove(lazyImageRotationAnimation);
    



                        if(lazyImageRotationAnimation.layoutIndex != 0)
                        
                                    {
                                    
    BasicArrayList list = this->getAssociated(lazyImageRotationAnimation);;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

    int32_t size = list.size();;
    

                        if(size > 0)
                        
                                    {
                                    this->loadSoonList.addAllList(list);
    

                                    }
                                



                                    }
                                

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    

    bool isHTML = J2MEUtil::isHTML();;
    

                        if(this->loadNowList.isEmpty() && (!isHTML || this->firstTime))
                        
                                    {
                                    progressCanvas.endFromInitialLazyLoadingComplete();
    

                                    }
                                
                        else {
                            
                        if(this->totalLoaded % 10 == 0)
                        
                                    {
                                    progressCanvas.addNormalPortion(1, this->LOAD_IMAGE_FOR_ANIMATION);
    

                                    }
                                

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void loadImages(){

        while(!this->loadList.isEmpty() || !this->loadNowList.isEmpty())
        {
this->loadImageForAnimations();
    
this->loadNextImage();
    
}

}


                //@Throws(Exception.constructor)
            
    public: void loadImageForAnimations(){

        while(!this->loadNowList.isEmpty())
        {
this->loadImageForAnimation();
    
}

}


                //@Throws(Exception.constructor)
            
    public: void loadRemainingAnimations(){

        while(!this->loadAfterList.isEmpty() || !this->loadNowList.isEmpty())
        {

        while(!this->loadNowList.isEmpty())
        {
this->loadImageForAnimation();
    
}


    LazyImageRotationAnimation lazyImageRotationAnimation = 
                null
            ;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

                        if(!this->loadAfterList.isEmpty())
                        lazyImageRotationAnimation= this->loadAfterList.removeAt(0) as LazyImageRotationAnimation;
                                



                        if(lazyImageRotationAnimation != 
                                    nullptr
                                )
                        
                                    {
                                    this->loadImageForLazyAnimation(lazyImageRotationAnimation);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    private: bool loadImageForLazyAnimation(LazyImageRotationAnimation lazyImageRotationAnimation){

    Image image = lazyImageRotationAnimation.animationInterfaceFactoryInterface.getImage();;
    

                        if(this->loadImage(image))
                        
                                    {
                                    lazyImageRotationAnimation.setRealAnimation();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    private: void loadNextImage(){

    Image image = 
                null
            ;;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

                        if(this->loadList.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
image= this->loadList.removeAt(0) as Image;
    


this->loadImage(image);
    
}


                //@Throws(Exception.constructor)
            
    private: bool loadImage(Image image){

                        if(image.isReady())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            
                        if(image.getImage() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(image.setReady())
                        
                                    {
                                    this->totalLoaded++;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            
    std::string key = image.getName();;
    

    Image image2 = this->creatImage(key);;
    

                        if(image2.isReady())
                        
                                    {
                                    this->init(image, image2);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            image.setImage(image2.getImage());
    

                        }
                            

                        }
                            

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    protected: void init(Image image, Image image2){
image.init(image2.getImage());
    
}


                //@Throws(Exception.constructor)
            
    protected: Image creatImage(std::string key){

    InputStream inputStream = resourceUtil.getResourceAsStream(key);;
    

    Image image = Image::createImage(inputStream);;
    
image.setName(key);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public: Image get(std::string caller, int32_t width, int32_t height){

    int32_t foundIndex = this->getIndexWH(width, height);;
    

    Image image = this->getFromAvailable(foundIndex, width, height);;
    

                        if(image == NullImage::NULL_IMAGE)
                        
                                    {
                                    this->volume += width *height;
    

                        if(this->volume > 32000)
                        
                                    {
                                    System.gc();
    
this->volume= 0;
    

                                    }
                                
image= this->createImage(caller, width, height);
    

                        if(this->nextIndex > this->widths.length -1)
                        
                                    {
                                    
                        if(foundIndex ==  -1)
                        
                                    {
                                    foundIndex= this->nextIndex;
    
this->widths[this->nextIndex]= width;
    
this->heights[this->nextIndex]= height;
    
this->nextIndex++;
    

                                    }
                                
this->listOfList[foundIndex]!.add(image);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public: Image getWithKey(Object* key){

    Image image = this->getImage(key);;
    

                        if(image == NullImage::NULL_IMAGE)
                        
                                    {
                                    
    InputStream inputStream = 
                null
            ;;
    

        try {
            image= this->createImageFromInputStream(key, inputStream);
    

                //: 
} catch(e) 
            {
this->logUtil.put("Exception: Trying Again After GC", this, this->commonStrings.GET, e);
    
this->logUtil.putF(StringMaker().append("InputStream: ").append(StringUtil::getInstance().toString(inputStream)).toString(), this, this->commonStrings.GET);
    
System.gc();
    
System.gc();
    
this->logUtil.putF(Memory::getInfo(), this, this->commonStrings.GET);
    
Thread::sleep(100);
    
image= this->createImageFromInputStream(key, inputStream);
    
}

this->hashtable.put(key, image);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    public: int32_t getIndex(Object* key){

    GDResources gdResources = GDResources::getInstance();;
    

    std::vector<std::string> resourceStringArray = gdResources.resourceStringArray;;
    

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

this->logUtil.putF(StringMaker().append("unable to find key: ").append(StringUtil::getInstance().toString(key)).toString(), this, this->commonStrings.RUN);
    



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    protected: Image createImageFromInputStream(Object* key, InputStream inputStream){

    GDLazyResources gdLazyResources = GDLazyResources::getInstance();;
    

    std::vector<std::string> resourceStringArray = gdLazyResources.requiredResourcesBeforeLoadingArray;;
    

    int32_t size = resourceStringArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(key == resourceStringArray[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->creatImage(key as string);;
    

                                    }
                                
}

this->runTask();
    

    int32_t index = this->getIndex(key);;
    

    int32_t width = gdLazyResources.imageResourceWidthArray[index];;
    

    int32_t height = gdLazyResources.imageResourceHeightArray[index];;
    

    Image image = this->createImageLater(key as string, width, height);;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        
this->loadList.add(image);
    





                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    protected: Image createImageLater(std::string key, int32_t width, int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Image::createImageLater(key, width, height);;
    
}


    public: BasicArrayList getAssociated(LazyImageRotationAnimation lazyImageRotationAnimation){

    BasicArrayList list = BasicArrayListD();;
    

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        

    LazyImageRotationAnimation lazyImageRotationAnimation2 = 
                null
            ;;
    

    int32_t size = this->loadAfterList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
lazyImageRotationAnimation2= this->loadAfterList.get(index) as LazyImageRotationAnimation;
    

                        if(lazyImageRotationAnimation2.instanceId == lazyImageRotationAnimation.instanceId)
                        
                                    {
                                    list.add(lazyImageRotationAnimation2);
    

                                    }
                                
}


    int32_t size2 = list.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
this->loadAfterList.remove(list.get(index));
    
}






                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


    public: void add(LazyImageRotationAnimation lazyImageRotationAnimation){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        
this->loadAfterList.add(lazyImageRotationAnimation);
    


}


                //@Throws(Exception.constructor)
            
    public: void insertFirst(LazyImageRotationAnimation lazyImageRotationAnimation){

                        if(this->loadNowList.contains(lazyImageRotationAnimation))
                        
                                    {
                                    
                                    }
                                
                        else {
                            
        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->lock) 

        //mutex.withLock
        
this->loadNowList.add(lazyImageRotationAnimation);
    
this->loadAfterList.remove(lazyImageRotationAnimation);
    



                        }
                            
this->runTask();
    
}


    public: void progressEnded(){
this->progressEnded= true;
    
}


                //@Throws(Exception.constructor)
            
    public: void runTask(){
this->processor.process();
    
}


    public: void initProgress(){

                        if(this->firstTime)
                        
                                    {
                                    this->firstTime= false;
    

                                    }
                                
}


    public: bool isLazy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

