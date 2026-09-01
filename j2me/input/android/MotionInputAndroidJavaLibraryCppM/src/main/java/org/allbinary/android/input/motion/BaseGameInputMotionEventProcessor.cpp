
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

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: GameMotionGestureListener gameMotionGestureListener;

protected: BaseGameInputMotionEventProcessor(){
this->gameMotionGestureListener= GameMotionGestureListener(MotionGestureReceiveInterfaceFactory::getInstance());
    
this->addListener();
    
}


    public: void process(MotionEvent motionEvent){
}


    public: void addListener(){

    BasicMotionGesturesHandler motionGesturesHandler = BasicMotionGesturesHandler::getInstance();;
    
motionGesturesHandler.addListenerInterface(this->gameMotionGestureListener);
    
}


};

            

