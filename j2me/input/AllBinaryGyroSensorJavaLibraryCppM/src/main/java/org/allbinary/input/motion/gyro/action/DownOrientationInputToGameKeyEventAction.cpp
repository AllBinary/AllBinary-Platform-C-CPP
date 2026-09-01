
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
        



#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/input/gyro/OrientationMotionGestureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DownOrientationInputToGameKeyEventAction: public GameKeyCompleteMotionGestureInputEvent {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GameKeyCompleteMotionGestureInputEvent getInstance(){

                        if(DownOrientationInputToGameKeyEventAction::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    DownOrientationInputToGameKeyEventAction::instance= DownOrientationInputToGameKeyEventAction();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownOrientationInputToGameKeyEventAction::instance() as GameKeyCompleteMotionGestureInputEvent;
    
}


private: DownOrientationInputToGameKeyEventAction(){
            super("Down Action", OrientationMotionGestureFactory::getInstance().DOWN, PlatformInputMappingFactory::getInstance().getPersistentInputMappingInstance().getInputMapping());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

