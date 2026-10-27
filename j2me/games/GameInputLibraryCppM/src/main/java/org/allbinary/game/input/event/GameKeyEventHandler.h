
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class LogUtil;
class EventListenerInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PressGameKeyEventHandler;
class UpGameKeyEventHandler;
class DownGameKeyEventHandler;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameKeyEventHandler
            : public virtual Object
         {

    private: static GameKeyEventHandler* instance_owner();
    private: static GameKeyEventHandler* instance;

    public: static GameKeyEventHandler* getInstance();


            
    public: GameKeyEventHandler();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: PressGameKeyEventHandler* pressGameKeyEventHandler;

    private: UpGameKeyEventHandler* upGameKeyEventHandler;

    private: DownGameKeyEventHandler* downGameKeyEventHandler;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllListeners();

    public: void addListenerForPlayer(EventListenerInterface* eventListenerInterface, int32_t playerInputId);

    public: void addListener(EventListenerInterface* eventListenerInterface);

    public: void removeListener(EventListenerInterface* eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/input/event/PressGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/PressGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#endif

        #endif
    
