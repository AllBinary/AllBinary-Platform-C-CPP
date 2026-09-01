
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLER_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLER_H

            #include <vector>
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UpGameKeyEventHandlerBase.h"

class UpGameKeyEventHandler: public UpGameKeyEventHandlerBase {

    private: static UpGameKeyEventHandler instance() { return UpGameKeyEventHandler(); }

    private: static const std::vector<UpGameKeyEventHandlerBase> instanceArray = 
                                                        {
                                                            UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase()
                                                        };

    public: static UpGameKeyEventHandler getInstance();

    private: const LocalPlayerInputIdFactory playerInputIdFactory = LocalPlayerInputIdFactory::getInstance();

    public: UpGameKeyEventHandlerBase getInstanceForDevice(int32_t deviceId);

    public: UpGameKeyEventHandlerBase getInstanceForPlayer(int32_t playerInputId);

private: UpGameKeyEventHandler();

    public: void removeAllListeners();

    public: void removeListenerSingleThreaded(EventListenerInterface eventListenerInterface);

    public: void removeListener(EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLER_H
