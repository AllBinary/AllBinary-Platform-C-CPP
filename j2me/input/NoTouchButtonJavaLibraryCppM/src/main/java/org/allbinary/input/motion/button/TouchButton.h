
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H

            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationInterface.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"

class TouchButton: public Paintable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: TouchButtonInput touchButtonInput;

    private: Animation animationInterface;

    protected: Rectangle rawRectangle;

    protected: int32_t xBorder;

    protected: int32_t yBorder;

    protected: Rectangle rectangle = RectangleFactory::SINGLETON;

    protected: CellPosition cellPosition;

    protected: int32_t animationX= 0;

    protected: int32_t animationY= 0;

public: TouchButton(TouchButtonInput touchButtonInput, AnimationInterface animationInterface, Rectangle rawRectangle, CellPosition cellPosition, int32_t xBorder, int32_t yBorder);

    public: void paint(Graphics graphics);

    protected: void updateRectangle();

    public: CellPosition getCellPositionP();

    public: Rectangle getRectangleP();

    public: TouchButtonInput getTouchButtonInput();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H
