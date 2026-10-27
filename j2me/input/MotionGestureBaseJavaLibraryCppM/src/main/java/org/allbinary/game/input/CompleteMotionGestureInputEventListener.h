
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AllBinaryEventObject;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
class CompleteMotionGestureInputEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompleteMotionGestureInputEventListener
            : public virtual Object
        , public CompleteMotionGestureInputEventListenerInterface {


            
    public: CompleteMotionGestureInputEventListener();
        
    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
#endif
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#endif

        #endif
    
