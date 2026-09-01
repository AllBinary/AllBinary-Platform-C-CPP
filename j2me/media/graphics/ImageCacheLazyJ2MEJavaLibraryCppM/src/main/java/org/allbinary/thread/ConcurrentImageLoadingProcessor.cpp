
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
        



            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageLoadingProcessor.h"
#include "ABRunnable.h"
#include "ImageThreadPool.h"

class ConcurrentImageLoadingProcessor: public BaseImageLoadingProcessor {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: ImageCache imageCache;

    private: const ABRunnable runnable = class extends ABRunnable
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            this->setRunning(true);
    
imageCache.waitForLoadNow();
    
imageCache.loadImages();
    
imageCache.loadRemainingAnimations();
    
this->setRunning(false);
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    

                        if(!progressCanvas.inProgress)
                        
                                    {
                                    progressCanvas.endFromInitialLazyLoadingComplete();
    

                                    }
                                

                //: 
} catch(e) 
            {
this->setRunning(false);
    
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}

                                }
                            ;

public: ConcurrentImageLoadingProcessor(ImageCache imageCache){
this->imageCache= imageCache;
    
}


    public: void runTask(){

                        if(!this->runnable.isRunning())
                        
                                    {
                                    ImageThreadPool::getInstance().runTask(this->runnable);
    

                                    }
                                
}


};

            

