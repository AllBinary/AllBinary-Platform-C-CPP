
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/Waypoint2SelectedLogHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h"


Waypoint2SelectedLogHelper::Waypoint2SelectedLogHelper() : logUtil(LogUtil::getInstance()), commonSeps(CommonSeps::getInstance()), positionStrings(PositionStrings::getInstance()), stringUtil(StringUtil::getInstance()) {
        }
        auto Waypoint2SelectedLogHelper::instanceC_owner() -> Waypoint2SelectedLogHelper* { static std::unique_ptr<Waypoint2SelectedLogHelper> value(new Waypoint2SelectedLogHelper()); return value.get(); }
Waypoint2SelectedLogHelper* Waypoint2SelectedLogHelper::instanceC = Waypoint2SelectedLogHelper::instanceC_owner();

    auto Waypoint2SelectedLogHelper::getInstance() -> Waypoint2LogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Waypoint2SelectedLogHelper::instanceC;
    
}


    auto Waypoint2SelectedLogHelper::initRange(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->CLOSE_RANGE);
    
stringBuffer->appendint(closeRange);
    
stringBuffer->append(this->SENSOR_RANGE);
    
stringBuffer->appendint(sensorRange);
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: initRange");
    
}


    auto Waypoint2SelectedLogHelper::processPossibleTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed) -> void{

                        if(waypointBehaviorBase->isWaypointListEmptyOrOnlyTargets() && waypointBehaviorBase->isInSensorRange(dynamic_cast<CollidableDestroyableDamageableLayer*>(layerInterface), anotherTargetDistance))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->ONLY_TARGETS);
    
stringBuffer->appendboolean(waypointBehaviorBase->isWaypointListEmptyOrOnlyTargets());
    
stringBuffer->append(this->SHORTER_THAN_CURRENT_TARGET_DISTANCE);
    
stringBuffer->appendboolean(isShorterThanCurrentTargetDistance);
    
stringBuffer->append(this->CURRENT_TARGET_DESTROYED);
    
stringBuffer->appendboolean(isCurrentTargetDestroyed);
    
stringBuffer->append(this->CURRENT_TARGET_NOT_AVAILABLE);
    
stringBuffer->appendboolean((waypointBehaviorBase->getCurrentTargetLayerInterface() == 
                                    nullptr
                                ));
    
this->logUtil->putF(stringBuffer->toString(), this, this->PROCESS_POSSIBLE_TARGET);
    

                                    }
                                
}


    auto Waypoint2SelectedLogHelper::processSetTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(waypointBehaviorBase->getCurrentTargetingStateString());
    
stringBuffer->append(this->ENEMY_POSSIBLE_TARGET);
    
stringBuffer->append(layerInterface->getName());
    
stringBuffer->append(" anotherTargetDistance: ");
    
stringBuffer->appendint(anotherTargetDistance);
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: processPossibleTarget2");
    
}


    auto Waypoint2SelectedLogHelper::processPossibleTargetCloser(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(waypointBehaviorBase->getCurrentTargetingStateString());
    
stringBuffer->append(this->ENEMY_POSSIBLE_TARGET);
    
stringBuffer->append(layerInterface->getName());
    
stringBuffer->append(" anotherTargetDistance: ");
    
stringBuffer->appendint(anotherTargetDistance);
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: processPossibleTarget3");
    
}


    auto Waypoint2SelectedLogHelper::setTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(waypointBehaviorBase->getName());
    
stringBuffer->append(" targeting: ");
    
stringBuffer->append(layerInterface->getName());
    
stringBuffer->append(" at: ");
    
stringBuffer->appendint(anotherTargetDistance);
    
stringBuffer->append(" instead of: ");
    
stringBuffer->append(waypointBehaviorBase->getCurrentTargetingStateString());
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: setTarget");
    
}


    auto Waypoint2SelectedLogHelper::setTargetPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
this->logUtil->putF("Target Destroyed", this, "selected: setTargetPath");
    
}


    auto Waypoint2SelectedLogHelper::setTargetPathIgnoreNewPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Set Path To Target: ");
    
stringBuffer->append(waypointBehaviorBase->getCurrentTargetLayerInterface()->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->stringUtil->toString(waypointBehaviorBase->getCurrentTargetLayerInterface()));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: setTargetPath");
    
}


    auto Waypoint2SelectedLogHelper::processWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* targetLayer, int32_t size) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Size: ");
    
stringBuffer->appendint(size);
    
stringBuffer->append(" Waypoint: ");
    
stringBuffer->append(targetLayer->getName());
    
stringBuffer->append(" Target: ");
    
stringBuffer->append(this->stringUtil->toString(waypointBehaviorBase->getCurrentTargetLayerInterface()));
    
stringBuffer->append(" isTrackingWaypoint: ");
    
stringBuffer->appendboolean(waypointBehaviorBase->isTrackingWaypoint());
    
stringBuffer->append(" WaypointOverridesAttacking: ");
    
stringBuffer->appendboolean(waypointBehaviorBase->isWaypointOverridesAttacking());
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: processWaypoint");
    
}


    auto Waypoint2SelectedLogHelper::processWaypointTracked(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" currentPathGeographicMapCellPosition: ");
    
stringBuffer->append(this->stringUtil->toString(waypointBehaviorBase->getCurrentPathGeographicMapCellPosition()));
    
stringBuffer->append(" nextUnvisitedPathGeographicMapCellPosition: ");
    
stringBuffer->append(this->stringUtil->toString(waypointBehaviorBase->getNextUnvisitedPathGeographicMapCellPosition()));
    
stringBuffer->append(" Tracked: ");
    
stringBuffer->append(this->stringUtil->toString(waypointBehaviorBase->getCurrentGeographicMapCellHistory()->getTracked()));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: processWaypoint");
    
}


    auto Waypoint2SelectedLogHelper::processWaypointTrackedVisit(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* geographicMapCellPosition) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Visited: ");
    
stringBuffer->append(this->stringUtil->toString(geographicMapCellPosition));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: processWaypoint");
    
}


    auto Waypoint2SelectedLogHelper::processWaypointTrackedWithoutProgress(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, std::string reason) -> void{
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(reason)->toString(), this, "turnTo");
    
}


    auto Waypoint2SelectedLogHelper::wander(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
this->logUtil->putF(associatedAdvancedRTSGameLayer->getName(), this, "wander");
    
}


    auto Waypoint2SelectedLogHelper::targetDestroyed(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" Target Destroyed")->toString(), this, "selected: processTargeting");
    
}


    auto Waypoint2SelectedLogHelper::processTargeting(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->positionStrings->DX_LABEL);
    
stringBuffer->appendint(dx);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->positionStrings->DY_LABEL);
    
stringBuffer->appendint(dy);
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: processTargeting");
    
}


    auto Waypoint2SelectedLogHelper::processTargetingNonWayPoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Targeting Non Waypoint ");
    
stringBuffer->append(this->positionStrings->DX_LABEL);
    
stringBuffer->appendint(dx);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->positionStrings->DY_LABEL);
    
stringBuffer->appendint(dy);
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: processTargeting");
    
}


    auto Waypoint2SelectedLogHelper::removeWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* waypointLayer, std::string reason) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(unitWaypointBehavior2->getName());
    
stringBuffer->append(" remove: ");
    
stringBuffer->append(waypointLayer->getName());
    
stringBuffer->append(" because: ");
    
stringBuffer->append(reason);
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: removeWaypoint");
    
}


    auto Waypoint2SelectedLogHelper::removeWaypointList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, BasicArrayList* list) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(unitWaypointBehavior2->getName());
    
stringBuffer->append(" Waypoints: ");
    
stringBuffer->append(this->stringUtil->toString(list));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: removeWaypoint");
    
}


    auto Waypoint2SelectedLogHelper::removeWaypointClear(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" Clearing removed waypoint")->toString(), this, "selected: removeWaypoint");
    
}


    auto Waypoint2SelectedLogHelper::clearTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" Cleared Target")->toString(), this, "selected: clearTarget");
    
}


    auto Waypoint2SelectedLogHelper::addWaypointFromUser(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Adding Waypoint to Selected: ");
    
stringBuffer->append(advancedRTSGameLayer->getName());
    

                        if(advancedRTSGameLayer->getParentLayer() != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(" With Parent: ");
    
stringBuffer->append(advancedRTSGameLayer->getParentLayer()->getName());
    

                                    }
                                
this->logUtil->putF(stringBuffer->toString(), this, "selected: onWaypointEvent");
    
}


    auto Waypoint2SelectedLogHelper::targetMovedSoRetarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" - target moved so retargeting")->toString(), this, "turnTo");
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT2SELECTEDLOGHELPER_CPP
