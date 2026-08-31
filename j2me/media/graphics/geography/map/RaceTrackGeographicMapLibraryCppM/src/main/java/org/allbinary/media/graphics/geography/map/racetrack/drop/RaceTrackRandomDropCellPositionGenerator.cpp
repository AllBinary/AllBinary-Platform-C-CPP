
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/layer/drop/DropLayerFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickupLayerCircularStaticPool.h>

      
#include <org/allbinary/game/layer/pickup/RaceTrackPickupLayer.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackDropCellPositionGenerator.h"

class RaceTrackRandomDropCellPositionGenerator: public RaceTrackDropCellPositionGenerator {
        

    private: static SINGLETON: RaceTrackRandomDropCellPositionGenerator = new RaceTrackRandomDropCellPositionGenerator();

    public static RaceTrackRandomDropCellPositionGenerator getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceTrackRandomDropCellPositionGenerator.SINGLETON;
    
}


    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    private: const cellsPerRowOrColumn: int32_t = 3;

    private: const totalCells: int32_t = this.cellsPerRowOrColumn *this.cellsPerRowOrColumn;

    private: const rowArray: std::vector<int32_t> = [0,1,2,0,1,2,0,1,2];

    private: const columnArray: std::vector<int32_t> = [0,0,0,1,1,1,2,2,2];

    private: cellWidth: int32_t= 0;

    private: cellHeight: int32_t= 0;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface){
super.update(allBinaryGameLayerManager, geographicMapInterface);
    

    tiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    
this.cellWidth= tiledLayer!.getCellWidth() /this.cellsPerRowOrColumn;
    
this.cellHeight= tiledLayer!.getCellHeight() /this.cellsPerRowOrColumn;
    
}


                //@Throws(Exception.constructor)
            
    drop(AllBinaryLayerManager allBinaryLayerManager, int32_t index){

    geographicMapCellPosition: GeographicMapCellPosition = this.list.get(index) as GeographicMapCellPosition;;
    

    point: GPoint = geographicMapCellPosition!.getPoint()!;;
    

    randomCell: int32_t = this.myRandomFactory!.getAbsoluteNextInt(this.totalCells)!;;
    

    row: int32_t = this.rowArray[randomCell]!;;
    

    column: int32_t = this.columnArray[randomCell]!;;
    

    x: int32_t = point.getX() +(row *this.cellWidth);;
    

    y: int32_t = point.getY() +(column *this.cellHeight);;
    

    pickedUpLayerInterfaceFactory: PickedUpLayerInterfaceFactoryInterface = DropLayerFactory.getInstance()!.getRandomInstance()!;;
    

    tiledLayer: AllBinaryTiledLayer = this.raceTrackGeographicMap!.getAllBinaryTiledLayer()!;;
    

    pickupLayer: RaceTrackPickupLayer = PickupLayerCircularStaticPool.getInstance()!.getInstanceXYZ(pickedUpLayerInterfaceFactory, x, y, tiledLayer!.getZP() +3) as RaceTrackPickupLayer;;
    
pickupLayer!.setTiledLayer(tiledLayer);
    
allBinaryLayerManager!.append(pickupLayer);
    
}


};

            

