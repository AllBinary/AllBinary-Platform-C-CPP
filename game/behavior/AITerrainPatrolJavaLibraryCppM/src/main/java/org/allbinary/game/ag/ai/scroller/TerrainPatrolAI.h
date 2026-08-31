
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/ag/ai/scroller/PacePatrolAI.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/terrain/BasicTerrainInfo.h>

      
#include <org/allbinary/game/terrain/TerrainEvent.h>

      
#include <org/allbinary/game/terrain/TerrainEventCircularStaticPool.h>

      
#include <org/allbinary/game/terrain/TerrainEventHandler.h>

      
#include <org/allbinary/game/terrain/TerrainEventListener.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TerrainPatrolAI: public PacePatrolAI {
        

    private: const terrainEventListener: TerrainEventListener = new TerrainEventListener();

    private: const DOWN: Angle = AngleFactory.getInstance()!.DOWN;

    private: const CLIFF: BasicTerrainInfo = new BasicTerrainInfo(this.DOWN);

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

    update();

    changeDirectionIfCliffReached();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_H
