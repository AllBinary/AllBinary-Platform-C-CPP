
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Animation;
class AnimationInterface;
class CellPosition;
class GPoint;
class PointFactory;
class Rectangle;
class RectangleFactory;
#include <org/allbinary/graphics/paint/Paintable.h>
class LogUtil;
class StringMaker;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchButtonInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButton: public Paintable {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: TouchButtonInput* touchButtonInput;

    private: Animation* animationInterface;

    /*protected*/ public: Rectangle* rawRectangle;

    /*protected*/ public: int32_t xBorder;

    /*protected*/ public: int32_t yBorder;

    /*protected*/ public: Rectangle* rectangle;

    /*protected*/ public: CellPosition* cellPosition;

    /*protected*/ public: int32_t animationX= 0;

    /*protected*/ public: int32_t animationY= 0;

public: TouchButton(TouchButtonInput* touchButtonInput, AnimationInterface* animationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

    public: void paint(Graphics* graphics);

    /*protected*/ public: void updateRectangle();

    public: CellPosition* getCellPositionP();

    public: Rectangle* getRectangleP();

    public: TouchButtonInput* getTouchButtonInput();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterface.h>)
#include <org/allbinary/animation/AnimationInterface.h>
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
#if __has_include(<org/allbinary/graphics/RectangleFactory.h>)
#include <org/allbinary/graphics/RectangleFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif

        #endif
    
