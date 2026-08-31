
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
        
class RightOrientationInputToGameKeyEventAction: public GameKeyCompleteMotionGestureInputEvent {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameKeyCompleteMotionGestureInputEvent getInstance(){

                        if(RightOrientationInputToGameKeyEventAction.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    RightOrientationInputToGameKeyEventAction.instance= new RightOrientationInputToGameKeyEventAction();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RightOrientationInputToGameKeyEventAction.instance as GameKeyCompleteMotionGestureInputEvent;
    
}


private constructor (){
            super("Right Action", OrientationMotionGestureFactory.getInstance()!.RIGHT, PlatformInputMappingFactory.getInstance()!.getPersistentInputMappingInstance()!.getInputMapping());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

