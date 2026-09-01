
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompleteMotionGestureInputEventListenerInterface.h"
#include "CompleteMotionGestureInputEvent.h"

class CompleteMotionGestureInputEventListener
            : public Object
        : public CompleteMotionGestureInputEventListenerInterface {

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent completeMotionGestureInputEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
