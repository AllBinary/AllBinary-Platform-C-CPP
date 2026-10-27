
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class InputMappingEvent;
#include <org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h>
class GameKeyCompleteMotionGestureInputEventFactory;
class BasicTouchInputFactory;
class ForcedLogUtil;
class AllBinaryEventObject;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionInputMappingEventListener
            : public virtual Object
        , public InputMappingEventListenerInterface {


            
    public: MotionInputMappingEventListener();
        
    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    public: void onInputMappingEvent(InputMappingEvent* inputMappingEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/mapping/event/InputMappingEvent.h>)
#include <org/allbinary/game/input/mapping/event/InputMappingEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h>)
#include <org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEventFactory.h>)
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEventFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/BasicTouchInputFactory.h>)
#include <org/allbinary/input/motion/button/BasicTouchInputFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif

        #endif
    
