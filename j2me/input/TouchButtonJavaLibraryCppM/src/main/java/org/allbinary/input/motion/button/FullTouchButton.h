
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Animation;
class FeaturedAnimationInterfaceFactoryInterfaceFactory;
class CellPosition;
class GPoint;
class PointFactory;
class Rectangle;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButton.h"
class TouchButtonInput;
class TouchButtonResource;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FullTouchButton: public TouchButton {

                //@Throws(Exception.constructor)
            
    public: static FullTouchButton* createButton(TouchButtonInput* touchButtonInput, TouchButtonResource* touchButtonResource, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

public: FullTouchButton(TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

    /*protected*/ public: void updateRectangle();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_H_COMPLETE
        #if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>)
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButton.h")
#include "org/allbinary/input/motion/button/TouchButton.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonResource.h")
#include "org/allbinary/input/motion/button/TouchButtonResource.h"
#endif

        #endif
    
