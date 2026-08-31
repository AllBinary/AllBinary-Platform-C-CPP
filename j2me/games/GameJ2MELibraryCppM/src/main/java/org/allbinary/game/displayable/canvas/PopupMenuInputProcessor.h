
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPMENUINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPMENUINPUTPROCESSOR_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicMenuInputProcessor.h"
#include "AllBinaryGameCanvas.h"

class PopupMenuInputProcessor: public BasicMenuInputProcessor {
        

    private: const rectangleCollisionUtil: RectangleCollisionUtil = RectangleCollisionUtil.getInstance()!;

    private: const CLICK_DELAY: int32_t = 120;

    private: const clickTimeHelper: TimeDelayHelper = new TimeDelayHelper(this.CLICK_DELAY);

    private: rectangle: Rectangle;

public constructor (BasicArrayList gameKeyEventList, int32_t playerInputId, MyCanvas gameCanvas, Rectangle rectangle);

    public init(Rectangle rectangle);

                //@Throws(Exception.constructor)
            
    public int32_t processInput(int32_t key);

                //@Throws(Exception.constructor)
            
    public int32_t processInputList();

                //@Throws(Exception.constructor)
            
    public int32_t processMotionInputs();

                //@Throws(Exception.constructor)
            
    processMotionInput(MotionGestureEvent motionGestureEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPMENUINPUTPROCESSOR_H
