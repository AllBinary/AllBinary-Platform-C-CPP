
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
        



        #ifndef ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_CPP
        #define ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/ConcurrentImageLoadingProcessor.h"
        

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


ConcurrentImageLoadingProcessor::ImageCacheRunnable::ImageCacheRunnable(ImageCache* imageCache){
this->imageCache= imageCache;
    
}


    auto ConcurrentImageLoadingProcessor::ImageCacheRunnable::run() -> void{

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


ConcurrentImageLoadingProcessor::ConcurrentImageLoadingProcessor(ImageCache* imageCache) : logUtil(LogUtil::getInstance()){
this->runnable= javaInner(new ImageCacheRunnable(imageCache), this);
    
}


    auto ConcurrentImageLoadingProcessor::runTask() -> void{

                        if(!this->runnable->isRunning())
                        
                                    {
                                    ImageThreadPool::getInstance()->runTask(this->runnable);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_CPP
