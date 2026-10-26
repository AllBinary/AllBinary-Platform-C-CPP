
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATORCONSTRAINTSINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATORCONSTRAINTSINTERFACE_H

            #include "java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Rectangle.h"
#include "Color.h"

class ImageComparatorConstraintsInterface {

    int32_t getMaxNonMatchingPixelDeltas();

    bool isCollisionWithAvoidRectangles(Rectangle rectangle);

    bool isCollisionWithAvoidRectangles(GPoint point);

    bool isColorAllowed(int32_t frame, GPoint point, Color color);

                //@Throws(Exception.constructor)
            
    bool isImageValid(BufferedImage bufferedImage);

    bool isFrameAllowed(int32_t frame);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATORCONSTRAINTSINTERFACE_H
