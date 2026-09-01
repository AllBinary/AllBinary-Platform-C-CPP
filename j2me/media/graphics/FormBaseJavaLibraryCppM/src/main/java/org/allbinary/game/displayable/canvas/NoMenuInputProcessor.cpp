
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
        



#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicMenuInputProcessor.h"

class NoMenuInputProcessor: public BasicMenuInputProcessor {

    private: static const NoMenuInputProcessor SINGLETON = NoMenuInputProcessor();

    public: static NoMenuInputProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoMenuInputProcessor::SINGLETON;
    
}


private: NoMenuInputProcessor(){
            super(BasicArrayListUtil::getInstance().getImmutableInstance(),  -1, NullCanvas::NULL_CANVAS);
                    

                            //For kotlin this is before the body of the constructor.
                    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownGameKeyEvent(GameKeyEvent gameKeyEvent){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpGameKeyEvent(GameKeyEvent gameKeyEvent){
}


    public: void onMotionGestureEvent(MotionGestureEvent motionGestureEvent){
}


};

            

