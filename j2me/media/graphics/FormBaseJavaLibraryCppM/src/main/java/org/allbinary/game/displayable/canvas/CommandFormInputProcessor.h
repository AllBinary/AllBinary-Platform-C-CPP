
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

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/layer/SWTUtil.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/graphics/form/CommandCurrentSelectionForm.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
#include <org/allbinary/thread/PrimaryThreadPool.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicMenuInputProcessor.h"
#include "CommandRunnable.h"
//In general allow scrolling of the menu and selection the center item
class CommandFormInputProcessor: public BasicMenuInputProcessor {
        

    private: const MOTION_GESTURE_SOURCE_ID: int32_t = GameKeyEventFactory.getInstance()!.MOTION_GESTURE_SOURCE_ID;

    private: const CLICK_DELAY: int32_t = 150;

    private: const clickTimeHelper: TimeDelayHelper = new TimeDelayHelper(this.CLICK_DELAY);

    private: const DOUBLE_CLICK_DELAY: int32_t = 1200;

    private: const doubleClickTimeHelper: TimeDelayHelper = new TimeDelayHelper(this.DOUBLE_CLICK_DELAY);

    const isSingleKeyProcessing: bool = InputFeatureFactory.getInstance()!.isSingleKeyProcessing()!;

    private: form: ScrollSelectionForm;

    private: hasPressed: bool = false;

public constructor (BasicArrayList gameKeyEventList, int32_t playerInputId, MyCanvas gameCanvas, ScrollSelectionForm form);

                //@Throws(Exception.constructor)
            
    public int32_t processInput(int32_t key);

    private: const PROCESS_COMMAND: string = "processCommand";

    int32_t processCommand();

                //@Throws(Exception.constructor)
            
    public int32_t processInputList();

                //@Throws(Exception.constructor)
            
    public int32_t processMotionInputs();

                //@Throws(Exception.constructor)
            
    processMotionInput(MotionGestureEvent motionGestureEvent);

    private: const NAME_LABEL: string = " ScrollSelectionForm: ";

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_H
