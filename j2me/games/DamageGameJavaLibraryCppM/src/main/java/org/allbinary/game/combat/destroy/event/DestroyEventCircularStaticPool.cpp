
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/destroy/event/DestroyEventFactory.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"

auto DestroyEventCircularStaticPool::instance_owner() -> DestroyEventCircularStaticPool* { static std::unique_ptr<DestroyEventCircularStaticPool> value(new DestroyEventCircularStaticPool()); return value.get(); }
DestroyEventCircularStaticPool* DestroyEventCircularStaticPool::instance = DestroyEventCircularStaticPool::instance_owner();

    auto DestroyEventCircularStaticPool::getInstance() -> DestroyEventCircularStaticPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DestroyEventCircularStaticPool::instance;
    
}


DestroyEventCircularStaticPool::DestroyEventCircularStaticPool() : EVENT_POOL(new AllBinaryEventCircularPool(20)){
}


    auto DestroyEventCircularStaticPool::init(AllBinaryGameCanvas* combatGameCanvas) -> void{
this->EVENT_POOL->initAllBinaryEventCircularPool(new DestroyEventFactory(combatGameCanvas));
    
}


                //@Throws(Exception.constructor)
            
    auto DestroyEventCircularStaticPool::getInstanceForLayer(AllBinaryLayer* layerInterface) -> DestroyedEvent*{

    DestroyedEvent* destroyedEvent = dynamic_cast<DestroyedEvent*>(this->EVENT_POOL->getNextInstance());;
    
destroyedEvent->setLayerInterfaceForCircularStaticPool(layerInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return destroyedEvent;
    
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEVENTCIRCULARSTATICPOOL_CPP
