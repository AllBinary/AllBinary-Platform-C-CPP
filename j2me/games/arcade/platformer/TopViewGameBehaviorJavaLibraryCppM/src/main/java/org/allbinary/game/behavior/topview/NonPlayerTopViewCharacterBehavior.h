
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

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/terrain/BasicTerrainInfo.h>

      
#include <org/allbinary/game/terrain/TerrainEvent.h>

      
#include <org/allbinary/game/terrain/TerrainEventCircularStaticPool.h>

      
#include <org/allbinary/game/terrain/TerrainEventHandler.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TopViewCharacterBehavior.h"

class NonPlayerTopViewCharacterBehavior: public TopViewCharacterBehavior {

    private: const MultiGeographicMapBehavior geographicMapBehavior = MultiGeographicMapBehavior();

    private: const BasicTerrainInfo CLIFF = BasicTerrainInfo(AngleFactory::getInstance().DOWN);

                //@Throws(Exception.constructor)
            
    public: void terrainEvent(AllBinaryLayer layer, Direction direction, int32_t x, int32_t y, std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, GeographicMapCellPosition geographicMapCellPosition);

    public: void terrainMove(AllBinaryLayer layer, std::vector<BasicGeographicMap> geographicMapInterfaceArray, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_NONPLAYERTOPVIEWCHARACTERBEHAVIOR_H
