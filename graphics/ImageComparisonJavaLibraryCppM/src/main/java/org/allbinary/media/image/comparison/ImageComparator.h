
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheable.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDeltaFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparatorConstraintsInterface.h"
#include "Color.h"
#include "ImageComparisonResult.h"

class ImageComparator
            : public Object
         {

    private: ImageComparatorConstraintsInterface imageComparatorConstraintsInterface;

public: ImageComparator(ImageComparatorConstraintsInterface imageComparatorConstraintsInterface);

                //@Throws(Exception.constructor)
            
    private: void process(ImageComparisonResult imageComparisonInfo, GPoint point);

                //@Throws(Exception.constructor)
            
    public: ImageComparisonResult compare(BufferedImage bufferedImage1, BufferedImage bufferedImage2, Long frameOne, Long frameTwo, int32_t tolerance);

                //@Throws(Exception.constructor)
            
    public: ImageComparisonResult compare(BufferedImage bufferedImage1, BufferedImage bufferedImage2, Long frameOne, Long frameTwo, int32_t tolerance, std::string name);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATOR_H
