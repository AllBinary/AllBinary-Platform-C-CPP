
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class PlayerGameInput;
class StringMaker;
class AllBinaryEventObject;
class EventListenerInterface;
class EventStrings;
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameKeyEvent;
class DownGameKeyEventListenerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DownGameKeyEventHandlerBase: public BasicEventHandler {

    private: static inline const std::string TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";

    private: static inline const std::string LISTENER_LABEL = " PlayerGameInput Listener: ";

    private: BasicArrayList* list;

public: DownGameKeyEventHandlerBase();

    public: void addListener(PlayerGameInput* playerGameInput);

    public: void removeAllListeners();

    public: void removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface* eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public: void fireEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/PlayerGameInput.h>)
#include <org/allbinary/game/input/PlayerGameInput.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEvent.h")
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventListenerInterface.h")
#include "org/allbinary/game/input/event/DownGameKeyEventListenerInterface.h"
#endif

        #endif
    
