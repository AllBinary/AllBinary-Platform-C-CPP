
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPCOMMANDFORMINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPCOMMANDFORMINPUTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class MyCanvas;
class ScrollSelectionForm;
class MotionGestureEvent;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
class PopupMenuInputProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PopupCommandFormInputProcessor: public CommandFormInputProcessor {

public: PopupCommandFormInputProcessor(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form, PopupMenuInputProcessor* popupMenuInputProcessor);

                //@Throws(Exception.constructor)
            
    public: int32_t processInput(int32_t key);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void processMotionInput(MotionGestureEvent* motionGestureEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPCOMMANDFORMINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPCOMMANDFORMINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPCOMMANDFORMINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PopupMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/PopupMenuInputProcessor.h"
#endif

        #endif
    
