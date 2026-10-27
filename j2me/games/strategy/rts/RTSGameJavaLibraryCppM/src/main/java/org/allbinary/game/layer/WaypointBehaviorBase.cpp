
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINTBEHAVIORBASE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTBEHAVIORBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/WaypointBehaviorBase.h"
        

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


WaypointBehaviorBase::WaypointBehaviorBase() : waypoint(WaypointBase::NULL_WAYPOINT_BASE), steeringVisitorList(new BasicArrayListD()){
this->ownedWaypointList= new BasicArrayListS(1);
    
}


    auto WaypointBehaviorBase::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getClass()->getName();;
    
}


    auto WaypointBehaviorBase::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBehaviorBase::processTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{
}


    auto WaypointBehaviorBase::getOwnedWaypointList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ownedWaypointList;
    
}


    auto WaypointBehaviorBase::getWaypoint() -> WaypointBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypoint;
    
}


    auto WaypointBehaviorBase::setWaypoint(WaypointBase* waypoint) -> void{
this->waypoint= waypoint;
    
}


    auto WaypointBehaviorBase::getSteeringVisitorList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->steeringVisitorList;
    
}


    auto WaypointBehaviorBase::getMovementLogicAsString() -> std::string{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::isWaypointListEmptyOrOnlyTargets() -> bool{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::isInSensorRange(CollidableDestroyableDamageableLayer* layerInterface, int32_t targetDistance) -> bool{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::getCurrentTargetLayerInterface() -> CollidableDestroyableDamageableLayer*{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::getCurrentTargetingStateString() -> std::string{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::isTrackingWaypoint() -> bool{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::getCurrentPathGeographicMapCellPosition() -> GeographicMapCellPosition*{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::getCurrentGeographicMapCellHistory() -> GeographicMapCellHistory*{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::isWaypointOverridesAttacking() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointOverridesAttacking;
    
}


    auto WaypointBehaviorBase::getNextUnvisitedPathGeographicMapCellPosition() -> GeographicMapCellPosition*{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::needToMove() -> bool{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::setWaypointPathsList(BasicArrayList* waypointPathsList) -> void{



                            throw RuntimeException();
                    
}


    auto WaypointBehaviorBase::getWaypointPathsList() -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBehaviorBase::setTarget(PathFindingLayerInterface* layerInterface) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBehaviorBase::setTargetWithDistance(PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBehaviorBase::clearTarget() -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBehaviorBase::updatePathOnTargetMove(std::string reason) -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINTBEHAVIORBASE_CPP
