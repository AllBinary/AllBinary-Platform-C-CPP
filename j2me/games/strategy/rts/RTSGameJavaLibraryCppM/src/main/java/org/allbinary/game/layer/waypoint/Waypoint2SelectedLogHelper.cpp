
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

class Waypoint2SelectedLogHelper: public Waypoint2LogHelper {

    private: static Waypoint2SelectedLogHelper* instanceC() { static std::unique_ptr<Waypoint2SelectedLogHelper> value(new Waypoint2SelectedLogHelper()); return value.get(); }

    public: static Waypoint2LogHelper* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Waypoint2SelectedLogHelper::instanceC();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: PositionStrings* positionStrings = PositionStrings::getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

    private: const std::string ENEMY_POSSIBLE_TARGET = " Enemy Possible Target: ";

    private: const std::string CLOSE_RANGE = "closeRange: ";

    private: const std::string SENSOR_RANGE = " sensorRange: ";

    private: const std::string ONLY_TARGETS = " Only Targets: ";

    private: const std::string SHORTER_THAN_CURRENT_TARGET_DISTANCE = " isShorterThanCurrentTargetDistance: ";

    private: const std::string CURRENT_TARGET_DESTROYED = " isCurrentTargetDestroyed: ";

    private: const std::string CURRENT_TARGET_NOT_AVAILABLE = " isCurrentTargetNotAvailable: ";

    private: const std::string PROCESS_POSSIBLE_TARGET = "selected: processPossibleTarget1";

    public: void initRange(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->CLOSE_RANGE);
    
stringBuffer->appendint(closeRange);
    
stringBuffer->append(this->SENSOR_RANGE);
    
stringBuffer->appendint(sensorRange);
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: initRange");
    
}


    public: void processPossibleTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed){

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


    public: void processSetTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance){

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


    public: void processPossibleTargetCloser(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance){

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


    public: void setTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance){

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


    public: void setTargetPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF("Target Destroyed", this, "selected: setTargetPath");
    
}


    public: void setTargetPathIgnoreNewPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Set Path To Target: ");
    
stringBuffer->append(waypointBehaviorBase->getCurrentTargetLayerInterface()->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->stringUtil->toString(waypointBehaviorBase->getCurrentTargetLayerInterface()));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: setTargetPath");
    
}


    public: void processWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* targetLayer, int32_t size){

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


    public: void processWaypointTracked(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase){

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


    public: void processWaypointTrackedVisit(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* geographicMapCellPosition){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Visited: ");
    
stringBuffer->append(this->stringUtil->toString(geographicMapCellPosition));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: processWaypoint");
    
}


    public: void processWaypointTrackedWithoutProgress(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, std::string reason){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(reason)->toString(), this, "turnTo");
    
}


    public: void wander(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF(associatedAdvancedRTSGameLayer->getName(), this, "wander");
    
}


    public: void targetDestroyed(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" Target Destroyed")->toString(), this, "selected: processTargeting");
    
}


    public: void processTargeting(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy){

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


    public: void processTargetingNonWayPoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy){

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


    public: void removeWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* waypointLayer, std::string reason){

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


    public: void removeWaypointList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, BasicArrayList* list){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(unitWaypointBehavior2->getName());
    
stringBuffer->append(" Waypoints: ");
    
stringBuffer->append(this->stringUtil->toString(list));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: removeWaypoint");
    
}


    public: void removeWaypointClear(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" Clearing removed waypoint")->toString(), this, "selected: removeWaypoint");
    
}


    public: void clearTarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" Cleared Target")->toString(), this, "selected: clearTarget");
    
}


    public: void addWaypointFromUser(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer){

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


    public: void targetMovedSoRetarget(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" - target moved so retargeting")->toString(), this, "turnTo");
    
}


};

            

