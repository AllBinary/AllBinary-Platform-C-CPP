
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/combat/destroy/DestroyableInterface.h>

      
#include <org/allbinary/game/identification/GroupInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLayerInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPositionAreaBase.h"
#include "SelectionHudPaintable.h"
#include "RTSLayer2LogHelper.h"

class PathFindingLayerInterface: public WaypointLayerInterface, public GameKeyEventSourceInterface, public GroupInterfaceCompositeInterface, public DestroyableInterface {

                //@Throws(Exception.constructor)
            
    BasicArrayList getEndGeographicMapCellPositionList()

    bool shouldHandleStartSameAsEnd()

    GeographicMapCellPositionAreaBase getGeographicMapCellPositionArea()

    SelectionHudPaintable getHudPaintable()

                //@Throws(Exception.constructor)
            
    void handleCost(PathFindingLayerInterface ownerLayer)

    PathFindingLayerInterface getParentLayer()

    RTSLayer2LogHelper getRTSLayer2LogHelper()

                //@Throws(Exception.constructor)
            
    void setTarget(PathFindingLayerInterface targetGameLayer)

};

            

