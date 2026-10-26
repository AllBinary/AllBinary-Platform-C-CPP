
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

            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButton.h"
#include "TouchButtonInput.h"
#include "TouchButtonResource.h"

class FullTouchButton: public TouchButton {

                //@Throws(Exception.constructor)
            
    public: static FullTouchButton createButton(TouchButtonInput touchButtonInput, TouchButtonResource touchButtonResource, Rectangle rawRectangle, CellPosition cellPosition, int32_t xBorder, int32_t yBorder);

public: FullTouchButton(TouchButtonInput touchButtonInput, Animation animationInterface, Animation hintAnimationInterface, Rectangle rawRectangle, CellPosition cellPosition, int32_t xBorder, int32_t yBorder);

    protected: void updateRectangle();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_H
