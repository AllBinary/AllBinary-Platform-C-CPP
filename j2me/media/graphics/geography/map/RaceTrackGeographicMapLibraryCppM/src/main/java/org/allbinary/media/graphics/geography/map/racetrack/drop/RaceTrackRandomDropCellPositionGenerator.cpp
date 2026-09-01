
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
        



            #include <vector>
        
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

    private: static RaceTrackRandomDropCellPositionGenerator SINGLETON = RaceTrackRandomDropCellPositionGenerator();

    public: static RaceTrackRandomDropCellPositionGenerator getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceTrackRandomDropCellPositionGenerator::SINGLETON;
    
}


    private: const MyRandomFactory myRandomFactory = MyRandomFactory::getInstance();

    private: const int32_t cellsPerRowOrColumn = 3;

    private: const int32_t totalCells = this->cellsPerRowOrColumn *this->cellsPerRowOrColumn;

    private: const std::vector<int32_t> rowArray = {0,1,2,0,1,2,0,1,2};

    private: const std::vector<int32_t> columnArray = {0,0,0,1,1,1,2,2,2};

    private: int32_t cellWidth= 0;

    private: int32_t cellHeight= 0;

private: RaceTrackRandomDropCellPositionGenerator(){
}


                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface){
super.update(allBinaryGameLayerManager, geographicMapInterface);
    

    AllBinaryTiledLayer tiledLayer = geographicMapInterface.getAllBinaryTiledLayer();;
    
this->cellWidth= tiledLayer.getCellWidth() /this->cellsPerRowOrColumn;
    
this->cellHeight= tiledLayer.getCellHeight() /this->cellsPerRowOrColumn;
    
}


                //@Throws(Exception.constructor)
            
    protected: void drop(AllBinaryLayerManager allBinaryLayerManager, int32_t index){

    GeographicMapCellPosition geographicMapCellPosition = this->list.get(index) as GeographicMapCellPosition;;
    

    GPoint point = geographicMapCellPosition.getPoint();;
    

    int32_t randomCell = this->myRandomFactory.getAbsoluteNextInt(this->totalCells);;
    

    int32_t row = this->rowArray[randomCell];;
    

    int32_t column = this->columnArray[randomCell];;
    

    int32_t x = point.getX() +(row *this->cellWidth);;
    

    int32_t y = point.getY() +(column *this->cellHeight);;
    

    PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactory = DropLayerFactory::getInstance().getRandomInstance();;
    

    AllBinaryTiledLayer tiledLayer = this->raceTrackGeographicMap.getAllBinaryTiledLayer();;
    

    RaceTrackPickupLayer pickupLayer = PickupLayerCircularStaticPool::getInstance().getInstanceXYZ(pickedUpLayerInterfaceFactory, x, y, tiledLayer.getZP() +3) as RaceTrackPickupLayer;;
    
pickupLayer.setTiledLayer(tiledLayer);
    
allBinaryLayerManager.append(pickupLayer);
    
}


};

            

