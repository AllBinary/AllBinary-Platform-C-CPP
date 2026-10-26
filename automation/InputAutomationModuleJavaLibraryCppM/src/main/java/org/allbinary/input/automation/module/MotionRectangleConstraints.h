
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_MOTIONRECTANGLECONSTRAINTS_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_MOTIONRECTANGLECONSTRAINTS_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Dimension.h"
#include "Rectangle.h"

class MotionRectangleConstraints
            : public Object
        : public MotionRectangleConstraintsInterface {

    private: Dimension minDimension;

    private: Dimension maxDimension;

    private: int32_t maxMotionRectangles= 0;

    private: int32_t minArea= 0;

public: MotionRectangleConstraints();

    public: Dimension getMinDimension();

    public: Dimension getMaxDimension();

    public: bool isTooSmall(Rectangle rectangle);

    public: bool isAreaTooSmall(Rectangle rectangle);

    public: bool isTooBig(Rectangle rectangle);

                //@Throws(Exception.constructor)
            
    public: bool isValid(Long frame, BufferedImage bufferedImage, Rectangle rectangle);

    public: void setMinDimension(Dimension minDimension);

    public: void setMaxDimension(Dimension maxDimension);

    public: int32_t getMaxMotionRectangles();

    public: void setMaxMotionRectangles(int32_t maxMotionRectangles);

    public: int32_t getMinArea();

    public: void setMinArea(int32_t minArea);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_MOTIONRECTANGLECONSTRAINTS_H
