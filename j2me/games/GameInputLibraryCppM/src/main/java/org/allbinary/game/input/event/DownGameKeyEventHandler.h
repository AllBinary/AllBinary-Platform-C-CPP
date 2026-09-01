
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

            #include <vector>
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownGameKeyEventHandlerBase.h"

class DownGameKeyEventHandler: public DownGameKeyEventHandlerBase {

    private: static DownGameKeyEventHandler instance() { return DownGameKeyEventHandler(); }

    private: static const std::vector<DownGameKeyEventHandlerBase> instanceArray = 
                                                        {
                                                            DownGameKeyEventHandlerBase(),DownGameKeyEventHandlerBase(),DownGameKeyEventHandlerBase(),DownGameKeyEventHandlerBase(),DownGameKeyEventHandlerBase(),DownGameKeyEventHandlerBase()
                                                        };

    public: static DownGameKeyEventHandler getInstance();

    private: const LocalPlayerInputIdFactory playerInputIdFactory = LocalPlayerInputIdFactory::getInstance();

    public: DownGameKeyEventHandlerBase getInstanceForDevice(int32_t deviceId);

    public: DownGameKeyEventHandlerBase getInstanceForPlayer(int32_t playerInputId);

private: DownGameKeyEventHandler();

    public: void removeAllListeners();

    public: void removeListenerSingleThreaded(EventListenerInterface eventListenerInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_H
