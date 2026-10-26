
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKINFO_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKINFO_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackFrictionProperties.h"

class RaceTrackInfo
            : public Object
         {

    private: Integer id;

    private: std::string name;

    private: RaceTrackFrictionProperties raceTrackFrictionProperties;

    private: BasicColor foregroundBasicColor;

    private: BasicColor backgroundBasicColor;

    private: int32_t qualifyTime;

    private: int32_t worstContinuePosition;

    private: int32_t totalLaps;

public: RaceTrackInfo(Integer id, std::string name, RaceTrackFrictionProperties raceTrackFrictionProperties, BasicColor foregroundBasicColor, BasicColor backgroundBasicColor, int32_t qualifyTime, int32_t worstContinuePosition, int32_t totalLaps);

    public: Integer getId();

    private: void setId(Integer id);

    public: std::string getName();

    public: void setName(std::string name);

    public: int32_t getQualifyTime();

    public: void setQualifyTime(int32_t qualifyTime);

    public: int32_t getWorstContinuePosition();

    public: void setWorstContinuePosition(int32_t worstContinuePosition);

    public: int32_t getTotalLaps();

    public: void setTotalLaps(int32_t totalLaps);

    public: BasicColor getForegroundBasicColor();

    public: void setForegroundBasicColor(BasicColor foregroundBasicColor);

    public: BasicColor getBackgroundBasicColor();

    public: void setBackgroundBasicColor(BasicColor backgroundBasicColor);

    public: RaceTrackFrictionProperties getRaceTrackFrictionProperties();

    public: void setRaceTrackFrictionProperties(RaceTrackFrictionProperties raceTrackFrictionProperties);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKINFO_H
