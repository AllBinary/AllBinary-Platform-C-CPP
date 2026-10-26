
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATOR_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomMapGeneratorBase.h"
#include "RaceTrackGeographicMap.h"

class CustomMapGenerator: public CustomMapGeneratorBase {

    private: std::vector<std::vector<int32_t>> customMapArray;

    private: RaceTrackGeographicMap raceTrackGeographicMap;

    private: GeographicMapCellTypeFactory geographicMapCellTypeFactory;

public: CustomMapGenerator(RaceTrackGeographicMap raceTrackGeographicMap);

                //@Throws(Exception.constructor)
            
    public: void copyMapIntoCustomMap();

    private: const DropCellPositionHistory dropCellPositionHistory = DropCellPositionHistory::getInstance();

                //@Throws(Exception.constructor)
            
    public: int32_t getCustomType(int32_t column, int32_t row, int32_t currentType);

    public: std::vector<std::vector<int32_t>> getCustomMapArray();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATOR_H
