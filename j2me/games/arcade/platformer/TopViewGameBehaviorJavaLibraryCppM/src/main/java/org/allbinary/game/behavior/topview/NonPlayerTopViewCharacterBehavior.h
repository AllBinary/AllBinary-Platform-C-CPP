
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_NONPLAYERTOPVIEWCHARACTERBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_NONPLAYERTOPVIEWCHARACTERBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class MultiGeographicMapBehavior;
class Direction;
class DirectionFactory;
class BasicTerrainInfo;
class TerrainEvent;
class TerrainEventCircularStaticPool;
class TerrainEventHandler;
class AllBinaryLayer;
class AngleFactory;
class BasicGeographicMap;
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellPosition;
class GeographicMapCellType;
class SimpleGeographicMapCellPositionFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NonPlayerTopViewCharacterBehavior: public TopViewCharacterBehavior {


            
    public: NonPlayerTopViewCharacterBehavior();
        
    private: MultiGeographicMapBehavior* geographicMapBehavior;

    private: BasicTerrainInfo* CLIFF;

                //@Throws(Exception.constructor)
            
    public: void terrainEvent(AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition);

    public: void terrainMove(AllBinaryLayer* layer, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_NONPLAYERTOPVIEWCHARACTERBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_NONPLAYERTOPVIEWCHARACTERBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_NONPLAYERTOPVIEWCHARACTERBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h>)
#include <org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h>
#endif
#if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
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
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif
#if __has_include("org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h")
#include "org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h"
#endif

        #endif
    
