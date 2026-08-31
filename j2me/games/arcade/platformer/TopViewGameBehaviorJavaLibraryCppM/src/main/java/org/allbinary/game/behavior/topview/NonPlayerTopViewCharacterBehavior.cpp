
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
        

    private: const geographicMapBehavior: MultiGeographicMapBehavior = new MultiGeographicMapBehavior();

    private: const CLIFF: BasicTerrainInfo = new BasicTerrainInfo(AngleFactory.getInstance()!.DOWN);

                //@Throws(Exception.constructor)
            
    public terrainEvent(AllBinaryLayer layer, Direction direction, int32_t x, int32_t y, std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, GeographicMapCellPosition geographicMapCellPosition){

    maxColumns: int32_t = geographicMapInterfaceArray[0]!.getAllBinaryTiledLayer()!.getColumns()!;;
    

                        if(geographicMapCellPosition!.getColumn() > 0 && geographicMapCellPosition!.getColumn() < maxColumns)
                        
                                    {
                                    
    nextTerrainGeographicMapCellPosition: GeographicMapCellPosition = 
                null
            ;;
    

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterfaceArray[0]!.getGeographicMapCellPositionFactory()!;;
    

                        if(direction == DirectionFactory.getInstance()!.LEFT)
                        
                                    {
                                    nextTerrainGeographicMapCellPosition= geographicMapCellPositionFactory!.getAt(geographicMapCellPosition!.getColumn() -1, geographicMapCellPosition!.getRow());
    

                                    }
                                
                             else 
                        if(direction == DirectionFactory.getInstance()!.RIGHT)
                        
                                    {
                                    nextTerrainGeographicMapCellPosition= geographicMapCellPositionFactory!.getAt(geographicMapCellPosition!.getColumn() +1, geographicMapCellPosition!.getRow());
    

                                    }
                                
this.geographicMapBehavior!.getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, nextTerrainGeographicMapCellPosition);
    

    hasSolidBlock: bool = this.hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray)!;;
    

                        if(!hasSolidBlock)
                        
                                    {
                                    
    terrainEvent: TerrainEvent = TerrainEventCircularStaticPool.getInstance()!.getNext(this.CLIFF)!;;
    
TerrainEventHandler.getInstance(layer)!.fireEvent(terrainEvent);
    

                                    }
                                

                                    }
                                
}


    public terrainMove(AllBinaryLayer layer, std::vector<BasicGeographicMap> geographicMapInterfaceArray, int32_t x, int32_t y){
layer.moveDXY(x, y);
    
}


};

            

