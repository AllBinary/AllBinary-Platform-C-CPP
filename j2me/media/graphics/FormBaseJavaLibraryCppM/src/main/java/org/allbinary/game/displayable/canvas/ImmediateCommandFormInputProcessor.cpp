
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"

class ImmediateCommandFormInputProcessor: public CommandFormInputProcessor {

    private: TimeDelayHelper* timeHelper = new TimeDelayHelper(25);

    protected: GameCommandCanvas* gameCommandCanvas;

public: ImmediateCommandFormInputProcessor(BasicArrayList* gameKeyEventList, int32_t playerInputId, GameCommandCanvas* gameCommandCanvas, ScrollSelectionForm* form) : CommandFormInputProcessor(gameKeyEventList, playerInputId, gameCommandCanvas, form){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->gameCommandCanvas= gameCommandCanvas;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onPressGameKeyEvent(GameKeyEvent* gameKeyEvent){

        try {
            super.onPressGameKeyEvent(gameKeyEvent);
    

                        if(this->timeHelper->isTimeTNT())
                        
                                    {
                                    this->processInputList();
    
this->gameCommandCanvas->repaintBehavior.onChangeRepaint(this->getCanvas());
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->gameInputStrings.ON_PRESS_GAME_KEY, &e);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownGameKeyEvent(GameKeyEvent* gameKeyEvent){

        try {
            super.onDownGameKeyEvent(gameKeyEvent);
    

                        if(this->timeHelper->isTimeTNT())
                        
                                    {
                                    this->processInputList();
    
this->gameCommandCanvas->repaintBehavior.onChangeRepaint(this->getCanvas());
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->gameInputStrings.ON_DOWN_GAME_KEY, &e);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpGameKeyEvent(GameKeyEvent* gameKeyEvent){

        try {
            super.onUpGameKeyEvent(gameKeyEvent);
    

                        if(this->timeHelper->isTimeTNT())
                        
                                    {
                                    this->processInputList();
    
this->gameCommandCanvas->repaintBehavior.onChangeRepaint(this->getCanvas());
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->gameInputStrings.ON_UP_GAME_KEY, &e);
    
}

}


    public: void onMotionGestureEvent(MotionGestureEvent* motionGestureEvent){

        try {
            super.onMotionGestureEvent(motionGestureEvent);
    

                        if(this->timeHelper->isTimeTNT())
                        
                                    {
                                    this->processInputList();
    
this->gameCommandCanvas->repaintBehavior.onChangeRepaint(this->getCanvas());
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "onMotionGestureEvent", &e);
    
}

}


};

            

