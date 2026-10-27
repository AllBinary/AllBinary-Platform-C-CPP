
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Canvas;
class Command;
class GameCommandsFactory;
class Features;
class InputFeatureFactory;
class GameKeyEvent;
class GameKeyEventFactory;
class SWTUtil;
class GPoint;
class MyCanvas;
class CommandCurrentSelectionForm;
class ScrollSelectionForm;
class OpenGLFeatureFactory;
class MotionGestureInput;
class TouchMotionGestureFactory;
class MotionGestureEvent;
class StringMaker;
class PrimaryPlayerQueueFactory;
class SelectSound;
class PrimaryThreadPool;
class TimeDelayHelper;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
class CommandRunnable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //In general allow scrolling of the menu and selection the center item
class CommandFormInputProcessor: public BasicMenuInputProcessor {

    private: const int32_t MOTION_GESTURE_SOURCE_ID;

    private: const int32_t CLICK_DELAY = 150;

    private: TimeDelayHelper* clickTimeHelper;

    private: const int32_t DOUBLE_CLICK_DELAY = 1200;

    private: TimeDelayHelper* doubleClickTimeHelper;

    /*protected*/ public: const bool isSingleKeyProcessing;

    private: ScrollSelectionForm* form;

    private: bool hasPressed = false;

public: CommandFormInputProcessor(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form);

                //@Throws(Exception.constructor)
            
    public: int32_t processInput(int32_t key);

    private: const std::string PROCESS_COMMAND = "processCommand";

    private: int32_t processCommand();

                //@Throws(Exception.constructor)
            
    public: int32_t processInputList();

                //@Throws(Exception.constructor)
            
    public: int32_t processMotionInputs();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void processMotionInput(MotionGestureEvent* motionGestureEvent);

    private: const std::string NAME_LABEL = " ScrollSelectionForm: ";

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/InputFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/SWTUtil.h>)
#include <org/allbinary/game/layer/SWTUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/form/CommandCurrentSelectionForm.h>)
#include <org/allbinary/graphics/form/CommandCurrentSelectionForm.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/MotionGestureInput.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>)
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/SelectSound.h>)
#include <org/allbinary/media/audio/SelectSound.h>
#endif
#if __has_include(<org/allbinary/thread/PrimaryThreadPool.h>)
#include <org/allbinary/thread/PrimaryThreadPool.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/CommandRunnable.h")
#include "org/allbinary/game/displayable/canvas/CommandRunnable.h"
#endif

        #endif
    
