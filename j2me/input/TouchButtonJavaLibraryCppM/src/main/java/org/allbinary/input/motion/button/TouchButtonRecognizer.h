
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTouchInputFactory.h"
#include "TouchButtonInput.h"
#include "CurrentlyPressedTouchButtonSingleton.h"
//#include "ReleaseHelper.h"
#include "CancelTouchButtonInputFactory.h"
#include "TouchScreenFactory.h"
//#include "MultitouchReleaseHelper.h"
#include "TouchButtonFactory.h"
#include "TouchButton.h"

class TouchButtonRecognizer
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const rectangleCollisionUtil: RectangleCollisionUtil = RectangleCollisionUtil.getInstance()!;

    private: const upGameKeyEventHandler: UpGameKeyEventHandler = UpGameKeyEventHandler.getInstance()!;

    private: const downGameKeyEventHandler: DownGameKeyEventHandler = DownGameKeyEventHandler.getInstance()!;

    private: lastPressedTouchButtonInput: TouchButtonInput = BasicTouchInputFactory.getInstance()!.NONE;

    private: const currentlyPressedTouchButtonSingleton: CurrentlyPressedTouchButtonSingleton = CurrentlyPressedTouchButtonSingleton.getInstance()!;
//CurrentlyPressedTouchButtonSingletonDebug.getInstance();
//inner= member=true isStatic=
class ReleaseHelper
            : public Object
         {
        

    const touchButtonRecognizer: TouchButtonRecognizer;

public constructor (TouchButtonRecognizer touchButtonRecognizer);

                //@Throws(Exception.constructor)
            
    public release(TouchButtonInput touchButtonInput, int32_t deviceId);

};

            
//inner= member=true isStatic=
class MultitouchReleaseHelper: public ReleaseHelper {
        

public constructor (TouchButtonRecognizer touchButtonRecognizer);

                //@Throws(Exception.constructor)
            
    public release(TouchButtonInput touchButtonInput, int32_t deviceId);

};

            
    private: const releaseHelper;

public constructor ();

                //@Throws(Exception.constructor)
            
    processRelease(TouchButtonInput touchButtonInput, int32_t deviceId);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool releaseTouchButtonInput(int32_t x, int32_t y, int32_t deviceId);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool pressTouchButtonInput(int32_t x, int32_t y, int32_t deviceId);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_H
