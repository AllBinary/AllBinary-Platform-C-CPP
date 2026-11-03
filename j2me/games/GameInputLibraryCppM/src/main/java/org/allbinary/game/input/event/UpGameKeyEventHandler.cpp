
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"

auto UpGameKeyEventHandler::instance_owner() -> UpGameKeyEventHandler* { static std::unique_ptr<UpGameKeyEventHandler> value(new UpGameKeyEventHandler()); return value.get(); }
UpGameKeyEventHandler* UpGameKeyEventHandler::instance = UpGameKeyEventHandler::instance_owner();
std::vector<UpGameKeyEventHandlerBase*> UpGameKeyEventHandler::instanceArray = 
                                                        {
                                                            new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase()
                                                        };

    auto UpGameKeyEventHandler::getInstance() -> UpGameKeyEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UpGameKeyEventHandler::instance;
    
}


    auto UpGameKeyEventHandler::getInstanceForDevice(int32_t deviceId) -> UpGameKeyEventHandlerBase*{

    int32_t playerInputId = this->playerInputIdFactory->getPlayerForDevice(deviceId);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UpGameKeyEventHandler::instanceArray[playerInputId];
    
}


    auto UpGameKeyEventHandler::getInstanceForPlayer(int32_t playerInputId) -> UpGameKeyEventHandlerBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UpGameKeyEventHandler::instanceArray[playerInputId];
    
}


UpGameKeyEventHandler::UpGameKeyEventHandler() : playerInputIdFactory(LocalPlayerInputIdFactory::getInstance()){
}


    auto UpGameKeyEventHandler::removeAllListeners() -> void{
UpGameKeyEventHandlerBase::removeAllListeners();
    




                        for (
    int32_t index = UpGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpGameKeyEventHandler::instanceArray[index]->removeAllListeners();
    
}

}


    auto UpGameKeyEventHandler::removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{
UpGameKeyEventHandlerBase::removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    int32_t index = UpGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpGameKeyEventHandler::instanceArray[index]->removeListenerSingleThreaded(eventListenerInterface);
    
}

}


    auto UpGameKeyEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
UpGameKeyEventHandlerBase::removeListener(eventListenerInterface);
    




                        for (
    int32_t index = UpGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpGameKeyEventHandler::instanceArray[index]->removeListener(eventListenerInterface);
    
}

}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLER_CPP
