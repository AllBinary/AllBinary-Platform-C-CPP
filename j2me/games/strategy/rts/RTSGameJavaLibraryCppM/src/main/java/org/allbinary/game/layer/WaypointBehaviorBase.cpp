
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingLayerInterface.h"

class WaypointBehaviorBase
            : public Object
        : public TickableInterface {
        

    private: const ownedWaypointList: BasicArrayList;

    waypointOverridesAttacking: bool = true;

    private: waypoint: WaypointBase = WaypointBase.NULL_WAYPOINT_BASE;

public constructor (){

            super();
        this.ownedWaypointList= new BasicArrayListS(1);
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.constructor.name.toString()!;;
    
}


    public bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public processTick(AllBinaryLayerManager allBinaryLayerManager){
}


    public BasicArrayList getOwnedWaypointList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ownedWaypointList;
    
}


    public WaypointBase getWaypoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.waypoint;
    
}


    public setWaypoint(WaypointBase waypoint){
this.waypoint= waypoint;
    
}


    public BasicArrayList getSteeringVisitorList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.steeringVisitorList;
    
}


    public string getMovementLogicAsString(){



                            throw new RuntimeException();
                    
}


    public bool isWaypointListEmptyOrOnlyTargets(){



                            throw new RuntimeException();
                    
}


    public bool isInSensorRange(CollidableDestroyableDamageableLayer layerInterface, int32_t targetDistance){



                            throw new RuntimeException();
                    
}


    public CollidableDestroyableDamageableLayer getCurrentTargetLayerInterface(){



                            throw new RuntimeException();
                    
}


    public string getCurrentTargetingStateString(){



                            throw new RuntimeException();
                    
}


    public bool isTrackingWaypoint(){



                            throw new RuntimeException();
                    
}


    public GeographicMapCellPosition getCurrentPathGeographicMapCellPosition(){



                            throw new RuntimeException();
                    
}


    public GeographicMapCellHistory getCurrentGeographicMapCellHistory(){



                            throw new RuntimeException();
                    
}


    public bool isWaypointOverridesAttacking(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.waypointOverridesAttacking;
    
}


    public GeographicMapCellPosition getNextUnvisitedPathGeographicMapCellPosition(){



                            throw new RuntimeException();
                    
}


    public bool needToMove(){



                            throw new RuntimeException();
                    
}


    public setWaypointPathsList(BasicArrayList waypointPathsList){



                            throw new RuntimeException();
                    
}


    public BasicArrayList getWaypointPathsList(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public setTarget(PathFindingLayerInterface layerInterface){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public setTargetWithDistance(PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public clearTarget(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public updatePathOnTargetMove(string reason){
}


    private: const steeringVisitorList: BasicArrayList = new BasicArrayListD();

};

            

