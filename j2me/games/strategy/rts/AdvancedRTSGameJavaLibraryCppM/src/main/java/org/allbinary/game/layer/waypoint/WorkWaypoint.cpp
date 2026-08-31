
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
        

    public static const ID: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(25)!;

public constructor (PathFindingLayerInterface ownerLayer){
            super(ownerLayer, WorkSound.getInstance());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public visit(UnitLayer unitLayer){

                        if(unitLayer!.getGroupInterface()[0] != this.ownerLayer!.getGroupInterface()[0])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    size: int32_t = this.getConnectedWaypointList()!.size()!;;
    

                        if(size > 0)
                        
                                    {
                                    
    occupyList: BasicArrayList = this.ownerLayer!.getGeographicMapCellPositionArea()!.getOccupyingGeographicMapCellPositionList()!;;
    

    outOfResources: bool = true;;
    

    geologicalGeographicMapCellPosition: GeologicalGeographicMapCellPosition;;
    

    geologicalResource: GeologicalResource;;
    




                        for (
    index: int32_t = occupyList!.size()!;--index >= 0; )
        {
geologicalGeographicMapCellPosition= occupyList!.get(index) as GeologicalGeographicMapCellPosition;
    
geologicalResource= geologicalGeographicMapCellPosition!.getGeologicalResource();
    

                        if(geologicalResource!.getTotal() >= 1)
                        
                                    {
                                    outOfResources= false;
    

    maxResourceLoad: int32_t = static_cast<int32_t>(unitLayer!.getMaxResourceLoad());;
    
geologicalResource!.remove(maxResourceLoad);
    
unitLayer!.setLoad(maxResourceLoad);
    

                                    }
                                
}


    waypointInfoHudPaintable: WaypointInfoHudPaintable = this.ownerLayer!.getHudPaintable() as WaypointInfoHudPaintable;;
    

                        if(this.ownerLayer == waypointInfoHudPaintable!.getRtsLayer())
                        
                                    {
                                    waypointInfoHudPaintable!.updateSelectionInfo();
    

                                    }
                                

                        if(!outOfResources)
                        
                                    {
                                    
    unitWaypointBehavior: UnitWaypointBehavior = unitLayer!.getWaypointBehavior() as UnitWaypointBehavior;;
    

    rtsLayer: RTSLayer;;
    

        while(this.getConnectedWaypointList()!.size() > 0)
        {
rtsLayer= this.getConnectedWaypointList()!.get(0) as RTSLayer;
    

                        if(rtsLayer!.isDestroyed())
                        
                                    {
                                    this.getConnectedWaypointList()!.remove(rtsLayer);
    

                                    }
                                
                        else {
                            unitWaypointBehavior!.insertWaypoint(0, rtsLayer);
    
break;

                    

                        }
                            
}


                                    }
                                

                                    }
                                
}


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 2;
    
}


};

            

