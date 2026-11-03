
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasicMenuInputProcessor::BasicMenuInputProcessor(BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas) : PlayerGameInput(gameKeyEventList, new BasicArrayListD(), playerInputId), motionGestureEventList(new BasicArrayListD()), canvas(NullCanvas::NULL_CANVAS){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->canvas= gameCanvas;
    
}


    auto BasicMenuInputProcessor::onMotionGestureEvent(MotionGestureEvent* motionGestureEvent) -> void{
this->motionGestureEventList->add(motionGestureEvent);
    
}


    auto BasicMenuInputProcessor::onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent) -> void{
}


    auto BasicMenuInputProcessor::setCanvas(MyCanvas* canvas) -> void{
this->canvas= canvas;
    
}


    auto BasicMenuInputProcessor::getCanvas() -> MyCanvas*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<MyCanvas*>(this->canvas);
    
}


                //@Throws(Exception.constructor)
            
    auto BasicMenuInputProcessor::processInputList() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICMENUINPUTPROCESSOR_CPP
