
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackFrictionProperties.h"

class RaceTrackInfo
            : public Object
         {
        

    private: id: Integer;

    private: name: string;

    private: raceTrackFrictionProperties: RaceTrackFrictionProperties;

    private: foregroundBasicColor: BasicColor;

    private: backgroundBasicColor: BasicColor;

    private: qualifyTime: int32_t;

    private: worstContinuePosition: int32_t;

    private: totalLaps: int32_t;

public constructor (Integer id, string name, RaceTrackFrictionProperties raceTrackFrictionProperties, BasicColor foregroundBasicColor, BasicColor backgroundBasicColor, int32_t qualifyTime, int32_t worstContinuePosition, int32_t totalLaps);

    public Integer getId();

    setId(Integer id);

    public string getName();

    public setName(string name);

    public int32_t getQualifyTime();

    public setQualifyTime(int32_t qualifyTime);

    public int32_t getWorstContinuePosition();

    public setWorstContinuePosition(int32_t worstContinuePosition);

    public int32_t getTotalLaps();

    public setTotalLaps(int32_t totalLaps);

    public BasicColor getForegroundBasicColor();

    public setForegroundBasicColor(BasicColor foregroundBasicColor);

    public BasicColor getBackgroundBasicColor();

    public setBackgroundBasicColor(BasicColor backgroundBasicColor);

    public RaceTrackFrictionProperties getRaceTrackFrictionProperties();

    public setRaceTrackFrictionProperties(RaceTrackFrictionProperties raceTrackFrictionProperties);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKINFO_H
