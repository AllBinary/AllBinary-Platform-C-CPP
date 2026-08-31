
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/LocalPlayerInputIdFactory.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UpGameKeyEventHandlerBase.h"

class UpGameKeyEventHandler: public UpGameKeyEventHandlerBase {
        

    private: static const instance: UpGameKeyEventHandler = new UpGameKeyEventHandler();

    private: static const instanceArray: std::vector<UpGameKeyEventHandlerBase> = 
                                                        [
                                                            new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase(),new UpGameKeyEventHandlerBase()
                                                        ];

    public static UpGameKeyEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpGameKeyEventHandler.instance;
    
}


    private: const playerInputIdFactory: LocalPlayerInputIdFactory = LocalPlayerInputIdFactory.getInstance()!;

    public UpGameKeyEventHandlerBase getInstanceForDevice(int32_t deviceId){

    playerInputId: int32_t = this.playerInputIdFactory!.getPlayerForDevice(deviceId)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpGameKeyEventHandler.instanceArray[playerInputId]!;
    
}


    public UpGameKeyEventHandlerBase getInstanceForPlayer(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UpGameKeyEventHandler.instanceArray[playerInputId]!;
    
}


private constructor (){

            super();
        }


    public removeAllListeners(){
super.removeAllListeners();
    




                        for (
    index: int32_t = UpGameKeyEventHandler.instanceArray!.length -1;index >= 0; index--)
        {
UpGameKeyEventHandler.instanceArray[index]!.removeAllListeners();
    
}

}


    public removeListenerSingleThreaded(EventListenerInterface eventListenerInterface){
super.removeListenerSingleThreaded(eventListenerInterface);
    




                        for (
    index: int32_t = UpGameKeyEventHandler.instanceArray!.length -1;index >= 0; index--)
        {
UpGameKeyEventHandler.instanceArray[index]!.removeListenerSingleThreaded(eventListenerInterface);
    
}

}


    public removeListener(EventListenerInterface eventListenerInterface){
super.removeListener(eventListenerInterface);
    




                        for (
    index: int32_t = UpGameKeyEventHandler.instanceArray!.length -1;index >= 0; index--)
        {
UpGameKeyEventHandler.instanceArray[index]!.removeListener(eventListenerInterface);
    
}

}


};

            

