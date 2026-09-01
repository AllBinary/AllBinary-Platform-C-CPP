
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLE_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLE_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonFactory.h"
#include "TouchButton.h"

class TouchButtonsPaintable: public Paintable {

    protected: BasicColor foregroundBasicColor;

    protected: int32_t foregroundColor;

    protected: const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();

    private: const TouchButtonFactory touchButtonFactory = TouchButtonFactory::getInstance();

public: TouchButtonsPaintable(BasicColor basicColor);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLE_H
