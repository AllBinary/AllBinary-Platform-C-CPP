
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATOR_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
class GPoint;
class PointFactory;
class ColorCacheFactory;
class ColorCacheable;
class StringUtil;
class AutomaticCacheInterface;
class PixelDeltaFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageComparatorConstraintsInterface;
class Color;
class ImageComparisonResult;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageComparator
            : public virtual Object
         {

    private: ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface;

public: ImageComparator(ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);

                //@Throws(Exception.constructor)
            
    private: void process(ImageComparisonResult* imageComparisonInfo, GPoint* point);

                //@Throws(Exception.constructor)
            
    public: ImageComparisonResult* compare(BufferedImage* bufferedImage1, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance);

                //@Throws(Exception.constructor)
            
    public: ImageComparisonResult* compare(BufferedImage* bufferedImage1, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance, std::string name);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATOR_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATOR_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCacheFactory.h>)
#include <org/allbinary/graphics/color/ColorCacheFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCacheable.h>)
#include <org/allbinary/graphics/color/ColorCacheable.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/AutomaticCacheInterface.h>)
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/pixel/PixelDeltaFactory.h>)
#include <org/allbinary/media/image/comparison/pixel/PixelDeltaFactory.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h")
#include "org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/Color.h")
#include "org/allbinary/media/image/comparison/Color.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResult.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#endif

        #endif
    
