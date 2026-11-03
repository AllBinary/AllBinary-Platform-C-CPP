
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/input/form/PrimaryWaypointHelper.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/SensorAction.h>

      
#include <org/allbinary/game/layer/SensorActionFactory.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/building/BuildingLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/waypoint/event/WaypointEventListenerInterface.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/unit/UnitWaypointStrings.h"
#include "org/allbinary/game/layer/unit/UnitLayer.h"


UnitWaypointBehavior::UnitWaypointBehavior(UnitLayer* associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer* fakeWaypoint) : commonSeps(CommonSeps::getInstance()), unitWaypointStrings(UnitWaypointStrings::getInstance()), sensorAction(SensorActionFactory::getInstance()->ATTACK), lastPathGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), currentPathGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), waypointPathsListP(BasicArrayListUtil::getInstance()->getImmutableInstance()), currentTargetDistance(Integer.MAX_VALUE), currentTargetLayerInterfaceP(CollidableDestroyableDamageableLayer::getNullInstance()), repeatedToLong(new TimeDelayHelper(22000)){
this->associatedAdvancedRTSGameLayer= associatedAdvancedRTSGameLayer;
    
this->completeTimeDelayHelper= new TimeDelayHelper(30000);
    
this->targetList= new BasicArrayListD();
    
this->possibleTargetList= new BasicArrayListD();
    
this->setWaypointPathsList(BasicArrayListUtil::getInstance()->getImmutableInstance());
    
this->currentGeographicMapCellHistoryP= new GeographicMapCellHistory();
    
this->FAKE_WAYPOINT_LAYER= fakeWaypoint;
    
}


    auto UnitWaypointBehavior::initRange(int32_t weaponRange) -> void{
this->longWeaponRange= weaponRange /2;
    
}


    auto UnitWaypointBehavior::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto UnitWaypointBehavior::onWaypointEvent(RTSLayerEvent* event) -> void{

    AdvancedRTSGameLayer* advancedRTSGameLayer = dynamic_cast<AdvancedRTSGameLayer*>(event->getRtsLayer());;
    
this->associatedAdvancedRTSGameLayer->waypointLogHelperP->onWaypointEvent(this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
    

                        if(this->associatedAdvancedRTSGameLayer->isSelected())
                        
                                    {
                                    this->addWaypointFromUser(advancedRTSGameLayer);
    

                                    }
                                
                             else 
                        if(advancedRTSGameLayer->shouldAddWaypointFromBuilding())
                        
                                    {
                                    this->addWaypointFromBuilding(advancedRTSGameLayer);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto UnitWaypointBehavior::addWaypointFromUser(AdvancedRTSGameLayer* advancedRTSGameLayer) -> void{
}


                //@Throws(Exception.constructor)
            
    auto UnitWaypointBehavior::addWaypointFromBuilding(AdvancedRTSGameLayer* advancedRTSGameLayer) -> void{

                        if(advancedRTSGameLayer == PrimaryWaypointHelper::getInstance()->getWaypointLayer() || advancedRTSGameLayer->getParentLayer() == this->associatedAdvancedRTSGameLayer->getParentLayer())
                        
                                    {
                                    
                        if(!this->targetList->contains(advancedRTSGameLayer))
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer->waypointLogHelperP->addWaypointFromBuilding(this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
    

                        if(advancedRTSGameLayer->isDestroyed())
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("Trying to add a dead: ") +JavaString::valueOf(advancedRTSGameLayer));
                    

                                    }
                                
this->targetList->add(advancedRTSGameLayer);
    
this->associatedAdvancedRTSGameLayer->waypointLogHelperP->addWaypointFromBuildingList(this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer, this->targetList);
    

                                    }
                                

                                    }
                                
}


    auto UnitWaypointBehavior::isWaypointListEmptyOrOnlyTargets() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitWaypointBehavior::insertWaypoint(int32_t index, CollidableDestroyableDamageableLayer* rtsLayer) -> bool{

                        if(this->canInsertWaypoint(index, rtsLayer))
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer->waypointLogHelperP->insertWaypoint(this->associatedAdvancedRTSGameLayer, index, rtsLayer, this->getName());
    

                        if(rtsLayer->isDestroyed())
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("Trying to add a dead: ") +JavaString::valueOf(rtsLayer));
                    

                                    }
                                
this->targetList->addAt(index, rtsLayer);
    
this->associatedAdvancedRTSGameLayer->waypointLogHelperP->insertWaypointList(this->associatedAdvancedRTSGameLayer, index, rtsLayer, this->getName(), this->targetList);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto UnitWaypointBehavior::move() -> void{

                        if(this->isMoving())
                        
                                    {
                                    this->setMovingFromStopped(false);
    

                                    }
                                
                        else {
                            this->setMovingFromStopped(true);
    

                        }
                            
this->setMoving(false);
    
}


                //@Throws(Exception.constructor)
            
    auto UnitWaypointBehavior::setRandomGeographicMapCellHistory(BasicArrayList* pathsList) -> void{

    int32_t size = pathsList->size();;
    
this->associatedAdvancedRTSGameLayer->waypointLogHelperP->setRandomGeographicMapCellHistoryList(this->associatedAdvancedRTSGameLayer, pathsList);
    

                        if(size > 0)
                        
                                    {
                                    
    BasicArrayList* geographicMapCellPositionBasicArrayList = dynamic_cast<BasicArrayList*>(BasicArrayListUtil::getInstance()->getRandom(pathsList));;
    
this->setGeographicMapCellHistoryPath(geographicMapCellPositionBasicArrayList);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto UnitWaypointBehavior::setGeographicMapCellHistoryPath(BasicArrayList* geographicMapCellPositionBasicArrayList) -> void{
this->lastPathGeographicMapCellPosition= SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        if(this->associatedAdvancedRTSGameLayer->showMoreCaptionStates)
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer->getCaptionAnimationHelper()->update(this->unitWaypointStrings->PATHING, BasicColorFactory::getInstance()->GREEN);
    

                                    }
                                
this->currentGeographicMapCellHistoryP->init();
    
this->associatedAdvancedRTSGameLayer->init(this->currentGeographicMapCellHistoryP, geographicMapCellPositionBasicArrayList);
    
this->setTrackingWaypoint(true);
    
this->getCompleteTimeDelayHelper()->setStartTimeTNT();
    
}


    auto UnitWaypointBehavior::canInsertWaypoint(int32_t index, CollidableDestroyableDamageableLayer* rtsLayer) -> bool{

                        if(this->targetList->size() > 4)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(this->targetList->contains(rtsLayer))
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitWaypointBehavior::addBuildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) -> void{
}


                //@Throws(Exception.constructor)
            
    auto UnitWaypointBehavior::moveAwayFromBuilding(BuildingLayer* buildingLayer) -> void{

    GeographicMapCellPosition* geographicMapCellPosition = this->associatedAdvancedRTSGameLayer->getCurrentGeographicMapCellPosition();;
    

    BasicArrayList* list = buildingLayer->geographicMapCellPositionAreaBase->getOccupyingGeographicMapCellPositionList();;
    

                        if(list->contains(geographicMapCellPosition))
                        
                                    {
                                    
                        if(this->insertWaypoint(0, this->FAKE_WAYPOINT_LAYER))
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer->waypointLogHelperP->moveAwayFromBuilding(this->associatedAdvancedRTSGameLayer);
    
this->setCurrentTargetLayerInterface(dynamic_cast<CollidableDestroyableDamageableLayer*>(this->FAKE_WAYPOINT_LAYER));
    

    BasicArrayList* pathsList = buildingLayer->getMoveOutOfBuildAreaPath(geographicMapCellPosition);;
    
this->associatedAdvancedRTSGameLayer->setClosestGeographicMapCellHistory(pathsList);
    

                                    }
                                

                                    }
                                
}


    auto UnitWaypointBehavior::needToMove() -> bool{
this->associatedAdvancedRTSGameLayer->waypointLogHelperP->needToMove(this->associatedAdvancedRTSGameLayer, this);
    

                        if(this->isTrackingWaypoint() || this->sensorAction == SensorActionFactory::getInstance()->EVADE || (this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer::getNullInstance() && this->getCurrentTargetDistance() >= this->longWeaponRange +this->currentTargetLayerInterfaceP->getHalfHeight()))
                        
                                    {
                                    this->repeatedToLong->setStartTimeTNT();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                        if(this->repeatedToLong->isTimeTNT())
                        
                                    {
                                    
    std::string message = JavaString::valueOf("Repeating too long: ") +JavaString::valueOf(this->getMovementLogicAsString());;
    
ForcedLogUtil::log(message, this->associatedAdvancedRTSGameLayer);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto UnitWaypointBehavior::getMovementLogicAsString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("isTrackingWaypoint: ");
    
stringBuffer->appendboolean(this->isTrackingWaypoint());
    
stringBuffer->append(" sensorAction: ");
    
stringBuffer->append(this->sensorAction->name);
    
stringBuffer->append(" getCurrentTargetLayerInterface: ");
    
stringBuffer->append(StringUtil::getInstance()->toString(this->currentTargetLayerInterfaceP));
    

                        if(this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    stringBuffer->append(" Target Range: ");
    
stringBuffer->appendint(this->getCurrentTargetDistance());
    
stringBuffer->append(" >= ");
    
stringBuffer->appendint(this->longWeaponRange +this->currentTargetLayerInterfaceP->getHalfHeight());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto UnitWaypointBehavior::isMovingFromStopped() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->movingFromStopped;
    
}


    auto UnitWaypointBehavior::setMovingFromStopped(bool movingFromStopped) -> void{
this->movingFromStopped= movingFromStopped;
    
}


    auto UnitWaypointBehavior::setWaypointPathsList(BasicArrayList* waypointPathsList) -> void{
this->waypointPathsListP= waypointPathsList;
    
}


    auto UnitWaypointBehavior::getWaypointPathsList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->waypointPathsListP;
    
}


    auto UnitWaypointBehavior::isMoving() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->moving;
    
}


    auto UnitWaypointBehavior::setMoving(bool moving) -> void{
this->moving= moving;
    
}


    auto UnitWaypointBehavior::isTrackingWaypoint() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->trackingWaypoint;
    
}


    auto UnitWaypointBehavior::getPossibleTargetList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->possibleTargetList;
    
}


    auto UnitWaypointBehavior::setLastPathGeographicMapCellPosition(GeographicMapCellPosition* lastPathGeographicMapCellPosition) -> void{
this->lastPathGeographicMapCellPosition= lastPathGeographicMapCellPosition;
    
}


    auto UnitWaypointBehavior::getLastPathGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lastPathGeographicMapCellPosition;
    
}


    auto UnitWaypointBehavior::setCurrentPathGeographicMapCellPosition(GeographicMapCellPosition* currentPathGeographicMapCellPosition) -> void{
this->currentPathGeographicMapCellPosition= currentPathGeographicMapCellPosition;
    
}


    auto UnitWaypointBehavior::getCurrentPathGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->currentPathGeographicMapCellPosition;
    
}


    auto UnitWaypointBehavior::setSensorAction(SensorAction* sensorAction) -> void{
this->sensorAction= sensorAction;
    
}


    auto UnitWaypointBehavior::getSensorAction() -> SensorAction*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->sensorAction;
    
}


    auto UnitWaypointBehavior::setCurrentTargetLayerInterface(CollidableDestroyableDamageableLayer* currentTargetLayerInterface) -> void{
this->currentTargetLayerInterfaceP= currentTargetLayerInterface;
    
}


    auto UnitWaypointBehavior::getCurrentTargetLayerInterface() -> CollidableDestroyableDamageableLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->currentTargetLayerInterfaceP;
    
}


    auto UnitWaypointBehavior::setCurrentTargetDistance(int32_t currentTargetDistance) -> void{
this->currentTargetDistance= currentTargetDistance;
    
}


    auto UnitWaypointBehavior::getCurrentTargetDistance() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->currentTargetDistance;
    
}


    auto UnitWaypointBehavior::getCompleteTimeDelayHelper() -> TimeDelayHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->completeTimeDelayHelper;
    
}


    auto UnitWaypointBehavior::getCurrentGeographicMapCellHistory() -> GeographicMapCellHistory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->currentGeographicMapCellHistoryP;
    
}


    auto UnitWaypointBehavior::setTrackingWaypoint(bool trackingWaypoint) -> void{
this->trackingWaypoint= trackingWaypoint;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR_CPP
