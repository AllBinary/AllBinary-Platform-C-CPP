
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NOMENUINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NOMENUINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"

auto NoMenuInputProcessor::SINGLETON_owner() -> NoMenuInputProcessor* { static std::unique_ptr<NoMenuInputProcessor> value(new NoMenuInputProcessor()); return value.get(); }
NoMenuInputProcessor* NoMenuInputProcessor::SINGLETON = NoMenuInputProcessor::SINGLETON_owner();

    auto NoMenuInputProcessor::getInstance() -> NoMenuInputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NoMenuInputProcessor::SINGLETON;
    
}


NoMenuInputProcessor::NoMenuInputProcessor() : BasicMenuInputProcessor(BasicArrayListUtil::getInstance()->getImmutableInstance(),  -1, NullCanvas::NULL_CANVAS){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto NoMenuInputProcessor::onDownGameKeyEvent(GameKeyEvent* gameKeyEvent) -> void{
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto NoMenuInputProcessor::onUpGameKeyEvent(GameKeyEvent* gameKeyEvent) -> void{
}


    auto NoMenuInputProcessor::onMotionGestureEvent(MotionGestureEvent* motionGestureEvent) -> void{
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NOMENUINPUTPROCESSOR_CPP
