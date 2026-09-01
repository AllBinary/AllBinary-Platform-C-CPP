
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UpGameKeyEventHandlerBase.h"

class UpGameKeyEventHandler: public UpGameKeyEventHandlerBase {

    private: static UpGameKeyEventHandler instance() { return UpGameKeyEventHandler(); }

    private: static const std::vector<UpGameKeyEventHandlerBase> instanceArray = 
                                                        {
                                                            UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase(),UpGameKeyEventHandlerBase()
                                                        };

    public: static UpGameKeyEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpGameKeyEventHandler::instance();
    
}


    private: const LocalPlayerInputIdFactory playerInputIdFactory = LocalPlayerInputIdFactory::getInstance();

    public: UpGameKeyEventHandlerBase getInstanceForDevice(int32_t deviceId){

    int32_t playerInputId = this->playerInputIdFactory.getPlayerForDevice(deviceId);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpGameKeyEventHandler::instanceArray[playerInputId]!;
    
}


    public: UpGameKeyEventHandlerBase getInstanceForPlayer(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpGameKeyEventHandler::instanceArray[playerInputId]!;
    
}


private: UpGameKeyEventHandler(){
}


    public: void removeAllListeners(){
super.removeAllListeners();
    




                        for (
    int32_t index = UpGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpGameKeyEventHandler::instanceArray[index]!.removeAllListeners();
    
}

}


    public: void removeListenerSingleThreaded(EventListenerInterface eventListenerInterface){
super.removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    int32_t index = UpGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpGameKeyEventHandler::instanceArray[index]!.removeListenerSingleThreaded(eventListenerInterface);
    
}

}


    public: void removeListener(EventListenerInterface eventListenerInterface){
super.removeListener(eventListenerInterface);
    




                        for (
    int32_t index = UpGameKeyEventHandler::instanceArray.size() -1;index >= 0; index--)
        {
UpGameKeyEventHandler::instanceArray[index]!.removeListener(eventListenerInterface);
    
}

}


};

            

