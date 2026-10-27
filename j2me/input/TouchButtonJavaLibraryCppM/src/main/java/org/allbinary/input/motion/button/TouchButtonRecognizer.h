
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
//#include "org/allbinary/input/motion/button/ReleaseHelper.h"
#include "org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
//#include "org/allbinary/input/motion/button/MultitouchReleaseHelper.h"
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#include "org/allbinary/input/motion/button/TouchButton.h"

class TouchButtonRecognizer
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: RectangleCollisionUtil* rectangleCollisionUtil = RectangleCollisionUtil::getInstance();

    private: UpGameKeyEventHandler* upGameKeyEventHandler = UpGameKeyEventHandler::getInstance();

    private: DownGameKeyEventHandler* downGameKeyEventHandler = DownGameKeyEventHandler::getInstance();

    private: TouchButtonInput* lastPressedTouchButtonInput = BasicTouchInputFactory::getInstance()->NONE;

    private: CurrentlyPressedTouchButtonSingleton* currentlyPressedTouchButtonSingleton = CurrentlyPressedTouchButtonSingleton::getInstance();
//CurrentlyPressedTouchButtonSingletonDebug.getInstance();
//inner= member=true isStatic=
class ReleaseHelper
            : public Object
         {

    protected: TouchButtonRecognizer* touchButtonRecognizer;

public: ReleaseHelper(TouchButtonRecognizer* touchButtonRecognizer);

                //@Throws(Exception.constructor)
            
    public: void release(TouchButtonInput* touchButtonInput, int32_t deviceId);

};

            
//inner= member=true isStatic=
class MultitouchReleaseHelper: public ReleaseHelper {

public: MultitouchReleaseHelper(TouchButtonRecognizer* touchButtonRecognizer);

                //@Throws(Exception.constructor)
            
    public: void release(TouchButtonInput* touchButtonInput, int32_t deviceId);

};

            
    private: releaseHelper;

public: TouchButtonRecognizer();

                //@Throws(Exception.constructor)
            
    private: void processRelease(TouchButtonInput* touchButtonInput, int32_t deviceId);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool releaseTouchButtonInput(int32_t x, int32_t y, int32_t deviceId);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool pressTouchButtonInput(int32_t x, int32_t y, int32_t deviceId);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_H
