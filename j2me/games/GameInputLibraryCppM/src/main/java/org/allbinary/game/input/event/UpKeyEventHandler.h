
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLER_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLER_H

#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UpKeyEventHandlerBase.h"

class UpKeyEventHandler: public UpKeyEventHandlerBase {
        

    private: static const instance: UpKeyEventHandler = new UpKeyEventHandler();

    private: static const instanceArray: std::vector<UpKeyEventHandlerBase> = 
                                                        [
                                                            new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase()
                                                        ];

    public static UpKeyEventHandler getInstance();

    private: const playerInputIdFactory: LocalPlayerInputIdFactory = LocalPlayerInputIdFactory.getInstance()!;

    public UpKeyEventHandlerBase getInstanceForDevice(int32_t deviceId);

    public UpKeyEventHandlerBase getInstanceForPlayer(int32_t playerInputId);

private constructor ();

    public removeAllListeners();

    public removeListenerSingleThreaded(EventListenerInterface eventListenerInterface);

    public removeListener(EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLER_H
