
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WORKWAYPOINT_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WORKWAYPOINT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class PathFindingLayerInterface;
class RTSLayer;
class GeologicalGeographicMapCellPosition;
class GeologicalResource;
class UnitLayer;
class UnitWaypointBehavior;
class WorkSound;
class BasicArrayList;
class SmallIntegerSingletonFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/Waypoint.h"
class WaypointInfoHudPaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WorkWaypoint: public Waypoint {

    public: static int32_t ID;

public: WorkWaypoint(PathFindingLayerInterface* ownerLayer);

                //@Throws(Exception.constructor)
            
    public: void visit(UnitLayer* unitLayer);

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WORKWAYPOINT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WORKWAYPOINT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WORKWAYPOINT_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h>)
#include <org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/game/layer/geological/resources/GeologicalResource.h>)
#include <org/allbinary/game/layer/geological/resources/GeologicalResource.h>
#endif
#if __has_include(<org/allbinary/game/layer/unit/UnitLayer.h>)
#include <org/allbinary/game/layer/unit/UnitLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/unit/UnitWaypointBehavior.h>)
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>
#endif
#if __has_include(<org/allbinary/media/audio/WorkSound.h>)
#include <org/allbinary/media/audio/WorkSound.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include("org/allbinary/game/layer/waypoint/Waypoint.h")
#include "org/allbinary/game/layer/waypoint/Waypoint.h"
#endif
#if __has_include("org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h")
#include "org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h"
#endif

        #endif
    
