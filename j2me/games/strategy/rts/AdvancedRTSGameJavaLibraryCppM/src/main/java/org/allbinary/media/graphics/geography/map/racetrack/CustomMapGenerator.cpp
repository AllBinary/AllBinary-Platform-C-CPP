
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"

class CustomMapGenerator: public CustomMapGeneratorBase {

    private: std::vector<std::vector<int32_t>> customMapArray;

    private: RaceTrackGeographicMap* raceTrackGeographicMap;

    private: GeographicMapCellTypeFactory* geographicMapCellTypeFactory;

public: CustomMapGenerator(RaceTrackGeographicMap* raceTrackGeographicMap){
this->raceTrackGeographicMap= raceTrackGeographicMap;
    
this->geographicMapCellTypeFactory= this->raceTrackGeographicMap->getGeographicMapCellTypeFactory();
    

    std::vector<std::vector<int32_t>> mapArray = raceTrackGeographicMap->getRaceTrackData()->getMapArray();;
    

    int32_t size2 = mapArray[0].size();;
    
this->customMapArray= std::vector<std::vector<int32_t>>(mapArray.length, std::vector<int32_t>(size2));
    

                        if(mapArray.size() != this->customMapArray.size() || mapArray[0].size() != this->customMapArray[0].size())
                        
                                    {
                                    


                            throw new Exception("Array Incorrect");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void copyMapIntoCustomMap(){

    std::vector<std::vector<int32_t>> mapArray = this->raceTrackGeographicMap->getRaceTrackData()->getMapArray();;
    

    int32_t startIndex2 = mapArray[0].size() -1;;
    




                        for (
    int32_t index = mapArray.size() -1;index >= 0; index--)
        {




                        for (
    int32_t index2 = startIndex2;index2 >= 0; index2--)
        {
this->customMapArray[index][index2]= this->getCustomType(index2, index, mapArray[index][index2]);
    
}

}

}


    private: DropCellPositionHistory* dropCellPositionHistory = DropCellPositionHistory::getInstance();

                //@Throws(Exception.constructor)
            
    public: int32_t getCustomType(int32_t column, int32_t row, int32_t currentType){

    int32_t emptyType = this->geographicMapCellTypeFactory->getEmptyType();;
    

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = this->raceTrackGeographicMap->getGeographicMapCellPositionFactory();;
    

    CellPosition* cellPosition = geographicMapCellPositionFactory->getAt(column, row);;
    

                        if(this->dropCellPositionHistory->isCellPositionWithDrop(cellPosition))
                        
                                    {
                                    
    AllBinaryLayer* layer = this->dropCellPositionHistory->getLayerInterface(cellPosition);;
    

                        if(layer == AllBinaryLayer::NULL_ALLBINARY_LAYER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyType;
    

                                    }
                                

    AdvancedRTSGameLayer* rtsLayer = dynamic_cast<AdvancedRTSGameLayer*>(layer);;
    

                        if(!(rtsLayer->getType() == WaypointLayer::getStaticType()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyType;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return currentType;
    
}


    public: std::vector<std::vector<int32_t>> getCustomMapArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->customMapArray;
    
}


};

            

