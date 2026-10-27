
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPCOMMANDFORMINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPCOMMANDFORMINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/PopupCommandFormInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/PopupMenuInputProcessor.h"


PopupCommandFormInputProcessor::PopupCommandFormInputProcessor(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form, PopupMenuInputProcessor* popupMenuInputProcessor) : CommandFormInputProcessor(gameKeyEventList, playerInputId, gameCanvas, form){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto PopupCommandFormInputProcessor::processInput(int32_t key) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommandFormInputProcessor::processInput(key);;
    
}


                //@Throws(Exception.constructor)
            
    auto PopupCommandFormInputProcessor::processMotionInput(MotionGestureEvent* motionGestureEvent) -> void{
CommandFormInputProcessor::processMotionInput(motionGestureEvent);
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPCOMMANDFORMINPUTPROCESSOR_CPP
