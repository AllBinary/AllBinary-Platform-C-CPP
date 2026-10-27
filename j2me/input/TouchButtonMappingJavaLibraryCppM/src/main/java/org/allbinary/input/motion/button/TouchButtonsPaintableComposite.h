
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CompleteMotionGestureInputEvent;
class CompleteMotionGestureInputEventHandler;
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>
class GameKey;
class InputMappingInterface;
class GameKeyCompleteMotionGestureInputEvent;
class BasicColor;
#include <org/allbinary/graphics/paint/ProcessPaintable.h>
class MotionGestureInput;
class TouchMotionGestureFactory;
class ForcedLogUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class AllBinaryEventObject;
class EventStrings;
class CommonStrings;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchButtonsMappingPaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButtonsPaintableComposite: public ProcessPaintable, public CompleteMotionGestureInputEventListenerInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: InputMappingInterface* inputMappingInterface;

    /*protected*/ public: TouchButtonsMappingPaintable* touchButtonsPaintable;

    private: TimeDelayHelper* timeHelper;

    private: bool released = true;

public: TouchButtonsPaintableComposite(InputMappingInterface* inputMappingInterface, BasicColor* basicColor);

    public: void onEvent(AllBinaryEventObject* eventObject);

    private: const std::string METHOD_NAME = "onCompleteMotionGestureInputEvent";

    private: const std::string RELEASE = "Ignoring: MotionGestureInput Release";

    private: const std::string FAST_REPEAT = "Ignoring: MotionGestureInput Repeated To Quickly";

    private: const std::string IGNORE = "Ignoring: Until Released";

    public: void onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);

    public: void process();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEvent.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKey.h>)
#include <org/allbinary/game/input/GameKey.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/InputMappingInterface.h>)
#include <org/allbinary/game/input/mapping/InputMappingInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>)
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/ProcessPaintable.h>)
#include <org/allbinary/graphics/paint/ProcessPaintable.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/MotionGestureInput.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
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
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonsMappingPaintable.h")
#include "org/allbinary/input/motion/button/TouchButtonsMappingPaintable.h"
#endif

        #endif
    
