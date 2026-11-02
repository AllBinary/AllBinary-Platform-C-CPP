
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DownGameKeyEventHandler;
class GameKeyEvent;
class UpGameKeyEventHandler;
class GPoint;
class Rectangle;
class LogUtil;
class RectangleCollisionUtil;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicTouchInputFactory;
class TouchButtonInput;
class CurrentlyPressedTouchButtonSingleton;
//#include "org/allbinary/input/motion/button/ReleaseHelper.h"
class CancelTouchButtonInputFactory;
class TouchScreenFactory;
//class MultitouchReleaseHelper;
class TouchButtonFactory;
class TouchButton;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButtonRecognizer
            : public virtual Object
         {
public: class ReleaseHelper;
public: class MultitouchReleaseHelper;

    /*protected*/ public: LogUtil* logUtil;

    private: RectangleCollisionUtil* rectangleCollisionUtil;

    private: UpGameKeyEventHandler* upGameKeyEventHandler;

    private: DownGameKeyEventHandler* downGameKeyEventHandler;

    private: TouchButtonInput* lastPressedTouchButtonInput;

    private: CurrentlyPressedTouchButtonSingleton* currentlyPressedTouchButtonSingleton;
//CurrentlyPressedTouchButtonSingletonDebug.getInstance();
//inner= member=true isStatic=
public: class ReleaseHelper
            : public virtual Object
         {

    public: TouchButtonRecognizer* outer = nullptr;

    /*protected*/ public: TouchButtonRecognizer* touchButtonRecognizer;

public: ReleaseHelper(TouchButtonRecognizer* touchButtonRecognizer);

                //@Throws(Exception.constructor)
            
    public: void release(TouchButtonInput* touchButtonInput, int32_t deviceId);

};

            
//inner= member=true isStatic=
public: class MultitouchReleaseHelper: public ReleaseHelper {

    public: TouchButtonRecognizer* outer = nullptr;

public: MultitouchReleaseHelper(TouchButtonRecognizer* touchButtonRecognizer);

                //@Throws(Exception.constructor)
            
    public: void release(TouchButtonInput* touchButtonInput, int32_t deviceId);

};

            
    private: ReleaseHelper* releaseHelper;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/DownGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/UpGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/math/RectangleCollisionUtil.h>)
#include <org/allbinary/math/RectangleCollisionUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/input/motion/button/BasicTouchInputFactory.h")
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif
#if __has_include("org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h")
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
#endif
#if __has_include("org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h")
#include "org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchScreenFactory.h")
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonFactory.h")
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButton.h")
#include "org/allbinary/input/motion/button/TouchButton.h"
#endif

        #endif
    
