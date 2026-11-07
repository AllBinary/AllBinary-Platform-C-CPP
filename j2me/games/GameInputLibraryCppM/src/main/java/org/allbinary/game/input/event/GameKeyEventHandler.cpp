
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/GameKeyEventHandler.h"
        

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


GameKeyEventHandler::GameKeyEventHandler() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), pressGameKeyEventHandler(PressGameKeyEventHandler::getInstance()), upGameKeyEventHandler(UpGameKeyEventHandler::getInstance()), downGameKeyEventHandler(DownGameKeyEventHandler::getInstance()) {
        }
        auto GameKeyEventHandler::instance_owner() -> GameKeyEventHandler* { static std::unique_ptr<GameKeyEventHandler> value(new GameKeyEventHandler()); return value.get(); }
GameKeyEventHandler* GameKeyEventHandler::instance = GameKeyEventHandler::instance_owner();

    auto GameKeyEventHandler::getInstance() -> GameKeyEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameKeyEventHandler::instance;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GameKeyEventHandler::removeAllListeners() -> void{
this->pressGameKeyEventHandler->removeAllListeners();
    
this->upGameKeyEventHandler->removeAllListeners();
    
this->downGameKeyEventHandler->removeAllListeners();
    
}


    auto GameKeyEventHandler::addListenerForPlayer(EventListenerInterface* eventListenerInterface, int32_t playerInputId) -> void{
this->logUtil->putF(JavaString::valueOf(eventListenerInterface), this, this->commonStrings->ADD_LISTENER);
    
this->pressGameKeyEventHandler->addListenerSingleThreaded(eventListenerInterface);
    
this->upGameKeyEventHandler->getInstanceForPlayer(playerInputId)->addListenerSingleThreaded(eventListenerInterface);
    
this->downGameKeyEventHandler->getInstanceForPlayer(playerInputId)->addListenerSingleThreaded(eventListenerInterface);
    
}


    auto GameKeyEventHandler::addListener(EventListenerInterface* eventListenerInterface) -> void{
this->logUtil->putF(JavaString::valueOf(eventListenerInterface), this, this->commonStrings->ADD_LISTENER);
    
this->pressGameKeyEventHandler->addListenerSingleThreaded(eventListenerInterface);
    
this->upGameKeyEventHandler->addListenerSingleThreaded(eventListenerInterface);
    
this->downGameKeyEventHandler->addListenerSingleThreaded(eventListenerInterface);
    
}


    auto GameKeyEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->logUtil->putF(JavaString::valueOf(eventListenerInterface), this, this->commonStrings->REMOVE_LISTENER);
    
this->pressGameKeyEventHandler->removeListenerSingleThreaded(eventListenerInterface);
    
this->upGameKeyEventHandler->removeListenerSingleThreaded(eventListenerInterface);
    
this->downGameKeyEventHandler->removeListenerSingleThreaded(eventListenerInterface);
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTHANDLER_CPP
