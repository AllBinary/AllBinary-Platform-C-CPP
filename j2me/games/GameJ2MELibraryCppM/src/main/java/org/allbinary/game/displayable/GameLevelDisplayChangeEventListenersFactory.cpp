
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameLevelDisplayChangeEventListenersFactory
            : public Object
         {
        

    private: static const instance: GameLevelDisplayChangeEventListenersFactory = new GameLevelDisplayChangeEventListenersFactory();

    public static GameLevelDisplayChangeEventListenersFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameLevelDisplayChangeEventListenersFactory.instance;
    
}


    private: const list: BasicArrayList = new BasicArrayListD();

    public add(DisplayChangeEventListener displayChangeEventListener){
this.list.add(displayChangeEventListener);
    
DisplayChangeEventHandler.getInstance()!.addListenerInterface(displayChangeEventListener);
    
}


    public clear(){

    displayChangeEventHandler: BasicEventHandler = DisplayChangeEventHandler.getInstance()!;;
    

    displayChangeEventListener: DisplayChangeEventListener;;
    




                        for (
    index: int32_t = this.list.size()!;--index >= 0; )
        {
displayChangeEventListener= this.list.objectArray[index]! as DisplayChangeEventListener;
    
displayChangeEventHandler!.removeListener(displayChangeEventListener);
    
}

this.list.clear();
    
}


};

            

