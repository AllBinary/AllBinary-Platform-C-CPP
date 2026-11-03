
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BUILDING_EVENT_LOCALPLAYERBUILDINGEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_EVENT_LOCALPLAYERBUILDINGEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h"

auto LocalPlayerBuildingEventHandler::eventHandler_owner() -> LocalPlayerBuildingEventHandler* { static std::unique_ptr<LocalPlayerBuildingEventHandler> value(new LocalPlayerBuildingEventHandler()); return value.get(); }
LocalPlayerBuildingEventHandler* LocalPlayerBuildingEventHandler::eventHandler = LocalPlayerBuildingEventHandler::eventHandler_owner();

LocalPlayerBuildingEventHandler::LocalPlayerBuildingEventHandler(){
}


    auto LocalPlayerBuildingEventHandler::getInstance() -> LocalPlayerBuildingEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LocalPlayerBuildingEventHandler::eventHandler;
    
}


                //@Throws(Exception.constructor)
            
    auto LocalPlayerBuildingEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    BuildingEventListenerInterface* buildingEventListenerInterface = (dynamic_cast<BuildingEventListenerInterface*>(eventListenerInterface));;
    
buildingEventListenerInterface->onBuildingEvent(dynamic_cast<RTSLayerEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_BUILDING_EVENT_LOCALPLAYERBUILDINGEVENTHANDLER_CPP
