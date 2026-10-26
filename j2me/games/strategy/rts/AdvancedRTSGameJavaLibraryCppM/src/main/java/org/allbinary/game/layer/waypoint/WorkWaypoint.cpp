
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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

public: WorkWaypoint(PathFindingLayerInterface ownerLayer) : Waypoint(ownerLayer, WorkSound::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void visit(UnitLayer unitLayer){

                        if(unitLayer.getGroupInterface()[0] != this->ownerLayer.getGroupInterface()[0])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    int32_t size = this->getConnectedWaypointList().size();;
    

                        if(size > 0)
                        
                                    {
                                    
    BasicArrayList occupyList = this->ownerLayer.getGeographicMapCellPositionArea().getOccupyingGeographicMapCellPositionList();;
    

    bool outOfResources = true;;
    

    GeologicalGeographicMapCellPosition geologicalGeographicMapCellPosition;;
    

    GeologicalResource geologicalResource;;
    




                        for (
    int32_t index = occupyList.size();--index >= 0; )
        {
geologicalGeographicMapCellPosition= occupyList.get(index);
    
geologicalResource= geologicalGeographicMapCellPosition.getGeologicalResource();
    

                        if(geologicalResource.getTotal() >= 1)
                        
                                    {
                                    outOfResources= false;
    

    int32_t maxResourceLoad = static_cast<int32_t>(unitLayer.getMaxResourceLoad());;
    
geologicalResource.remove(maxResourceLoad);
    
unitLayer.setLoad(maxResourceLoad);
    

                                    }
                                
}


    WaypointInfoHudPaintable waypointInfoHudPaintable = this->ownerLayer.getHudPaintable();;
    

                        if(this->ownerLayer == waypointInfoHudPaintable.getRtsLayer())
                        
                                    {
                                    waypointInfoHudPaintable.updateSelectionInfo();
    

                                    }
                                

                        if(!outOfResources)
                        
                                    {
                                    
    UnitWaypointBehavior unitWaypointBehavior = unitLayer.getWaypointBehavior();;
    

    RTSLayer rtsLayer;;
    

        while(this->getConnectedWaypointList().size() > 0)
        {
rtsLayer= this->getConnectedWaypointList().get(0);
    

                        if(rtsLayer.isDestroyed())
                        
                                    {
                                    this->getConnectedWaypointList().remove(rtsLayer);
    

                                    }
                                
                        else {
                            unitWaypointBehavior.insertWaypoint(0, rtsLayer);
    
break;

                    

                        }
                            
}


                                    }
                                

                                    }
                                
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 2;
    
}


};

            

