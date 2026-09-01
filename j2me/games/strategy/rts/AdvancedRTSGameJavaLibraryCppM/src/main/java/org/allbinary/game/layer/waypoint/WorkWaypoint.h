
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

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h>

      
#include <org/allbinary/game/layer/geological/resources/GeologicalResource.h>

      
#include <org/allbinary/game/layer/unit/UnitLayer.h>

      
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>

      
#include <org/allbinary/media/audio/WorkSound.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Waypoint.h"
#include "WaypointInfoHudPaintable.h"

class WorkWaypoint: public Waypoint {

    public: static const Integer ID = SmallIntegerSingletonFactory::getInstance().getAt(25);

public: WorkWaypoint(PathFindingLayerInterface ownerLayer);

                //@Throws(Exception.constructor)
            
    public: void visit(UnitLayer unitLayer);

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WORKWAYPOINT_H
