
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKDROPCELLPOSITIONGENERATOR_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKDROPCELLPOSITIONGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/BaseDropCellPositionGenerator.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/NullRaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RaceTrackDropCellPositionGenerator::RaceTrackDropCellPositionGenerator() : list(new BasicArrayListD()), raceTrackGeographicMap(NullRaceTrackGeographicMap::NULL_RACE_TRACK_GEOGRAPHIC_MAP), raceTrackGeographicMapCellTypeFactory(GeographicMapCellTypeFactory::getInstance()), basicArrayListUtil(BasicArrayListUtil::getInstance()){
this->timeDelayHelper= new TimeDelayHelper(10000);
    
}


    auto RaceTrackDropCellPositionGenerator::init() -> void{
this->list->clear();
    
}


                //@Throws(Exception.constructor)
            
    auto RaceTrackDropCellPositionGenerator::isDropAllowedAt(GeographicMapCellPosition* geographicMapCellPosition) -> bool{

    RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType = dynamic_cast<RaceTrackGeographicMapCellType*>(this->raceTrackGeographicMap->getCellTypeAt(geographicMapCellPosition));;
    

    RaceTrackGeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = dynamic_cast<RaceTrackGeographicMapCellTypeFactory*>(this->raceTrackGeographicMapCellTypeFactory);;
    

                        if(raceTrackGeographicMapCellType == raceTrackGeographicMapCellTypeFactory->HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE || raceTrackGeographicMapCellType == raceTrackGeographicMapCellTypeFactory->VERTICAL_STRAIGHT_ROAD_CELL_TYPE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto RaceTrackDropCellPositionGenerator::update(AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface) -> void{
this->init();
    

    BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap = dynamic_cast<BaseRaceTrackGeographicMap*>(geographicMapInterface);;
    
this->raceTrackGeographicMap= baseRaceTrackGeographicMap;
    
this->raceTrackGeographicMapCellTypeFactory= dynamic_cast<RaceTrackGeographicMapCellTypeFactory*>(baseRaceTrackGeographicMap->getGeographicMapCellTypeFactory());
    

    GeographicMapCellHistory* roadGeographicMapCellHistory = RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance();;
    

    BasicArrayList* trackedList = roadGeographicMapCellHistory->getTracked();;
    

    GeographicMapCellPosition* geographicMapCellPosition;;
    

    int32_t lastIndex = trackedList->size() -1;;
    

    int32_t total= 0;;
    

    int32_t ahead= 0;;
    




                        for (
    int32_t index = lastIndex;index > 0; index--)
        {
geographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(trackedList->get(index));
    
total= 0;
    
ahead= index;
    

        while(this->isDropAllowedAt(dynamic_cast<GeographicMapCellPosition*>(trackedList->get(ahead))))
        {
total++;
    

                        if(total > this->STRAIGHTAWAY)
                        
                                    {
                                    this->list->add(geographicMapCellPosition);
    
break;

                    

                                    }
                                
ahead++;
    

                        if(ahead > lastIndex)
                        
                                    {
                                    break;

                    

                                    }
                                
}

}


    int32_t size = this->list->size();;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
this->drop(allBinaryGameLayerManager, index);
    
}

}


                //@Throws(Exception.constructor)
            
    auto RaceTrackDropCellPositionGenerator::processTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{

                        if(this->timeDelayHelper->isTime(GameTickTimeDelayHelperFactory::getInstance()->startTime))
                        
                                    {
                                    
    int32_t index = this->basicArrayListUtil->getRandomIndex(this->list);;
    
this->drop(allBinaryLayerManager, index);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto RaceTrackDropCellPositionGenerator::drop(AllBinaryLayerManager* allBinaryLayerManager, int32_t index) -> void{



                            throw Exception(CommonStrings::getInstance()->NOT_IMPLEMENTED);
                    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKDROPCELLPOSITIONGENERATOR_CPP
