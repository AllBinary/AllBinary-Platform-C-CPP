
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"

class DownKeyEventHandler: public DownKeyEventHandlerBase {

    private: static DownKeyEventHandler* instance() { static std::unique_ptr<DownKeyEventHandler> value(new DownKeyEventHandler()); return value.get(); }

    private: static inline const std::vector<DownKeyEventHandlerBase*> instanceArray = 
                                                        {
                                                            new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase()
                                                        };

    public: static DownKeyEventHandler* getInstance();

    private: LocalPlayerInputIdFactory* playerInputIdFactory = LocalPlayerInputIdFactory::getInstance();

    public: DownKeyEventHandlerBase* getInstanceForDevice(int32_t deviceId);

    public: DownKeyEventHandlerBase* getInstanceForPlayer(int32_t playerInputId);

private: DownKeyEventHandler();

    public: void removeAllListeners();

    public: void removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface* eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_H
