
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_IMMEDIATECOMMANDFORMINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_IMMEDIATECOMMANDFORMINPUTPROCESSOR_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommandFormInputProcessor.h"
#include "GameCommandCanvas.h"

class ImmediateCommandFormInputProcessor: public CommandFormInputProcessor {
        

    private: const timeHelper: TimeDelayHelper = new TimeDelayHelper(25);

    gameCommandCanvas: GameCommandCanvas;

public constructor (BasicArrayList gameKeyEventList, int32_t playerInputId, GameCommandCanvas gameCommandCanvas, ScrollSelectionForm form);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public onPressGameKeyEvent(GameKeyEvent gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public onDownGameKeyEvent(GameKeyEvent gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public onUpGameKeyEvent(GameKeyEvent gameKeyEvent);

    public onMotionGestureEvent(MotionGestureEvent motionGestureEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_IMMEDIATECOMMANDFORMINPUTPROCESSOR_H
