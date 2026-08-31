
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSTRAINEDMOTIONRECTANGLES_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSTRAINEDMOTIONRECTANGLES_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"
#include "MotionRectangleConstraintsInterface.h"
#include "MotionRectangle.h"
#include "Rectangle.h"

class ConstrainedMotionRectangles: public MotionRectangles {
        

    private: static const NAME: string = "constrainedMotionRectangles_";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: motionRectangleConstraintsInterface: MotionRectangleConstraintsInterface;

public constructor (MotionRectangleConstraintsInterface motionRectangleConstraintsInterface, MotionRectangles motionRectangles);

                //@Throws(Exception.constructor)
            
    public applyMotionRectangleConstraints(MotionRectangles motionRectangles);

    public MotionRectangleConstraintsInterface getMotionRectangleConstraintsInterface();

    public setMotionRectangleConstraintsInterface(MotionRectangleConstraintsInterface motionRectangleConstraintsInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSTRAINEDMOTIONRECTANGLES_H
