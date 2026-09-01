
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
        
class RaceTrackDropCellPositionGenerator: public BaseDropCellPositionGenerator {

    protected: const BasicArrayList list = BasicArrayListD();

    private: TimeDelayHelper timeDelayHelper;

    private: const int32_t STRAIGHTAWAY = 4;

    protected: RaceTrackGeographicMapInterface raceTrackGeographicMap = NullRaceTrackGeographicMap::NULL_RACE_TRACK_GEOGRAPHIC_MAP;

    protected: GeographicMapCellTypeFactory raceTrackGeographicMapCellTypeFactory = GeographicMapCellTypeFactory::getInstance();

protected: RaceTrackDropCellPositionGenerator(){
this->timeDelayHelper= TimeDelayHelper(10000);
    
}


    private: void init(){
this->list.clear();
    
}


                //@Throws(Exception.constructor)
            
    public: bool isDropAllowedAt(GeographicMapCellPosition geographicMapCellPosition){

    RaceTrackGeographicMapCellType raceTrackGeographicMapCellType = this->raceTrackGeographicMap.getCellTypeAt(geographicMapCellPosition) as RaceTrackGeographicMapCellType;;
    

    RaceTrackGeographicMapCellTypeFactory raceTrackGeographicMapCellTypeFactory = this->raceTrackGeographicMapCellTypeFactory as RaceTrackGeographicMapCellTypeFactory;;
    

                        if(raceTrackGeographicMapCellType == raceTrackGeographicMapCellTypeFactory.HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE || raceTrackGeographicMapCellType == raceTrackGeographicMapCellTypeFactory.VERTICAL_STRAIGHT_ROAD_CELL_TYPE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface){
this->init();
    

    BaseRaceTrackGeographicMap baseRaceTrackGeographicMap = geographicMapInterface as BaseRaceTrackGeographicMap;;
    
this->raceTrackGeographicMap= baseRaceTrackGeographicMap;
    
this->raceTrackGeographicMapCellTypeFactory= baseRaceTrackGeographicMap.getGeographicMapCellTypeFactory() as RaceTrackGeographicMapCellTypeFactory;
    

    GeographicMapCellHistory roadGeographicMapCellHistory = RaceTrackRoadsGeographicMapCellHistoryFactory::getInstance();;
    

    BasicArrayList trackedList = roadGeographicMapCellHistory.getTracked();;
    

    GeographicMapCellPosition geographicMapCellPosition;;
    

    int32_t lastIndex = trackedList.size() -1;;
    

    int32_t total= 0;;
    

    int32_t ahead= 0;;
    




                        for (
    int32_t index = lastIndex;index > 0; index--)
        {
geographicMapCellPosition= trackedList.get(index) as GeographicMapCellPosition;
    
total= 0;
    
ahead= index;
    

        while(this->isDropAllowedAt(trackedList.get(ahead) as GeographicMapCellPosition))
        {
total++;
    

                        if(total > this->STRAIGHTAWAY)
                        
                                    {
                                    this->list.add(geographicMapCellPosition);
    
break;

                    

                                    }
                                
ahead++;
    

                        if(ahead > lastIndex)
                        
                                    {
                                    break;

                    

                                    }
                                
}

}


    int32_t size = this->list.size();;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
this->drop(allBinaryGameLayerManager, index);
    
}

}


    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager){

                        if(this->timeDelayHelper.isTime(GameTickTimeDelayHelperFactory::getInstance().startTime))
                        
                                    {
                                    
    int32_t index = this->basicArrayListUtil.getRandomIndex(this->list);;
    
this->drop(allBinaryLayerManager, index);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void drop(AllBinaryLayerManager allBinaryLayerManager, int32_t index){



                            throw Exception(CommonStrings::getInstance().NOT_IMPLEMENTED);
                    
}


};

            

