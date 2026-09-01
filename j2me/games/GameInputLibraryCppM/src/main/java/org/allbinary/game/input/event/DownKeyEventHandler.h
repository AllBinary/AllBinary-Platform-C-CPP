
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
        
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownKeyEventHandlerBase.h"

class DownKeyEventHandler: public DownKeyEventHandlerBase {

    private: static DownKeyEventHandler instance() { return DownKeyEventHandler(); }

    private: static const std::vector<DownKeyEventHandlerBase> instanceArray = 
                                                        {
                                                            DownKeyEventHandlerBase(),DownKeyEventHandlerBase(),DownKeyEventHandlerBase(),DownKeyEventHandlerBase(),DownKeyEventHandlerBase(),DownKeyEventHandlerBase()
                                                        };

    public: static DownKeyEventHandler getInstance();

    private: const LocalPlayerInputIdFactory playerInputIdFactory = LocalPlayerInputIdFactory::getInstance();

    public: DownKeyEventHandlerBase getInstanceForDevice(int32_t deviceId);

    public: DownKeyEventHandlerBase getInstanceForPlayer(int32_t playerInputId);

private: DownKeyEventHandler();

    public: void removeAllListeners();

    public: void removeListenerSingleThreaded(EventListenerInterface eventListenerInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_H
