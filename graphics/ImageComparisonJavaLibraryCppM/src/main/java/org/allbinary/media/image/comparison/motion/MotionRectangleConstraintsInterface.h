
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLECONSTRAINTSINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLECONSTRAINTSINTERFACE_H

            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Dimension.h"
#include "Rectangle.h"

class MotionRectangleConstraintsInterface {

    int32_t getMaxMotionRectangles();

    Dimension getMinDimension();

    int32_t getMinArea();

    Dimension getMaxDimension();

    bool isTooSmall(Rectangle rectangle);

    bool isAreaTooSmall(Rectangle rectangle);

    bool isTooBig(Rectangle rectangle);

                //@Throws(Exception.constructor)
            
    bool isValid(Long frame, BufferedImage bufferedImage, Rectangle rectangle);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLECONSTRAINTSINTERFACE_H
