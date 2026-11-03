
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENERINTERFACE_H
        #define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CompleteMotionGestureInputEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompleteMotionGestureInputEventListenerInterface: public virtual EventListenerInterface {

    public: virtual void onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENERINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#endif

        #endif
    
