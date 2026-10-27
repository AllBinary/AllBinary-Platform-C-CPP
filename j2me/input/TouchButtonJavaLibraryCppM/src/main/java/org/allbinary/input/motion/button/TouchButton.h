
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
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
        #include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"

class TouchButton: public Paintable {

                //@Throws(Exception.constructor)
            
    public: static TouchButton* createButton(TouchButtonInput* touchButtonInput, TouchButtonResource* touchButtonResource, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: TouchButtonInput* touchButtonInput;

    private: Animation* animationInterface;

    private: Animation* hintAnimationInterface;

    protected: Rectangle* rawRectangle;

    protected: int32_t xBorder;

    protected: int32_t yBorder;

    protected: Rectangle* rectangleP = RectangleFactory::SINGLETON;

    protected: CellPosition* cellPositionP;

    protected: int32_t animationX= 0;

    protected: int32_t animationY= 0;

    protected: int32_t hintAnimationY= 0;

public: TouchButton(TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

    public: void paintHint(Graphics* graphics);

    public: void paint(Graphics* graphics);

    protected: void updateRectangle();

    public: CellPosition* getCellPosition();

    public: Rectangle* getRectangle();

    public: TouchButtonInput* getTouchButtonInput();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H
