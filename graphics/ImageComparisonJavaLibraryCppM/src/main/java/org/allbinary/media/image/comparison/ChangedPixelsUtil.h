
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_CHANGEDPIXELSUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_CHANGEDPIXELSUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/awt/image/BufferedImage.h>
class BasicArrayList;

class PoolInterface;
class BufferedImageCacheable;
class BufferedImageInfo;
class BufferedImageInfoFactory;
class BufferedImagePoolSingleton;
class PixelDelta;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageComparisonResult;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ChangedPixelsUtil
            : public virtual Object
         {

    private: static inline const int32_t START_X = 0;

    private: static inline const int32_t START_Y = 0;

    private: static inline const int32_t OFFSET = 0;

    private: static inline const int32_t SCAN_SIZE = 0;

    private: static std::vector<int32_t> CLEAR_INT_ARRAY;

                //@Throws(Exception.constructor)
            
    public: static std::vector<BufferedImageCacheable*> generateBufferedImageChacheables(ImageComparisonResult* imageComparisonInfo);

private: ChangedPixelsUtil();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_CHANGEDPIXELSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_CHANGEDPIXELSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_CHANGEDPIXELSUTIL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/logic/util/cache/PoolInterface.h>)
#include <org/allbinary/logic/util/cache/PoolInterface.h>
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
#if __has_include(<org/allbinary/media/image/comparison/pixel/PixelDelta.h>)
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResult.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#endif

        #endif
    
