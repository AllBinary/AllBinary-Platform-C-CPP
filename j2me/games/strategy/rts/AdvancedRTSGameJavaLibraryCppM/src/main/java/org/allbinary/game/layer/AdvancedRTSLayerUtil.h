
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERUTIL_H
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERUTIL_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/waypoint/WorkWaypoint.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSLayerUtil.h"

class AdvancedRTSLayerUtil
            : public Object
         {

    private: static AdvancedRTSLayerUtil instance() { return AdvancedRTSLayerUtil(); }

    public: static AdvancedRTSLayerUtil getInstance();

    public: ABHashtable<Object*, Object*> createFakeRTSLayerHashtable(BaseRaceTrackGeographicMap baseRaceTrackGeographicMap);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERUTIL_H
