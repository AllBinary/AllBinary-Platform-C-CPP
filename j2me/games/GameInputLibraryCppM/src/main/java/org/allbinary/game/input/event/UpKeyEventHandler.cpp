
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
        



#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UpKeyEventHandlerBase.h"

class UpKeyEventHandler: public UpKeyEventHandlerBase {
        

    private: static const instance: UpKeyEventHandler = new UpKeyEventHandler();

    private: static const instanceArray: std::vector<UpKeyEventHandlerBase> = 
                                                        [
                                                            new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase(),new UpKeyEventHandlerBase()
                                                        ];

    public static UpKeyEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpKeyEventHandler.instance;
    
}


    private: const playerInputIdFactory: LocalPlayerInputIdFactory = LocalPlayerInputIdFactory.getInstance()!;

    public UpKeyEventHandlerBase getInstanceForDevice(int32_t deviceId){

    playerInputId: int32_t = this.playerInputIdFactory!.getPlayerForDevice(deviceId)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpKeyEventHandler.instanceArray[playerInputId]!;
    
}


    public UpKeyEventHandlerBase getInstanceForPlayer(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpKeyEventHandler.instanceArray[playerInputId]!;
    
}


private constructor (){

            super();
        }


    public removeAllListeners(){
super.removeAllListeners();
    




                        for (
    index: int32_t = UpKeyEventHandler.instanceArray!.length -1;index >= 0; index--)
        {
UpKeyEventHandler.instanceArray[index]!.removeAllListeners();
    
}

}


    public removeListenerSingleThreaded(EventListenerInterface eventListenerInterface){
super.removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    index: int32_t = UpKeyEventHandler.instanceArray!.length -1;index >= 0; index--)
        {
UpKeyEventHandler.instanceArray[index]!.removeListenerSingleThreaded(eventListenerInterface);
    
}

}


    public removeListener(EventListenerInterface eventListenerInterface){
super.removeListener(eventListenerInterface);
    




                        for (
    index: int32_t = UpKeyEventHandler.instanceArray!.length -1;index >= 0; index--)
        {
UpKeyEventHandler.instanceArray[index]!.removeListener(eventListenerInterface);
    
}

}


};

            

