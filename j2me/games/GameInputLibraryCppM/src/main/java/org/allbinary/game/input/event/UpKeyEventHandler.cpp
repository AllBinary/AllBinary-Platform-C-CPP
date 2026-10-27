
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
        #include "org/allbinary/game/input/event/UpKeyEventHandlerBase.h"

class UpKeyEventHandler: public UpKeyEventHandlerBase {

    private: static UpKeyEventHandler* instance() { static std::unique_ptr<UpKeyEventHandler> value(new UpKeyEventHandler()); return value.get(); }

    private: static inline const std::vector<UpKeyEventHandlerBase*> instanceArray = 
                                                        {
                                                            new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase()
                                                        };

    public: static UpKeyEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpKeyEventHandler::instance();
    
}


    private: LocalPlayerInputIdFactory* playerInputIdFactory = LocalPlayerInputIdFactory::getInstance();

    public: UpKeyEventHandlerBase* getInstanceForDevice(int32_t deviceId){

    int32_t playerInputId = this->playerInputIdFactory->getPlayerForDevice(deviceId);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpKeyEventHandler::instanceArray[playerInputId];
    
}


    public: UpKeyEventHandlerBase* getInstanceForPlayer(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpKeyEventHandler::instanceArray[playerInputId];
    
}


private: UpKeyEventHandler(){
}


    public: void removeAllListeners(){
super.removeAllListeners();
    




                        for (
    int32_t index = UpKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpKeyEventHandler::instanceArray[index].removeAllListeners();
    
}

}


    public: void removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface){
super.removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    int32_t index = UpKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpKeyEventHandler::instanceArray[index].removeListenerSingleThreaded(eventListenerInterface);
    
}

}


    public: void removeListener(EventListenerInterface* eventListenerInterface){
super.removeListener(eventListenerInterface);
    




                        for (
    int32_t index = UpKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpKeyEventHandler::instanceArray[index].removeListener(eventListenerInterface);
    
}

}


};

            

