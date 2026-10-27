
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"

class DownGameKeyEventHandler: public DownGameKeyEventHandlerBase {

    private: static DownGameKeyEventHandler* instance() { static std::unique_ptr<DownGameKeyEventHandler> value(new DownGameKeyEventHandler()); return value.get(); }

    private: static inline const std::vector<DownGameKeyEventHandlerBase*> instanceArray = 
                                                        {
                                                            new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase(),new DownGameKeyEventHandlerBase()
                                                        };

    public: static DownGameKeyEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownGameKeyEventHandler::instance();
    
}


    private: LocalPlayerInputIdFactory* playerInputIdFactory = LocalPlayerInputIdFactory::getInstance();

    public: DownGameKeyEventHandlerBase* getInstanceForDevice(int32_t deviceId){

    int32_t playerInputId = this->playerInputIdFactory->getPlayerForDevice(deviceId);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownGameKeyEventHandler::instanceArray[playerInputId];
    
}


    public: DownGameKeyEventHandlerBase* getInstanceForPlayer(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownGameKeyEventHandler::instanceArray[playerInputId];
    
}


private: DownGameKeyEventHandler(){
}


    public: void removeAllListeners(){
super.removeAllListeners();
    




                        for (
    int32_t index = DownGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownGameKeyEventHandler::instanceArray[index].removeAllListeners();
    
}

}


    public: void removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface){
super.removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    int32_t index = DownGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownGameKeyEventHandler::instanceArray[index].removeListenerSingleThreaded(eventListenerInterface);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface* eventListenerInterface){
super.removeListener(eventListenerInterface);
    




                        for (
    int32_t index = DownGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownGameKeyEventHandler::instanceArray[index].removeListener(eventListenerInterface);
    
}

}


};

            

