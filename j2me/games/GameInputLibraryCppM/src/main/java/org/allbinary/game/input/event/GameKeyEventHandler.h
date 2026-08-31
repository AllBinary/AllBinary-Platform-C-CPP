
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

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PressGameKeyEventHandler.h"
#include "UpGameKeyEventHandler.h"
#include "DownGameKeyEventHandler.h"

class GameKeyEventHandler
            : public Object
         {
        

    private: static const instance: GameKeyEventHandler = new GameKeyEventHandler();

    public static GameKeyEventHandler getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const pressGameKeyEventHandler: PressGameKeyEventHandler = PressGameKeyEventHandler.getInstance()!;

    private: const upGameKeyEventHandler: UpGameKeyEventHandler = UpGameKeyEventHandler.getInstance()!;

    private: const downGameKeyEventHandler: DownGameKeyEventHandler = DownGameKeyEventHandler.getInstance()!;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeAllListeners();

    public addListenerForPlayer(EventListenerInterface eventListenerInterface, int32_t playerInputId);

    public addListener(EventListenerInterface eventListenerInterface);

    public removeListener(EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_H
