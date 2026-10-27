
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
#include <org/allbinary/input/automation/module/MotionRectangleConstraints.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Dimension;
class Rectangle;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoMotionRectangleConstraints: public MotionRectangleConstraints {

public: NoMotionRectangleConstraints();

    public: bool isValid(int64_t frame, BufferedImage* bufferedImage, Rectangle* rectangle);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONSTRAINTS_NOMOTIONRECTANGLECONSTRAINTS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONSTRAINTS_NOMOTIONRECTANGLECONSTRAINTS_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONSTRAINTS_NOMOTIONRECTANGLECONSTRAINTS_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/MotionRectangleConstraints.h>)
#include <org/allbinary/input/automation/module/MotionRectangleConstraints.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/constraints/Dimension.h")
#include "org/allbinary/input/automation/module/generic/constraints/Dimension.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/constraints/Rectangle.h")
#include "org/allbinary/input/automation/module/generic/constraints/Rectangle.h"
#endif

        #endif
    
