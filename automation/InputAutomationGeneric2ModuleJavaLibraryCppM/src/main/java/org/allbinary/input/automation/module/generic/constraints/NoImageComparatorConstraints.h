
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONSTRAINTS_NOIMAGECOMPARATORCONSTRAINTS_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONSTRAINTS_NOIMAGECOMPARATORCONSTRAINTS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/input/automation/module/ImageComparatorConstraints.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/constraints/Color.h"

class NoImageComparatorConstraints: public ImageComparatorConstraints {

public: NoImageComparatorConstraints();

    public: bool isColorAllowed(int32_t frame, GPoint* point, Color* color);

    public: bool isImageValid(BufferedImage* bufferedImage);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONSTRAINTS_NOIMAGECOMPARATORCONSTRAINTS_H
