
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERUTIL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/AdvancedRTSLayerUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/waypoint/WorkWaypoint.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayerUtil.h"


AdvancedRTSLayerUtil::AdvancedRTSLayerUtil() {
        }
        auto AdvancedRTSLayerUtil::instance_owner() -> AdvancedRTSLayerUtil* { static std::unique_ptr<AdvancedRTSLayerUtil> value(new AdvancedRTSLayerUtil()); return value.get(); }
AdvancedRTSLayerUtil* AdvancedRTSLayerUtil::instance = AdvancedRTSLayerUtil::instance_owner();

    auto AdvancedRTSLayerUtil::getInstance() -> AdvancedRTSLayerUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AdvancedRTSLayerUtil::instance;
    
}


    auto AdvancedRTSLayerUtil::createFakeRTSLayerHashtable(BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap) -> ABHashtable<Object*, Object*>*{

    ABHashtable<Object*, Object*>* hashtable = RTSLayerUtil::getInstance()->createFakeRTSLayerHashtable(baseRaceTrackGeographicMap);;
    
hashtable->put(WorkWaypoint::ID, SmallIntegerSingletonFactory::getInstance()->getAt(50));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashtable;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERUTIL_CPP
