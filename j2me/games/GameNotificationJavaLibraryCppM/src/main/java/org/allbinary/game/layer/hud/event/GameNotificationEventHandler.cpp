
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/NullEventListener.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/hud/event/GameNotificationListenerInterface.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"

auto GameNotificationEventHandler::instance_owner() -> GameNotificationEventHandler* { static std::unique_ptr<GameNotificationEventHandler> value(new GameNotificationEventHandler()); return value.get(); }
GameNotificationEventHandler* GameNotificationEventHandler::instance = GameNotificationEventHandler::instance_owner();

GameNotificationEventHandler::GameNotificationEventHandler(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GameNotificationEventHandler::removeAllListeners() -> void{

    EventListenerInterface* eventListenerInterface = NullEventListener::NULL_EVENT_LISTENER;;
    

    BasicArrayList* list = this->eventListenerInterfaceList;;
    

                        if(list->size() > 0)
                        
                                    {
                                    eventListenerInterface= dynamic_cast<EventListenerInterface*>(list->objectArray[0]);
    

                                    }
                                
BasicEventHandler::removeAllListeners();
    

                        if(eventListenerInterface != NullEventListener::NULL_EVENT_LISTENER)
                        
                                    {
                                    this->addListenerInterface(eventListenerInterface);
    

                                    }
                                
}


    auto GameNotificationEventHandler::getInstance() -> GameNotificationEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameNotificationEventHandler::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto GameNotificationEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

                        if(!this->enabled)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    GameNotificationListenerInterface* gameNotificationListenerInterface = dynamic_cast<GameNotificationListenerInterface*>(eventListenerInterface);;
    
gameNotificationListenerInterface->onGameNotificationEvent(dynamic_cast<GameNotificationEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENTHANDLER_CPP
