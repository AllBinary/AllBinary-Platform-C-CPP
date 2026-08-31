
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RELEASETOUCHINPUTTOGAMEKEYEVENTACTION_H
        #define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RELEASETOUCHINPUTTOGAMEKEYEVENTACTION_H

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
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameKeyCompleteMotionGestureInputEvent getInstance();

    private: const NONE: GameKey = GameKeyFactory.getInstance()!.NONE;

private constructor ();

    public update();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RELEASETOUCHINPUTTOGAMEKEYEVENTACTION_H
