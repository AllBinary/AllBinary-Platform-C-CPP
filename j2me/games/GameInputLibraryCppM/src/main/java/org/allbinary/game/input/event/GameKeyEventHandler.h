
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/PressGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"

class GameKeyEventHandler
            : public Object
         {

    private: static GameKeyEventHandler* instance() { static std::unique_ptr<GameKeyEventHandler> value(new GameKeyEventHandler()); return value.get(); }

    public: static GameKeyEventHandler* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: PressGameKeyEventHandler* pressGameKeyEventHandler = PressGameKeyEventHandler::getInstance();

    private: UpGameKeyEventHandler* upGameKeyEventHandler = UpGameKeyEventHandler::getInstance();

    private: DownGameKeyEventHandler* downGameKeyEventHandler = DownGameKeyEventHandler::getInstance();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllListeners();

    public: void addListenerForPlayer(EventListenerInterface* eventListenerInterface, int32_t playerInputId);

    public: void addListener(EventListenerInterface* eventListenerInterface);

    public: void removeListener(EventListenerInterface* eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_H
