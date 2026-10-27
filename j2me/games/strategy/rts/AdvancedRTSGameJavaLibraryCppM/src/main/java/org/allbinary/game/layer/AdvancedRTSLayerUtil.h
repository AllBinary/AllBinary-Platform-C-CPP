
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class WorkWaypoint;
class SmallIntegerSingletonFactory;
class BaseRaceTrackGeographicMap;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RTSLayerUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvancedRTSLayerUtil
            : public virtual Object
         {

    private: static AdvancedRTSLayerUtil* instance_owner();
    private: static AdvancedRTSLayerUtil* instance;

    public: static AdvancedRTSLayerUtil* getInstance();


            
    public: AdvancedRTSLayerUtil();
        
    public: ABHashtable<Object*, Object*>* createFakeRTSLayerHashtable(BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/waypoint/WorkWaypoint.h>)
#include <org/allbinary/game/layer/waypoint/WorkWaypoint.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/layer/RTSLayerUtil.h")
#include "org/allbinary/game/layer/RTSLayerUtil.h"
#endif

        #endif
    
