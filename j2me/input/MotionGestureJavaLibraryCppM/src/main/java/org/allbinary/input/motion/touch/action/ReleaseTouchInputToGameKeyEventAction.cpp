
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ReleaseTouchInputToGameKeyEventAction: public GameKeyCompleteMotionGestureInputEvent {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GameKeyCompleteMotionGestureInputEvent getInstance(){

                        if(ReleaseTouchInputToGameKeyEventAction::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    ReleaseTouchInputToGameKeyEventAction::instance= ReleaseTouchInputToGameKeyEventAction();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ReleaseTouchInputToGameKeyEventAction::instance() as GameKeyCompleteMotionGestureInputEvent;
    
}


    private: const GameKey NONE = GameKeyFactory::getInstance().NONE;

private: ReleaseTouchInputToGameKeyEventAction(){
            super("Release Action", TouchMotionGestureFactory::getInstance().RELEASED, PlatformInputMappingFactory::getInstance().getPersistentInputMappingInstance().getInputMapping());
                    

                            //For kotlin this is before the body of the constructor.
                    

        try {
            this->setGameKey(this->NONE);
    
this->setGameKeyEvent(GameKeyEventFactory::getInstance().getInstanceForInput(this, this->NONE));
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.CONSTRUCTOR, e);
    
}

}


    public: void update(){
}


};

            

