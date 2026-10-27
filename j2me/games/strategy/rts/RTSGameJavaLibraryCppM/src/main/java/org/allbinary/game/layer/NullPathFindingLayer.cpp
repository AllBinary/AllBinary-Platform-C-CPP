
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_NULLPATHFINDINGLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_NULLPATHFINDINGLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/NullPathFindingLayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/game/layer/RTSLayer2LogHelper.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"


NullPathFindingLayer::NullPathFindingLayer() {
        }
        auto NullPathFindingLayer::NULL_PATH_FINDING_LAYER_owner() -> NullPathFindingLayer* { static std::unique_ptr<NullPathFindingLayer> value(new NullPathFindingLayer()); return value.get(); }
NullPathFindingLayer* NullPathFindingLayer::NULL_PATH_FINDING_LAYER = NullPathFindingLayer::NULL_PATH_FINDING_LAYER_owner();

    auto NullPathFindingLayer::getName() -> std::string{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::getEndGeographicMapCellPositionList() -> BasicArrayList*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::shouldHandleStartSameAsEnd() -> bool{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getGeographicMapCellPositionArea() -> GeographicMapCellPositionAreaBase*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getHudPaintable() -> SelectionHudPaintable*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::handleCost(PathFindingLayerInterface* ownerLayer) -> void{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getParentLayer() -> PathFindingLayerInterface*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getRTSLayer2LogHelper() -> RTSLayer2LogHelper*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::setTarget(PathFindingLayerInterface* targetGameLayer) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::init(GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList) -> void{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getMoveOutOfBuildAreaPath(GeographicMapCellPosition* geographicMapCellPosition) -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::setClosestGeographicMapCellHistory(BasicArrayList* pathsList) -> void{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::teleportTo(GeographicMapCellPosition* geographicMapCellPosition) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::setLoad(int32_t resource) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::getSurroundingGeographicMapCellPositionList() -> BasicArrayList*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::isSelected() -> bool{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::shouldAddWaypointFromBuilding() -> bool{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::isShowMoreCaptionStates() -> bool{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::trackTo(std::string reason) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::trackToDXY(int32_t dx, int32_t dy) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::buildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) -> bool{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getTrackingEvent() -> TrackingEvent*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::allStop() -> void{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::isWaypointListEmptyOrOnlyTargets() -> bool{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::getCurrentGeographicMapCellPosition() -> GeographicMapCellPosition*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::getTopLeftGeographicMapCellPosition() -> GeographicMapCellPosition*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getCaptionAnimationHelper() -> CaptionAnimationHelperBase*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getWaypointBehavior() -> WaypointBehaviorBase*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getWaypointLogHelper() -> WaypointLogHelper*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getWaypoint2LogHelper() -> Waypoint2LogHelper*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getWaypointRunnableLogHelper() -> WaypointRunnableLogHelper*{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getGroupInterface() -> std::vector<Group*>{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullPathFindingLayer::isDestroyed() -> bool{



                            throw RuntimeException();
                    
}


    auto NullPathFindingLayer::getSourceId() -> int32_t{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_NULLPATHFINDINGLAYER_CPP
