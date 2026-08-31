
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyedEvent.h"
#include "DestroyedEventListenerInterface.h"

class DestroyedEventHandler: public BasicEventHandler {
        

    private: static const instance: DestroyedEventHandler = new DestroyedEventHandler();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static DestroyedEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DestroyedEventHandler.instance;
    
}


    private: const list: BasicArrayList = new BasicArrayListD();

private constructor (){

            super();
        }


    public addListener(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer){

                        if(!this.list.contains(collidableDestroyableDamageableLayer))
                        
                                    {
                                    this.list.add(collidableDestroyableDamageableLayer);
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeAllListeners(){
this.list.clear();
    
super.removeAllListeners();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeListener(EventListenerInterface eventListenerInterface){
this.list.remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public fireEvent(AllBinaryEventObject eventObject){




                        for (
    index: int32_t = this.list.size()!;--index >= 0; )
        {

        try {
            
    collidableDestroyableDamageableLayer: CollidableDestroyableDamageableLayer = this.list.objectArray[index]! as CollidableDestroyableDamageableLayer;;
    
collidableDestroyableDamageableLayer!.onDestroyed(eventObject as DestroyedEvent);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    destroyedEventListenerInterface: DestroyedEventListenerInterface = eventListenerInterface as DestroyedEventListenerInterface;;
    
destroyedEventListenerInterface!.onDestroyed(eventObject as DestroyedEvent);
    
}


};

            

