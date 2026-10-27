
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class ProgressCanvas;
class ProgressCanvasFactory;
class ImageCache;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/BaseImageLoadingProcessor.h"
#include "org/allbinary/thread/ABRunnable.h"
//class ImageCacheRunnable;
class ImageThreadPool;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ConcurrentImageLoadingProcessor: public BaseImageLoadingProcessor {
public: class ImageCacheRunnable;

    /*protected*/ public: LogUtil* logUtil;

//inner= member=true isStatic=
public: class ImageCacheRunnable: public ABRunnable {

    private: ImageCache* imageCache;

public: ImageCacheRunnable(ImageCache* imageCache);

    public: void run();

};

            
    private: ABRunnable* runnable;

public: ConcurrentImageLoadingProcessor(ImageCache* imageCache);

    public: void runTask();

};

            


        #endif //ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_CONCURRENTIMAGELOADINGPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/thread/BaseImageLoadingProcessor.h")
#include "org/allbinary/thread/BaseImageLoadingProcessor.h"
#endif
#if __has_include("org/allbinary/thread/ABRunnable.h")
#include "org/allbinary/thread/ABRunnable.h"
#endif
#if __has_include("org/allbinary/thread/ImageThreadPool.h")
#include "org/allbinary/thread/ImageThreadPool.h"
#endif

        #endif
    
