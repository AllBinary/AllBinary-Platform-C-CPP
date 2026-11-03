
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/UpKeyEventHandler.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/UpKeyEventHandlerBase.h"

auto UpKeyEventHandler::instance_owner() -> UpKeyEventHandler* { static std::unique_ptr<UpKeyEventHandler> value(new UpKeyEventHandler()); return value.get(); }
UpKeyEventHandler* UpKeyEventHandler::instance = UpKeyEventHandler::instance_owner();
std::vector<UpKeyEventHandlerBase*> UpKeyEventHandler::instanceArray = 
                                                        {
                                                            new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase()
                                                        };

    auto UpKeyEventHandler::getInstance() -> UpKeyEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UpKeyEventHandler::instance;
    
}


    auto UpKeyEventHandler::getInstanceForDevice(int32_t deviceId) -> UpKeyEventHandlerBase*{

    int32_t playerInputId = this->playerInputIdFactory->getPlayerForDevice(deviceId);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UpKeyEventHandler::instanceArray[playerInputId];
    
}


    auto UpKeyEventHandler::getInstanceForPlayer(int32_t playerInputId) -> UpKeyEventHandlerBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UpKeyEventHandler::instanceArray[playerInputId];
    
}


UpKeyEventHandler::UpKeyEventHandler() : playerInputIdFactory(LocalPlayerInputIdFactory::getInstance()){
}


    auto UpKeyEventHandler::removeAllListeners() -> void{
UpKeyEventHandlerBase::removeAllListeners();
    




                        for (
    int32_t index = UpKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpKeyEventHandler::instanceArray[index]->removeAllListeners();
    
}

}


    auto UpKeyEventHandler::removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{
UpKeyEventHandlerBase::removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    int32_t index = UpKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpKeyEventHandler::instanceArray[index]->removeListenerSingleThreaded(eventListenerInterface);
    
}

}


    auto UpKeyEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
UpKeyEventHandlerBase::removeListener(eventListenerInterface);
    




                        for (
    int32_t index = UpKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpKeyEventHandler::instanceArray[index]->removeListener(eventListenerInterface);
    
}

}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLER_CPP
