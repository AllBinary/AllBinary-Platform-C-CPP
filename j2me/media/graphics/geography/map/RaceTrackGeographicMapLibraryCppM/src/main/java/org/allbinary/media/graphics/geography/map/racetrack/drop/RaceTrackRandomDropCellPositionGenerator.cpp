
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackRandomDropCellPositionGenerator.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h"

auto RaceTrackRandomDropCellPositionGenerator::SINGLETON_owner() -> RaceTrackRandomDropCellPositionGenerator* { static std::unique_ptr<RaceTrackRandomDropCellPositionGenerator> value(new RaceTrackRandomDropCellPositionGenerator()); return value.get(); }
RaceTrackRandomDropCellPositionGenerator* RaceTrackRandomDropCellPositionGenerator::SINGLETON = RaceTrackRandomDropCellPositionGenerator::SINGLETON_owner();

    auto RaceTrackRandomDropCellPositionGenerator::getInstance() -> RaceTrackRandomDropCellPositionGenerator*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceTrackRandomDropCellPositionGenerator::SINGLETON;
    
}


RaceTrackRandomDropCellPositionGenerator::RaceTrackRandomDropCellPositionGenerator() : myRandomFactory(MyRandomFactory::getInstance()), totalCells(this->cellsPerRowOrColumn *this->cellsPerRowOrColumn), rowArray({0,1,2,0,1,2,0,1,2}), columnArray({0,0,0,1,1,1,2,2,2}){
}


                //@Throws(Exception.constructor)
            
    auto RaceTrackRandomDropCellPositionGenerator::update(AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface) -> void{
RaceTrackDropCellPositionGenerator::update(allBinaryGameLayerManager, geographicMapInterface);
    

    AllBinaryTiledLayer* tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    
this->cellWidth= tiledLayer->getCellWidth() /this->cellsPerRowOrColumn;
    
this->cellHeight= tiledLayer->getCellHeight() /this->cellsPerRowOrColumn;
    
}


                //@Throws(Exception.constructor)
            
    auto RaceTrackRandomDropCellPositionGenerator::drop(AllBinaryLayerManager* allBinaryLayerManager, int32_t index) -> void{

    GeographicMapCellPosition* geographicMapCellPosition = dynamic_cast<GeographicMapCellPosition*>(this->list->get(index));;
    

    GPoint* point = geographicMapCellPosition->getPoint();;
    

    int32_t randomCell = this->myRandomFactory->getAbsoluteNextInt(this->totalCells);;
    

    int32_t row = this->rowArray[randomCell];;
    

    int32_t column = this->columnArray[randomCell];;
    

    int32_t x = point->getX() +(row *this->cellWidth);;
    

    int32_t y = point->getY() +(column *this->cellHeight);;
    

    PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactory = DropLayerFactory::getInstance()->getRandomInstance();;
    

    AllBinaryTiledLayer* tiledLayer = this->raceTrackGeographicMap->getAllBinaryTiledLayer();;
    

    RaceTrackPickupLayer* pickupLayer = dynamic_cast<RaceTrackPickupLayer*>(PickupLayerCircularStaticPool::getInstance()->getInstanceXYZ(pickedUpLayerInterfaceFactory, x, y, tiledLayer->getZP() +3));;
    
pickupLayer->setTiledLayer(tiledLayer);
    
allBinaryLayerManager->append(pickupLayer);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_CPP
