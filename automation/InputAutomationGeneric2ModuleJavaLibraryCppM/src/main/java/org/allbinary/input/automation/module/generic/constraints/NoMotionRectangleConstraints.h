
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONSTRAINTS_NOMOTIONRECTANGLECONSTRAINTS_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONSTRAINTS_NOMOTIONRECTANGLECONSTRAINTS_H

            #include "../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/input/automation/module/MotionRectangleConstraints.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Dimension.h"
#include "Rectangle.h"

class NoMotionRectangleConstraints: public MotionRectangleConstraints {

public: NoMotionRectangleConstraints();

    public: bool isValid(Long frame, BufferedImage bufferedImage, Rectangle rectangle);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONSTRAINTS_NOMOTIONRECTANGLECONSTRAINTS_H
