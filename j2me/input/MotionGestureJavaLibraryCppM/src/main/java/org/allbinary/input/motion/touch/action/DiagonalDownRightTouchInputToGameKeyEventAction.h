
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALDOWNRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H
        #define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALDOWNRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H

#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DiagonalDownRightTouchInputToGameKeyEventAction: public GameKeyCompleteMotionGestureInputEvent {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GameKeyCompleteMotionGestureInputEvent getInstance();

private: DiagonalDownRightTouchInputToGameKeyEventAction();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALDOWNRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H
