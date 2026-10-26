
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
        
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownKeyEventHandlerBase.h"

class DownKeyEventHandler: public DownKeyEventHandlerBase {

    private: static DownKeyEventHandler instance() { return DownKeyEventHandler(); }

    private: static const std::vector<DownKeyEventHandlerBase> instanceArray = 
                                                        {
                                                            DownKeyEventHandlerBase(),DownKeyEventHandlerBase(),DownKeyEventHandlerBase(),DownKeyEventHandlerBase(),DownKeyEventHandlerBase(),DownKeyEventHandlerBase()
                                                        };

    public: static DownKeyEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownKeyEventHandler::instance();
    
}


    private: const LocalPlayerInputIdFactory playerInputIdFactory = LocalPlayerInputIdFactory::getInstance();

    public: DownKeyEventHandlerBase getInstanceForDevice(int32_t deviceId){

    int32_t playerInputId = this->playerInputIdFactory.getPlayerForDevice(deviceId);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownKeyEventHandler::instanceArray[playerInputId];
    
}


    public: DownKeyEventHandlerBase getInstanceForPlayer(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownKeyEventHandler::instanceArray[playerInputId];
    
}


private: DownKeyEventHandler(){
}


    public: void removeAllListeners(){
super.removeAllListeners();
    




                        for (
    int32_t index = DownKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownKeyEventHandler::instanceArray[index].removeAllListeners();
    
}

}


    public: void removeListenerSingleThreaded(EventListenerInterface eventListenerInterface){
super.removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    int32_t index = DownKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownKeyEventHandler::instanceArray[index].removeListenerSingleThreaded(eventListenerInterface);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface eventListenerInterface){
super.removeListener(eventListenerInterface);
    




                        for (
    int32_t index = DownKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
DownKeyEventHandler::instanceArray[index].removeListener(eventListenerInterface);
    
}

}


};

            

