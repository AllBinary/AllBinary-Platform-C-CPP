
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/scroller/TerrainPatrolAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/terrain/BasicTerrainInfo.h>

      
#include <org/allbinary/game/terrain/TerrainEvent.h>

      
#include <org/allbinary/game/terrain/TerrainEventCircularStaticPool.h>

      
#include <org/allbinary/game/terrain/TerrainEventHandler.h>

      
#include <org/allbinary/game/terrain/TerrainEventListener.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/scroller/PacePatrolAI.h"


TerrainPatrolAI::TerrainPatrolAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : PacePatrolAI(hashtable, ownerLayerInterface, gameInput), terrainEventListener(new TerrainEventListener()), DOWN(AngleFactory::getInstance()->DOWN), CLIFF(new BasicTerrainInfo(this->DOWN)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
TerrainEventHandler::getInstance(ownerLayerInterface)->addListener(this->terrainEventListener);
    
this->terrainEventListener->onTerrainEvent(TerrainEventCircularStaticPool::getInstance()->getNext(this->CLIFF));
    
}


    auto TerrainPatrolAI::update() -> void{
PacePatrolAI::update();
    
this->changeDirectionIfCliffReached();
    
}


    auto TerrainPatrolAI::changeDirectionIfCliffReached() -> void{

    BasicArrayList* list = this->terrainEventListener->getList();;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TerrainEvent* terrainEvent = dynamic_cast<TerrainEvent*>(list->removeAt(index));;
    

    BasicTerrainInfo* basicTerrainInfo = terrainEvent->getBasicTerrainInfo();;
    

    Angle* angle = basicTerrainInfo->getAngle();;
    

                        if(angle == this->DOWN)
                        
                                    {
                                    this->nextDirection();
    

                        if(!this->isFollowLimitedByTerrain)
                        
                                    {
                                    this->logUtil->putF("Following Limited", this, "onTerrainEvent");
    
this->isFollowLimitedByTerrain= true;
    

                                    }
                                

                                    }
                                
}

}




        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_CPP
