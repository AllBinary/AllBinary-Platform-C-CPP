
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_ALLMOTIONRECTANGLES_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_ALLMOTIONRECTANGLES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>
class BasicArrayList;

class ImageComparisonResult;
class PixelDelta;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
class MotionRectangle;
class Rectangle;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllMotionRectangles: public MotionRectangles {

    private: static inline const std::string NAME = "allMotionRectangles_";

public: AllMotionRectangles(ImageComparisonResult* imageComparisonResult);

                //@Throws(Exception.constructor)
            
    private: void createMotionRectangles(ImageComparisonResult* imageComparisonInfo);

                //@Throws(Exception.constructor)
            
    private: bool addPixelDeltaToExistingMotionRectangle(PixelDelta* pixelDelta);

                //@Throws(Exception.constructor)
            
    private: void addPixelDeltaToAMotionRectangle(PixelDelta* pixelDelta);

                //@Throws(Exception.constructor)
            
    private: bool shouldPixelDeltaPartOfMotionRectangle(MotionRectangle* motionRectangle, PixelDelta* pixelDelta);

                //@Throws(Exception.constructor)
            
    private: bool isPixelDeltaLikelyPartOfMotionRectangle(MotionRectangle* motionRectangle, PixelDelta* pixelDelta);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_ALLMOTIONRECTANGLES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_ALLMOTIONRECTANGLES_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_ALLMOTIONRECTANGLES_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/media/image/comparison/ImageComparisonResult.h>)
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/pixel/PixelDelta.h>)
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangles.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangle.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangle.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/Rectangle.h")
#include "org/allbinary/media/image/comparison/motion/Rectangle.h"
#endif

        #endif
    
