
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"

auto DownGameKeyEventHandler::instance_owner() -> DownGameKeyEventHandler* { static std::unique_ptr<DownGameKeyEventHandler> value(new DownGameKeyEventHandler()); return value.get(); }
DownGameKeyEventHandler* DownGameKeyEventHandler::instance = DownGameKeyEventHandler::instance_owner();
std::vector<DownGameKeyEventHandlerBase*> DownGameKeyEventHandler::instanceArray = 
                                                        {
                                                            new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase()
                                                        };

    auto DownGameKeyEventHandler::getInstance() -> DownGameKeyEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownGameKeyEventHandler::instance;
    
}


    auto DownGameKeyEventHandler::getInstanceForDevice(int32_t deviceId) -> DownGameKeyEventHandlerBase*{

    int32_t playerInputId = this->playerInputIdFactory->getPlayerForDevice(deviceId);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownGameKeyEventHandler::instanceArray[playerInputId];
    
}


    auto DownGameKeyEventHandler::getInstanceForPlayer(int32_t playerInputId) -> DownGameKeyEventHandlerBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownGameKeyEventHandler::instanceArray[playerInputId];
    
}


DownGameKeyEventHandler::DownGameKeyEventHandler() : playerInputIdFactory(LocalPlayerInputIdFactory::getInstance()){
}


    auto DownGameKeyEventHandler::removeAllListeners() -> void{
DownGameKeyEventHandlerBase::removeAllListeners();
    




                        for (
    int32_t index = DownGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownGameKeyEventHandler::instanceArray[index]->removeAllListeners();
    
}

}


    auto DownGameKeyEventHandler::removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{
DownGameKeyEventHandlerBase::removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    int32_t index = DownGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownGameKeyEventHandler::instanceArray[index]->removeListenerSingleThreaded(eventListenerInterface);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto DownGameKeyEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
DownGameKeyEventHandlerBase::removeListener(eventListenerInterface);
    




                        for (
    int32_t index = DownGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownGameKeyEventHandler::instanceArray[index]->removeListener(eventListenerInterface);
    
}

}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLER_CPP
