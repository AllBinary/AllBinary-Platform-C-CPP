
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKINFO_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackFrictionProperties.h"


RaceTrackInfo::RaceTrackInfo(int32_t id, std::string name, RaceTrackFrictionProperties* raceTrackFrictionProperties, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, int32_t qualifyTime, int32_t worstContinuePosition, int32_t totalLaps){
this->id= id;
    
this->name= name;
    
this->raceTrackFrictionProperties= raceTrackFrictionProperties;
    
this->backgroundBasicColor= backgroundBasicColor;
    
this->foregroundBasicColor= foregroundBasicColor;
    
this->qualifyTime= qualifyTime;
    
this->worstContinuePosition= worstContinuePosition;
    
this->totalLaps= totalLaps;
    
}


    auto RaceTrackInfo::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    auto RaceTrackInfo::setId(int32_t id) -> void{
this->id= id;
    
}


    auto RaceTrackInfo::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto RaceTrackInfo::setName(std::string name) -> void{
this->name= name;
    
}


    auto RaceTrackInfo::getQualifyTime() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->qualifyTime;
    
}


    auto RaceTrackInfo::setQualifyTime(int32_t qualifyTime) -> void{
this->qualifyTime= qualifyTime;
    
}


    auto RaceTrackInfo::getWorstContinuePosition() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->worstContinuePosition;
    
}


    auto RaceTrackInfo::setWorstContinuePosition(int32_t worstContinuePosition) -> void{
this->worstContinuePosition= worstContinuePosition;
    
}


    auto RaceTrackInfo::getTotalLaps() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalLaps;
    
}


    auto RaceTrackInfo::setTotalLaps(int32_t totalLaps) -> void{
this->totalLaps= totalLaps;
    
}


    auto RaceTrackInfo::getForegroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->foregroundBasicColor;
    
}


    auto RaceTrackInfo::setForegroundBasicColor(BasicColor* foregroundBasicColor) -> void{
this->foregroundBasicColor= foregroundBasicColor;
    
}


    auto RaceTrackInfo::getBackgroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->backgroundBasicColor;
    
}


    auto RaceTrackInfo::setBackgroundBasicColor(BasicColor* backgroundBasicColor) -> void{
this->backgroundBasicColor= backgroundBasicColor;
    
}


    auto RaceTrackInfo::getRaceTrackFrictionProperties() -> RaceTrackFrictionProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->raceTrackFrictionProperties;
    
}


    auto RaceTrackInfo::setRaceTrackFrictionProperties(RaceTrackFrictionProperties* raceTrackFrictionProperties) -> void{
this->raceTrackFrictionProperties= raceTrackFrictionProperties;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKINFO_CPP
