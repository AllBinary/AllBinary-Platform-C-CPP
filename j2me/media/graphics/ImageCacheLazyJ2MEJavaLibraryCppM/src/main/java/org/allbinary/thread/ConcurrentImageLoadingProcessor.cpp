
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/BaseImageLoadingProcessor.h"
#include "org/allbinary/thread/ABRunnable.h"
//#include "org/allbinary/thread/ImageCacheRunnable.h"
#include "org/allbinary/thread/ImageThreadPool.h"

class ConcurrentImageLoadingProcessor: public BaseImageLoadingProcessor {

    protected: LogUtil* logUtil = LogUtil::getInstance();

//inner= member=true isStatic=
class ImageCacheRunnable: public ABRunnable {

    private: ImageCache* imageCache;

public: ImageCacheRunnable(ImageCache* imageCache){
this->imageCache= imageCache;
    
}


    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            this->setRunning(true);
    
this->imageCache->waitForLoadNow();
    
this->imageCache->loadImages();
    
this->imageCache->loadRemainingAnimations();
    
this->setRunning(false);
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    

                        if(!progressCanvas->inProgress)
                        
                                    {
                                    progressCanvas->endFromInitialLazyLoadingComplete();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->setRunning(false);
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


};

            
    private: ABRunnable* runnable;

public: ConcurrentImageLoadingProcessor(ImageCache* imageCache){
this->runnable= new ImageCacheRunnable(imageCache);
    
}


    public: void runTask(){

                        if(!this->runnable->isRunning())
                        
                                    {
                                    ImageThreadPool::getInstance()->runTask(this->runnable);
    

                                    }
                                
}


};

            

