
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

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommandFormInputProcessor.h"
#include "PopupMenuInputProcessor.h"

class PopupCommandFormInputProcessor: public CommandFormInputProcessor {

public: PopupCommandFormInputProcessor(BasicArrayList gameKeyEventList, int32_t playerInputId, MyCanvas gameCanvas, ScrollSelectionForm form, PopupMenuInputProcessor popupMenuInputProcessor);

                //@Throws(Exception.constructor)
            
    public: int32_t processInput(int32_t key);

                //@Throws(Exception.constructor)
            
    protected: void processMotionInput(MotionGestureEvent motionGestureEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPCOMMANDFORMINPUTPROCESSOR_H
