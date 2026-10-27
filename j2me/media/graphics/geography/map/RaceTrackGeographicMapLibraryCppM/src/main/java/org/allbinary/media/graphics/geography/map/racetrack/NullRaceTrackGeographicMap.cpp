
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NULLRACETRACKGEOGRAPHICMAP_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NULLRACETRACKGEOGRAPHICMAP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/NullRaceTrackGeographicMap.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"


NullRaceTrackGeographicMap::NullRaceTrackGeographicMap() {
        }
        auto NullRaceTrackGeographicMap::NULL_RACE_TRACK_GEOGRAPHIC_MAP_owner() -> NullRaceTrackGeographicMap* { static std::unique_ptr<NullRaceTrackGeographicMap> value(new NullRaceTrackGeographicMap()); return value.get(); }
NullRaceTrackGeographicMap* NullRaceTrackGeographicMap::NULL_RACE_TRACK_GEOGRAPHIC_MAP = NullRaceTrackGeographicMap::NULL_RACE_TRACK_GEOGRAPHIC_MAP_owner();

    auto NullRaceTrackGeographicMap::getId() -> int32_t{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::getName() -> std::string{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::reset() -> void{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::getAllBinaryTiledLayer() -> AllBinaryTiledLayer*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullRaceTrackGeographicMap::getCellPositionsAt(Layer* layer, std::vector<std::vector<GeographicMapCellPosition*>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition*>> cellPositionArray) -> bool{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullRaceTrackGeographicMap::getCellPositionAtXY(int32_t x, int32_t y) -> GeographicMapCellPosition*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullRaceTrackGeographicMap::getCellPositionAtXYNoThrow(int32_t x, int32_t y) -> GeographicMapCellPosition*{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::getCellTypeFromMapCellTypeInt(int32_t cellTypeId) -> int32_t{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullRaceTrackGeographicMap::getCellTypeAtXY(int32_t x, int32_t y) -> GeographicMapCellType*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullRaceTrackGeographicMap::getCellTypeAt(GeographicMapCellPosition* geographicMapCellPosition) -> GeographicMapCellType*{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::getGeographicMapCellPositionFactory() -> BasicGeographicMapCellPositionFactory*{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::getGeographicMapCellPositionFactoryInterface() -> GeographicMapCellPositionFactoryInterface*{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::getForegroundBasicColor() -> BasicColor*{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::getBackgroundBasicColor() -> BasicColor*{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::getRaceTrackInfo() -> RaceTrackInfo*{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::setRaceTrackInfo(RaceTrackInfo* aRaceTrackInfo) -> void{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::getRaceTrackData() -> RaceTrackData*{



                            throw RuntimeException();
                    
}


    auto NullRaceTrackGeographicMap::setRaceTrackData(RaceTrackData* raceTrackData) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NULLRACETRACKGEOGRAPHICMAP_CPP
