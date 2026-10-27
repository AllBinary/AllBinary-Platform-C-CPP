
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/DownKeyEventHandler.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"

auto DownKeyEventHandler::instance_owner() -> DownKeyEventHandler* { static std::unique_ptr<DownKeyEventHandler> value(new DownKeyEventHandler()); return value.get(); }
DownKeyEventHandler* DownKeyEventHandler::instance = DownKeyEventHandler::instance_owner();
std::vector<DownKeyEventHandlerBase*> DownKeyEventHandler::instanceArray = 
                                                        {
                                                            new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase()
                                                        };

    auto DownKeyEventHandler::getInstance() -> DownKeyEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownKeyEventHandler::instance;
    
}


    auto DownKeyEventHandler::getInstanceForDevice(int32_t deviceId) -> DownKeyEventHandlerBase*{

    int32_t playerInputId = this->playerInputIdFactory->getPlayerForDevice(deviceId);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownKeyEventHandler::instanceArray[playerInputId];
    
}


    auto DownKeyEventHandler::getInstanceForPlayer(int32_t playerInputId) -> DownKeyEventHandlerBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownKeyEventHandler::instanceArray[playerInputId];
    
}


DownKeyEventHandler::DownKeyEventHandler() : playerInputIdFactory(LocalPlayerInputIdFactory::getInstance()){
}


    auto DownKeyEventHandler::removeAllListeners() -> void{
DownKeyEventHandlerBase::removeAllListeners();
    




                        for (
    int32_t index = DownKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownKeyEventHandler::instanceArray[index]->removeAllListeners();
    
}

}


    auto DownKeyEventHandler::removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{
DownKeyEventHandlerBase::removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    int32_t index = DownKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownKeyEventHandler::instanceArray[index]->removeListenerSingleThreaded(eventListenerInterface);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto DownKeyEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
DownKeyEventHandlerBase::removeListener(eventListenerInterface);
    




                        for (
    int32_t index = DownKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownKeyEventHandler::instanceArray[index]->removeListener(eventListenerInterface);
    
}

}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLER_CPP
