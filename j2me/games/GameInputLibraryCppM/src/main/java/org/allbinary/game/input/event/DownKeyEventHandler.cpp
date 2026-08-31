
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
        #include "DownKeyEventHandlerBase.h"

class DownKeyEventHandler: public DownKeyEventHandlerBase {
        

    private: static const instance: DownKeyEventHandler = new DownKeyEventHandler();

    private: static const instanceArray: std::vector<DownKeyEventHandlerBase> = 
                                                        [
                                                            new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase(),new DownKeyEventHandlerBase()
                                                        ];

    public static DownKeyEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownKeyEventHandler.instance;
    
}


    private: const playerInputIdFactory: LocalPlayerInputIdFactory = LocalPlayerInputIdFactory.getInstance()!;

    public DownKeyEventHandlerBase getInstanceForDevice(int32_t deviceId){

    playerInputId: int32_t = this.playerInputIdFactory!.getPlayerForDevice(deviceId)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownKeyEventHandler.instanceArray[playerInputId]!;
    
}


    public DownKeyEventHandlerBase getInstanceForPlayer(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DownKeyEventHandler.instanceArray[playerInputId]!;
    
}


private constructor (){

            super();
        }


    public removeAllListeners(){
super.removeAllListeners();
    




                        for (
    index: int32_t = DownKeyEventHandler.instanceArray!.length -1;index >= 0; index--)
        {
DownKeyEventHandler.instanceArray[index]!.removeAllListeners();
    
}

}


    public removeListenerSingleThreaded(EventListenerInterface eventListenerInterface){
super.removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    index: int32_t = DownKeyEventHandler.instanceArray!.length -1;index >= 0; index--)
        {
DownKeyEventHandler.instanceArray[index]!.removeListenerSingleThreaded(eventListenerInterface);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeListener(EventListenerInterface eventListenerInterface){
super.removeListener(eventListenerInterface);
    




                        for (
    index: int32_t = DownKeyEventHandler.instanceArray!.length -1;index >= 0; index--)
        {
DownKeyEventHandler.instanceArray[index]!.removeListener(eventListenerInterface);
    
}

}


};

            

