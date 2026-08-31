
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2009 AllBinary
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
        



#include <android/view/MotionEvent.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionEventProcessor.h"

class BaseGameInputMotionEventProcessor: public MotionEventProcessor {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const gameMotionGestureListener: GameMotionGestureListener;

protected constructor (){

            super();
        this.gameMotionGestureListener= new GameMotionGestureListener(MotionGestureReceiveInterfaceFactory.getInstance());
    
this.addListener();
    
}


    public process(MotionEvent motionEvent){
}


    public addListener(){

    motionGesturesHandler: BasicMotionGesturesHandler = BasicMotionGesturesHandler.getInstance()!;;
    
motionGesturesHandler!.addListenerInterface(this.gameMotionGestureListener);
    
}


};

            

