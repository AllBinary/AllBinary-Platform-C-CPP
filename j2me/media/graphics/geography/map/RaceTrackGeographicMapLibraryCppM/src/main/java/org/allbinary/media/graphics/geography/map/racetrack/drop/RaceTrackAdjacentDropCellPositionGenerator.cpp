
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPCELLPOSITIONGENERATOR_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPCELLPOSITIONGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackAdjacentDropCellPositionGenerator.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackAdjacentDropLayerFactory.h"

auto RaceTrackAdjacentDropCellPositionGenerator::SINGLETON_owner() -> RaceTrackAdjacentDropCellPositionGenerator* { static std::unique_ptr<RaceTrackAdjacentDropCellPositionGenerator> value(new RaceTrackAdjacentDropCellPositionGenerator()); return value.get(); }
RaceTrackAdjacentDropCellPositionGenerator* RaceTrackAdjacentDropCellPositionGenerator::SINGLETON = RaceTrackAdjacentDropCellPositionGenerator::SINGLETON_owner();

    auto RaceTrackAdjacentDropCellPositionGenerator::getInstance() -> DropCellPositionGeneratorInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceTrackAdjacentDropCellPositionGenerator::SINGLETON;
    
}


RaceTrackAdjacentDropCellPositionGenerator::RaceTrackAdjacentDropCellPositionGenerator() : layerCoveringCellPositionsUtil(LayerCoveringCellPositionsUtil::getInstance()), groupCommonFactory(GroupCommonFactory::getInstance()), surroundingCellPositions(std::vector<GeographicMapCellPosition*>(4)), hashtable(StdUtil::getInstance()->createHashtable()), geographicMapDirectionUtil(GeographicMapDirectionUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto RaceTrackAdjacentDropCellPositionGenerator::getFirstNonRoadAdjacentCellPosition(int32_t column, int32_t row) -> GeographicMapCellPosition*{

    GeographicMapCellPosition* nonRoadGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;;
    

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = this->raceTrackGeographicMap->getGeographicMapCellPositionFactory();;
    
this->surroundingCellPositions[0]= geographicMapCellPositionFactory->getAt(column, row -1);
    
this->surroundingCellPositions[1]= geographicMapCellPositionFactory->getAt(column, row +1);
    
this->surroundingCellPositions[2]= geographicMapCellPositionFactory->getAt(column -1, row);
    
this->surroundingCellPositions[3]= geographicMapCellPositionFactory->getAt(column +1, row);
    

    BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap = dynamic_cast<BaseRaceTrackGeographicMap*>(this->raceTrackGeographicMap);;
    

    RaceTrackGeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = dynamic_cast<RaceTrackGeographicMapCellTypeFactory*>(baseRaceTrackGeographicMap->getGeographicMapCellTypeFactory());;
    

    GeographicMapCellPosition* geographicMapCellPosition;;
    

    RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType;;
    




                        for (
    int32_t index = this->surroundingCellPositions.size();--index >= 0; )
        {
geographicMapCellPosition= this->surroundingCellPositions[index];
    
raceTrackGeographicMapCellType= dynamic_cast<RaceTrackGeographicMapCellType*>(this->raceTrackGeographicMap->getCellTypeAt(geographicMapCellPosition));
    

                        if(!raceTrackGeographicMapCellTypeFactory->isPath(raceTrackGeographicMapCellType))
                        
                                    {
                                    nonRoadGeographicMapCellPosition= geographicMapCellPosition;
    
break;

                    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nonRoadGeographicMapCellPosition;
    
}


                //@Throws(Exception.constructor)
            
    auto RaceTrackAdjacentDropCellPositionGenerator::update(AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface) -> void{
this->hashtable->put(AllBinaryGameLayerManager::ID, allBinaryGameLayerManager);
    
RaceTrackDropCellPositionGenerator::update(allBinaryGameLayerManager, geographicMapInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto RaceTrackAdjacentDropCellPositionGenerator::drop(AllBinaryLayerManager* allBinaryLayerManager, int32_t index) -> void{

    GeographicMapCellPosition* geographicMapCellPosition = dynamic_cast<GeographicMapCellPosition*>(this->list->get(index));;
    

    GeographicMapCellPosition* randomGeographicMapCellPosition = this->getFirstNonRoadAdjacentCellPosition(geographicMapCellPosition->getColumn(), geographicMapCellPosition->getRow());;
    

                        if(randomGeographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    DropCellPositionHistory* dropCellPositionHistory = DropCellPositionHistory::getInstance();;
    

                        if(!dropCellPositionHistory->isCellPositionWithDrop(geographicMapCellPosition))
                        
                                    {
                                    
    Direction* direction = this->geographicMapDirectionUtil->getDirectionFromCellPositionToAdjacentCellPosition(randomGeographicMapCellPosition, geographicMapCellPosition);;
    

    Object* objectCanBeNull = JavaBoxes::toObject(this->hashtable->get(this->groupCommonFactory->ID));;
    

                        if(objectCanBeNull != 
                                    nullptr
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->hashtable->put(this->groupCommonFactory->ID, BasicGroupFactory::getInstance()->NONE_ARRAY);
    

                        }
                            
this->hashtable->put(DirectionFactory::getInstance()->NAME, direction);
    

    GPoint* point = randomGeographicMapCellPosition->getPoint();;
    

    int32_t x = point->getX();;
    

    int32_t y = point->getY();;
    

    int32_t z = point->getZ();;
    

    AllBinaryLayer* layerInterface = RaceTrackAdjacentDropLayerFactory::getInstance()->getRandomInstance()->getNextInstance(hashtable, x, y, z);;
    

    BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap = dynamic_cast<BaseRaceTrackGeographicMap*>(this->raceTrackGeographicMap);;
    

    BasicArrayList* list = this->layerCoveringCellPositionsUtil->getAll(baseRaceTrackGeographicMap, randomGeographicMapCellPosition, layerInterface, new BasicArrayListD());;
    

                        if(dropCellPositionHistory->anyCellPositionWithDrop(list))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    GeographicMapCellType* geographicMapCellType;;
    




                        for (
    int32_t index2 = list->size();--index2 >= 0; )
        {
geographicMapCellType= this->raceTrackGeographicMap->getCellTypeAt(dynamic_cast<GeographicMapCellPosition*>(list->get(index2)));
    

                        if(this->raceTrackGeographicMapCellTypeFactory->isPath(geographicMapCellType))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

dropCellPositionHistory->addAll(list, layerInterface);
    
allBinaryLayerManager->append(layerInterface);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPCELLPOSITIONGENERATOR_CPP
