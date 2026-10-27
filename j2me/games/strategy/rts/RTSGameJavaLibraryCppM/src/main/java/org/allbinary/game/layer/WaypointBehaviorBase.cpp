
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
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
        #include "org/allbinary/game/layer/PathFindingLayerInterface.h"

class WaypointBehaviorBase
            : public Object
        , public TickableInterface {

    private: BasicArrayList* ownedWaypointList;

    protected: bool waypointOverridesAttacking = true;

    private: WaypointBase* waypoint = WaypointBase::NULL_WAYPOINT_BASE;

public: WaypointBehaviorBase(){
this->ownedWaypointList= new BasicArrayListS(1);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getClass()->getName();;
    
}


    public: bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager){
}


    public: BasicArrayList* getOwnedWaypointList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ownedWaypointList;
    
}


    public: WaypointBase* getWaypoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypoint;
    
}


    public: void setWaypoint(WaypointBase* waypoint){
this->waypoint= waypoint;
    
}


    public: BasicArrayList* getSteeringVisitorList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->steeringVisitorList;
    
}


    public: std::string getMovementLogicAsString(){



                            throw new RuntimeException();
                    
}


    public: bool isWaypointListEmptyOrOnlyTargets(){



                            throw new RuntimeException();
                    
}


    public: bool isInSensorRange(CollidableDestroyableDamageableLayer* layerInterface, int32_t targetDistance){



                            throw new RuntimeException();
                    
}


    public: CollidableDestroyableDamageableLayer* getCurrentTargetLayerInterface(){



                            throw new RuntimeException();
                    
}


    public: std::string getCurrentTargetingStateString(){



                            throw new RuntimeException();
                    
}


    public: bool isTrackingWaypoint(){



                            throw new RuntimeException();
                    
}


    public: GeographicMapCellPosition* getCurrentPathGeographicMapCellPosition(){



                            throw new RuntimeException();
                    
}


    public: GeographicMapCellHistory* getCurrentGeographicMapCellHistory(){



                            throw new RuntimeException();
                    
}


    public: bool isWaypointOverridesAttacking(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointOverridesAttacking;
    
}


    public: GeographicMapCellPosition* getNextUnvisitedPathGeographicMapCellPosition(){



                            throw new RuntimeException();
                    
}


    public: bool needToMove(){



                            throw new RuntimeException();
                    
}


    public: void setWaypointPathsList(BasicArrayList* waypointPathsList){



                            throw new RuntimeException();
                    
}


    public: BasicArrayList* getWaypointPathsList(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void setTarget(PathFindingLayerInterface* layerInterface){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void setTargetWithDistance(PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void clearTarget(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void updatePathOnTargetMove(std::string reason){
}


    private: BasicArrayList* steeringVisitorList = new BasicArrayListD();

};

            

