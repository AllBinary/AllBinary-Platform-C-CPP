
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_TILEDLAYERFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_TILEDLAYERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/TiledLayerFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/game/TiledLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"


TiledLayerFactory::TiledLayerFactory() {
        }
        
    auto TiledLayerFactory::getInstance(RaceTrackData* raceTrackData) -> TiledLayer*{

    std::vector<std::vector<int32_t>> mapArray = raceTrackData->getMapArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new TiledLayer(mapArray[0].size(), mapArray.size(), raceTrackData->getTileSetImage(), raceTrackData->getCellWidth(), raceTrackData->getCellHeight());
    
}


    auto TiledLayerFactory::getMiniInstance(RaceTrackData* raceTrackData) -> TiledLayer*{

    std::vector<std::vector<int32_t>> mapArray = raceTrackData->getMapArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new TiledLayer(mapArray[0].size(), mapArray.size(), raceTrackData->getMiniTileSetImage(), raceTrackData->getMiniCellWidth(), raceTrackData->getMiniCellHeight());
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_TILEDLAYERFACTORY_CPP
