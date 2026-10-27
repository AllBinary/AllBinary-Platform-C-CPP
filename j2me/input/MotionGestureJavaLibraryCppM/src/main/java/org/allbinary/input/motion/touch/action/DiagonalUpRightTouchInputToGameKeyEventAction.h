
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALUPRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H
        #define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALUPRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class PlatformInputMappingFactory;
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>
class TouchMotionGestureFactory;
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DiagonalUpRightTouchInputToGameKeyEventAction: public GameKeyCompleteMotionGestureInputEvent {

    private: static Object* instance;

    public: static GameKeyCompleteMotionGestureInputEvent* getInstance();

private: DiagonalUpRightTouchInputToGameKeyEventAction();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALUPRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALUPRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALUPRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/PlatformInputMappingFactory.h>)
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>)
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif

        #endif
    
