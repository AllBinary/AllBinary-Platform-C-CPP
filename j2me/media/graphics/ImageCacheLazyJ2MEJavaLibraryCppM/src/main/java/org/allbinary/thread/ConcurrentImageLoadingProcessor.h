
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageCache: ImageCache;

    private: const runnable: ABRunnable = new class extends ABRunnable
                                {
                                
    public run();
                                }
                            ;

public constructor (ImageCache imageCache);

    public runTask();

};

            


        #endif //ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_H
