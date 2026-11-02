
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GameInput;
class BasicTerrainInfo;
class TerrainEvent;
class TerrainEventCircularStaticPool;
class TerrainEventHandler;
class TerrainEventListener;
class AllBinaryLayer;
class Angle;
class AngleFactory;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/scroller/PacePatrolAI.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TerrainPatrolAI: public PacePatrolAI {

    private: TerrainEventListener* terrainEventListener;

    private: Angle* DOWN;

    private: BasicTerrainInfo* CLIFF;

public: TerrainPatrolAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

    /*protected*/ public: void update();

    private: void changeDirectionIfCliffReached();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/game/terrain/BasicTerrainInfo.h>)
#include <org/allbinary/game/terrain/BasicTerrainInfo.h>
#endif
#if __has_include(<org/allbinary/game/terrain/TerrainEvent.h>)
#include <org/allbinary/game/terrain/TerrainEvent.h>
#endif
#if __has_include(<org/allbinary/game/terrain/TerrainEventCircularStaticPool.h>)
#include <org/allbinary/game/terrain/TerrainEventCircularStaticPool.h>
#endif
#if __has_include(<org/allbinary/game/terrain/TerrainEventHandler.h>)
#include <org/allbinary/game/terrain/TerrainEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/terrain/TerrainEventListener.h>)
#include <org/allbinary/game/terrain/TerrainEventListener.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/math/Angle.h>)
#include <org/allbinary/math/Angle.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/ag/ai/scroller/PacePatrolAI.h")
#include "org/allbinary/game/ag/ai/scroller/PacePatrolAI.h"
#endif

        #endif
    
