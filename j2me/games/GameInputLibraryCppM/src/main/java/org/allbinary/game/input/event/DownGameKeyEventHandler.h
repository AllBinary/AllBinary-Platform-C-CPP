
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class LocalPlayerInputIdFactory;
class EventListenerInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DownGameKeyEventHandler: public DownGameKeyEventHandlerBase {

    private: static DownGameKeyEventHandler* instance_owner();
    private: static DownGameKeyEventHandler* instance;

    private: static std::vector<DownGameKeyEventHandlerBase*> instanceArray;

    public: static DownGameKeyEventHandler* getInstance();

    private: LocalPlayerInputIdFactory* playerInputIdFactory;

    public: DownGameKeyEventHandlerBase* getInstanceForDevice(int32_t deviceId);

    public: DownGameKeyEventHandlerBase* getInstanceForPlayer(int32_t playerInputId);

private: DownGameKeyEventHandler();

    public: void removeAllListeners();

    public: void removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface* eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/LocalPlayerInputIdFactory.h>)
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#endif

        #endif
    
