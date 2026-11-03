
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryEventObject;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
class InputMappingEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullInputMappingEventListener
            : public virtual Object
        , public virtual InputMappingEventListenerInterface {

    private: static NullInputMappingEventListener* NULL_INPUT_MAPPING_EVENT_LISTENER_owner();
    public: static NullInputMappingEventListener* NULL_INPUT_MAPPING_EVENT_LISTENER;


            
    public: NullInputMappingEventListener();
        
                //@Throws(Exception.constructor)
            
    public: void onInputMappingEvent(InputMappingEvent* inputMappingEvent);

    public: void onEvent(AllBinaryEventObject* eventObject);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h")
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/event/InputMappingEvent.h")
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"
#endif

        #endif
    
