
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

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"
#include "MotionRectangle.h"
#include "Rectangle.h"

class AllMotionRectangles: public MotionRectangles {

    private: static const std::string NAME = "allMotionRectangles_";

public: AllMotionRectangles(ImageComparisonResult imageComparisonResult);

                //@Throws(Exception.constructor)
            
    private: void createMotionRectangles(ImageComparisonResult imageComparisonInfo);

                //@Throws(Exception.constructor)
            
    private: bool addPixelDeltaToExistingMotionRectangle(PixelDelta pixelDelta);

                //@Throws(Exception.constructor)
            
    private: void addPixelDeltaToAMotionRectangle(PixelDelta pixelDelta);

                //@Throws(Exception.constructor)
            
    private: bool shouldPixelDeltaPartOfMotionRectangle(MotionRectangle motionRectangle, PixelDelta pixelDelta);

                //@Throws(Exception.constructor)
            
    private: bool isPixelDeltaLikelyPartOfMotionRectangle(MotionRectangle motionRectangle, PixelDelta pixelDelta);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_ALLMOTIONRECTANGLES_H
