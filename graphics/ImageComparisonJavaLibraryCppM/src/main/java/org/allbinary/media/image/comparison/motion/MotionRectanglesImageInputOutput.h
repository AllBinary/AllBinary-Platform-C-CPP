
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
class BasicArrayList;

class ImageOutputData;
class LogUtil;
class LongUtil;
class StringMaker;
class AutomaticCacheInterface;
class PoolInterface;
class MediaDataFactory;
class ImagePersistanceUtil;
class BufferedImageCacheable;
class BufferedImageInfo;
class BufferedImageInfoFactory;
class BufferedImagePoolSingleton;
class ImageComparisonResult;
#include <org/allbinary/media/image/io/ImageIOInterface.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllMotionRectanglesResultsCacheSingleton;
class MotionRectanglesResultsFrameCacheable;
class MotionRectangles;
class ConsolidatedMotionRectanglesResultsCacheSingleton;
class ConstrainedMotionRectanglesResultsCacheSingleton;
class Graphics;
class MotionRectangle;
class Rectangle;
class Color;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionRectanglesImageInputOutput
            : public virtual Object
        , public ImageIOInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: const int32_t NUMBER_OF_IMAGES = 1;

public: MotionRectanglesImageInputOutput();

                //@Throws(Exception.constructor)
            
    public: void save(int64_t frame);

                //@Throws(Exception.constructor)
            
    public: void save(MotionRectangles* motionRectangles, int64_t frame);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/input/automation/ImageOutputData.h>)
#include <org/allbinary/input/automation/ImageOutputData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/number/LongUtil.h>)
#include <org/allbinary/logic/java/number/LongUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/AutomaticCacheInterface.h>)
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/PoolInterface.h>)
#include <org/allbinary/logic/util/cache/PoolInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/media/MediaDataFactory.h>)
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>
#endif
#if __has_include(<org/allbinary/media/image/ImagePersistanceUtil.h>)
#include <org/allbinary/media/image/ImagePersistanceUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/cache/BufferedImageCacheable.h>)
#include <org/allbinary/media/image/cache/BufferedImageCacheable.h>
#endif
#if __has_include(<org/allbinary/media/image/cache/BufferedImageInfo.h>)
#include <org/allbinary/media/image/cache/BufferedImageInfo.h>
#endif
#if __has_include(<org/allbinary/media/image/cache/BufferedImageInfoFactory.h>)
#include <org/allbinary/media/image/cache/BufferedImageInfoFactory.h>
#endif
#if __has_include(<org/allbinary/media/image/cache/BufferedImagePoolSingleton.h>)
#include <org/allbinary/media/image/cache/BufferedImagePoolSingleton.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ImageComparisonResult.h>)
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>
#endif
#if __has_include(<org/allbinary/media/image/io/ImageIOInterface.h>)
#include <org/allbinary/media/image/io/ImageIOInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/AllMotionRectanglesResultsCacheSingleton.h")
#include "org/allbinary/media/image/comparison/motion/AllMotionRectanglesResultsCacheSingleton.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectanglesResultsFrameCacheable.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsFrameCacheable.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangles.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/ConsolidatedMotionRectanglesResultsCacheSingleton.h")
#include "org/allbinary/media/image/comparison/motion/ConsolidatedMotionRectanglesResultsCacheSingleton.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/ConstrainedMotionRectanglesResultsCacheSingleton.h")
#include "org/allbinary/media/image/comparison/motion/ConstrainedMotionRectanglesResultsCacheSingleton.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/Graphics.h")
#include "org/allbinary/media/image/comparison/motion/Graphics.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangle.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangle.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/Rectangle.h")
#include "org/allbinary/media/image/comparison/motion/Rectangle.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/Color.h")
#include "org/allbinary/media/image/comparison/motion/Color.h"
#endif

        #endif
    
