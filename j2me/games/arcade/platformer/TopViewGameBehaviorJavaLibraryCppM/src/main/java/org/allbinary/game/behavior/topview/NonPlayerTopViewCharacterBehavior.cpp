
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_NONPLAYERTOPVIEWCHARACTERBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_NONPLAYERTOPVIEWCHARACTERBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/behavior/topview/NonPlayerTopViewCharacterBehavior.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h"


NonPlayerTopViewCharacterBehavior::NonPlayerTopViewCharacterBehavior() : geographicMapBehavior(new MultiGeographicMapBehavior()), CLIFF(new BasicTerrainInfo(AngleFactory::getInstance()->DOWN)) {
        }
        
                //@Throws(Exception.constructor)
            
    auto NonPlayerTopViewCharacterBehavior::terrainEvent(AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition) -> void{

    int32_t maxColumns = geographicMapInterfaceArray[0]->getAllBinaryTiledLayer()->getColumns();;
    

                        if(geographicMapCellPosition->getColumn() > 0 && geographicMapCellPosition->getColumn() < maxColumns)
                        
                                    {
                                    
    GeographicMapCellPosition* nextTerrainGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;;
    

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = geographicMapInterfaceArray[0]->getGeographicMapCellPositionFactory();;
    

                        if(direction == DirectionFactory::getInstance()->LEFT)
                        
                                    {
                                    nextTerrainGeographicMapCellPosition= geographicMapCellPositionFactory->getAt(geographicMapCellPosition->getColumn() -1, geographicMapCellPosition->getRow());
    

                                    }
                                
                             else 
                        if(direction == DirectionFactory::getInstance()->RIGHT)
                        
                                    {
                                    nextTerrainGeographicMapCellPosition= geographicMapCellPositionFactory->getAt(geographicMapCellPosition->getColumn() +1, geographicMapCellPosition->getRow());
    

                                    }
                                
this->geographicMapBehavior->getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, nextTerrainGeographicMapCellPosition);
    

    bool hasSolidBlock = this->hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

                        if(!hasSolidBlock)
                        
                                    {
                                    
    TerrainEvent* terrainEvent = TerrainEventCircularStaticPool::getInstance()->getNext(this->CLIFF);;
    
TerrainEventHandler::getInstance(layer)->fireEvent(terrainEvent);
    

                                    }
                                

                                    }
                                
}


    auto NonPlayerTopViewCharacterBehavior::terrainMove(AllBinaryLayer* layer, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, int32_t x, int32_t y) -> void{
layer->moveDXY(x, y);
    
}




        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_NONPLAYERTOPVIEWCHARACTERBEHAVIOR_CPP
