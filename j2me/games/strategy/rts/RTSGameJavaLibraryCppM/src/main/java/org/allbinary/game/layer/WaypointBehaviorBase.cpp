
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

    private: BasicArrayList ownedWaypointList;

    protected: bool waypointOverridesAttacking = true;

    private: WaypointBase waypoint = WaypointBase::NULL_WAYPOINT_BASE;

public: WaypointBehaviorBase(){
this->ownedWaypointList= BasicArrayListS(1);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->constructor.name.toString()!;;
    
}


    public: bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager){
}


    public: BasicArrayList getOwnedWaypointList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ownedWaypointList;
    
}


    public: WaypointBase getWaypoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypoint;
    
}


    public: void setWaypoint(WaypointBase waypoint){
this->waypoint= waypoint;
    
}


    public: BasicArrayList getSteeringVisitorList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->steeringVisitorList;
    
}


    public: std::string getMovementLogicAsString(){



                            throw RuntimeException();
                    
}


    public: bool isWaypointListEmptyOrOnlyTargets(){



                            throw RuntimeException();
                    
}


    public: bool isInSensorRange(CollidableDestroyableDamageableLayer layerInterface, int32_t targetDistance){



                            throw RuntimeException();
                    
}


    public: CollidableDestroyableDamageableLayer getCurrentTargetLayerInterface(){



                            throw RuntimeException();
                    
}


    public: std::string getCurrentTargetingStateString(){



                            throw RuntimeException();
                    
}


    public: bool isTrackingWaypoint(){



                            throw RuntimeException();
                    
}


    public: GeographicMapCellPosition getCurrentPathGeographicMapCellPosition(){



                            throw RuntimeException();
                    
}


    public: GeographicMapCellHistory getCurrentGeographicMapCellHistory(){



                            throw RuntimeException();
                    
}


    public: bool isWaypointOverridesAttacking(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointOverridesAttacking;
    
}


    public: GeographicMapCellPosition getNextUnvisitedPathGeographicMapCellPosition(){



                            throw RuntimeException();
                    
}


    public: bool needToMove(){



                            throw RuntimeException();
                    
}


    public: void setWaypointPathsList(BasicArrayList waypointPathsList){



                            throw RuntimeException();
                    
}


    public: BasicArrayList getWaypointPathsList(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void setTarget(PathFindingLayerInterface layerInterface){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void setTargetWithDistance(PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void clearTarget(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void updatePathOnTargetMove(std::string reason){
}


    private: const BasicArrayList steeringVisitorList = BasicArrayListD();

};

            

