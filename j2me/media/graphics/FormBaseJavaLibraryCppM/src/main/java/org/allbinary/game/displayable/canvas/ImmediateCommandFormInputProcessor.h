
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GameKeyEvent;
class ScrollSelectionForm;
class MotionGestureEvent;
class TimeDelayHelper;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
class GameCommandCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImmediateCommandFormInputProcessor: public CommandFormInputProcessor {

    private: TimeDelayHelper* timeHelper;

    /*protected*/ public: GameCommandCanvas* gameCommandCanvas;

public: ImmediateCommandFormInputProcessor(BasicArrayList* gameKeyEventList, int32_t playerInputId, GameCommandCanvas* gameCommandCanvas, ScrollSelectionForm* form);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onPressGameKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownGameKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpGameKeyEvent(GameKeyEvent* gameKeyEvent);

    public: void onMotionGestureEvent(MotionGestureEvent* motionGestureEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_IMMEDIATECOMMANDFORMINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_IMMEDIATECOMMANDFORMINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_IMMEDIATECOMMANDFORMINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCommandCanvas.h")
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#endif

        #endif
    
