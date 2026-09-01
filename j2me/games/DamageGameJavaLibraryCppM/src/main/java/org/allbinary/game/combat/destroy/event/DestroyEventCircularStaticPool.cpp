
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyEventFactory.h"
#include "DestroyedEvent.h"

class DestroyEventCircularStaticPool
            : public Object
         {

    private: static DestroyEventCircularStaticPool instance() { return DestroyEventCircularStaticPool(); }

    public: static DestroyEventCircularStaticPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DestroyEventCircularStaticPool::instance();
    
}


    private: AllBinaryEventCircularPool EVENT_POOL = AllBinaryEventCircularPool(20);

private: DestroyEventCircularStaticPool(){
}


    public: void init(AllBinaryGameCanvas combatGameCanvas){
this->EVENT_POOL.initAllBinaryEventCircularPool(DestroyEventFactory(combatGameCanvas));
    
}


                //@Throws(Exception.constructor)
            
    public: DestroyedEvent getInstanceForLayer(AllBinaryLayer layerInterface){

    DestroyedEvent destroyedEvent = this->EVENT_POOL.getNextInstance() as DestroyedEvent;;
    
destroyedEvent.setLayerInterfaceForCircularStaticPool(layerInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return destroyedEvent;
    
}


};

            

