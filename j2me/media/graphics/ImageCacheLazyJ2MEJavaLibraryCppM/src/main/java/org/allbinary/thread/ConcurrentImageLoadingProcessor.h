
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
        



        #ifndef ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_H
        #define ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_H

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

public: ImageCacheRunnable(ImageCache* imageCache);

    public: void run();

};

            
    private: ABRunnable* runnable;

public: ConcurrentImageLoadingProcessor(ImageCache* imageCache);

    public: void runTask();

};

            


        #endif //ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_H
