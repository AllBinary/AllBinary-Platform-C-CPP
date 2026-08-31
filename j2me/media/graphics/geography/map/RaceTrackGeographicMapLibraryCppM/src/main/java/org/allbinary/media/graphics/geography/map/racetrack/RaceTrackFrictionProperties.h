
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKFRICTIONPROPERTIES_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKFRICTIONPROPERTIES_H

            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/physics/friction/FrictionData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RaceTrackFrictionProperties
            : public Object
         {
        

    private: const ROAD_FRICTION_NOMINATOR: int32_t;

    private: const GROUND_FRICTION_NOMINATOR: int32_t;

public constructor (int32_t roadFriction, int32_t groundFriction);

    public int32_t getRoadFrictionNominator();

    public int32_t getGroundFrictionNominator();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKFRICTIONPROPERTIES_H
