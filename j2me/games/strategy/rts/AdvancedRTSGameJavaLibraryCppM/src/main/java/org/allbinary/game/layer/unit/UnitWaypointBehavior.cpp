
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
        #include "org/allbinary/game/layer/unit/UnitLayer.h"

class UnitWaypointBehavior: public WaypointBehaviorBase, public WaypointEventListenerInterface {

    private: static inline const std::string PATHING = "Pathing";

    protected: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: int32_t longWeaponRange = 0;

    private: SensorAction* sensorAction = SensorActionFactory::getInstance()->ATTACK;

    private: TimeDelayHelper* completeTimeDelayHelper;

    protected: GeographicMapCellHistory* currentGeographicMapCellHistoryP;

    private: GeographicMapCellPosition* lastPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition* currentPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: CollidableDestroyableDamageableLayer* FAKE_WAYPOINT_LAYER;

    protected: BasicArrayList* targetList;

    private: BasicArrayList* possibleTargetList;

    protected: UnitLayer* associatedAdvancedRTSGameLayer;

    private: bool moving = false;

    private: bool movingFromStopped = false;

    protected: BasicArrayList* waypointPathsListP = BasicArrayListUtil::getInstance()->getImmutableInstance();

    private: int32_t currentTargetDistance = Integer.MAX_VALUE;

    protected: CollidableDestroyableDamageableLayer* currentTargetLayerInterfaceP = CollidableDestroyableDamageableLayer::getNullInstance();

    private: bool trackingWaypoint= false;

protected: UnitWaypointBehavior(UnitLayer* associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer* fakeWaypoint){
this->associatedAdvancedRTSGameLayer= associatedAdvancedRTSGameLayer;
    
this->completeTimeDelayHelper= new TimeDelayHelper(30000);
    
this->targetList= new BasicArrayListD();
    
this->possibleTargetList= new BasicArrayListD();
    
this->setWaypointPathsList(BasicArrayListUtil::getInstance()->getImmutableInstance());
    
this->currentGeographicMapCellHistoryP= new GeographicMapCellHistory();
    
this->FAKE_WAYPOINT_LAYER= fakeWaypoint;
    
}


    protected: void initRange(int32_t weaponRange){
this->longWeaponRange= weaponRange /2;
    
}


    public: void onEvent(AllBinaryEventObject* eventObject){
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public: void onWaypointEvent(RTSLayerEvent* event){

    AdvancedRTSGameLayer* advancedRTSGameLayer = dynamic_cast<AdvancedRTSGameLayer*>(event->getRtsLayer());;
    
this->associatedAdvancedRTSGameLayer->waypointLogHelperP.onWaypointEvent(this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
    

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
            
    protected: void addWaypointFromUser(AdvancedRTSGameLayer* advancedRTSGameLayer){
}


                //@Throws(Exception.constructor)
            
    private: void addWaypointFromBuilding(AdvancedRTSGameLayer* advancedRTSGameLayer){

                        if(advancedRTSGameLayer == PrimaryWaypointHelper::getInstance()->getWaypointLayer() || advancedRTSGameLayer->getParentLayer() == this->associatedAdvancedRTSGameLayer->getParentLayer())
                        
                                    {
                                    
                        if(!this->targetList->contains(advancedRTSGameLayer))
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer->waypointLogHelperP.addWaypointFromBuilding(this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
    

                        if(advancedRTSGameLayer->isDestroyed())
                        
                                    {
                                    


                            throw new Exception("Trying to add a dead: " +advancedRTSGameLayer);
                    

                                    }
                                
this->targetList->add(advancedRTSGameLayer);
    
this->associatedAdvancedRTSGameLayer->waypointLogHelperP.addWaypointFromBuildingList(this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer, this->targetList);
    

                                    }
                                

                                    }
                                
}


    public: bool isWaypointListEmptyOrOnlyTargets(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: bool insertWaypoint(int32_t index, CollidableDestroyableDamageableLayer* rtsLayer){

                        if(this->canInsertWaypoint(index, rtsLayer))
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer->waypointLogHelperP.insertWaypoint(this->associatedAdvancedRTSGameLayer, index, rtsLayer, this->getName());
    

                        if(rtsLayer->isDestroyed())
                        
                                    {
                                    


                            throw new Exception("Trying to add a dead: " +rtsLayer);
                    

                                    }
                                
this->targetList->addAt(index, rtsLayer);
    
this->associatedAdvancedRTSGameLayer->waypointLogHelperP.insertWaypointList(this->associatedAdvancedRTSGameLayer, index, rtsLayer, this->getName(), this->targetList);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    protected: void move(){

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
            
    protected: void setRandomGeographicMapCellHistory(BasicArrayList* pathsList){

    int32_t size = pathsList->size();;
    
this->associatedAdvancedRTSGameLayer->waypointLogHelperP.setRandomGeographicMapCellHistoryList(this->associatedAdvancedRTSGameLayer, pathsList);
    

                        if(size > 0)
                        
                                    {
                                    
    BasicArrayList* geographicMapCellPositionBasicArrayList = dynamic_cast<BasicArrayList*>(BasicArrayListUtil::getInstance()->getRandom(pathsList));;
    
this->setGeographicMapCellHistoryPath(geographicMapCellPositionBasicArrayList);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void setGeographicMapCellHistoryPath(BasicArrayList* geographicMapCellPositionBasicArrayList){
this->lastPathGeographicMapCellPosition= SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        if(this->associatedAdvancedRTSGameLayer->showMoreCaptionStates)
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer->getCaptionAnimationHelper()->update(UnitWaypointBehavior::PATHING, BasicColorFactory::getInstance()->GREEN);
    

                                    }
                                
this->currentGeographicMapCellHistoryP->init();
    
this->associatedAdvancedRTSGameLayer->init(this->currentGeographicMapCellHistoryP, geographicMapCellPositionBasicArrayList);
    
this->setTrackingWaypoint(true);
    
this->getCompleteTimeDelayHelper()->setStartTimeTNT();
    
}


    protected: bool canInsertWaypoint(int32_t index, CollidableDestroyableDamageableLayer* rtsLayer){

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
            
    public: void addBuildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition){
}


                //@Throws(Exception.constructor)
            
    protected: void moveAwayFromBuilding(BuildingLayer* buildingLayer){

    GeographicMapCellPosition* geographicMapCellPosition = this->associatedAdvancedRTSGameLayer->getCurrentGeographicMapCellPosition();;
    

    BasicArrayList* list = buildingLayer->geographicMapCellPositionAreaBase.getOccupyingGeographicMapCellPositionList();;
    

                        if(list->contains(geographicMapCellPosition))
                        
                                    {
                                    
                        if(this->insertWaypoint(0, this->FAKE_WAYPOINT_LAYER))
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer->waypointLogHelperP.moveAwayFromBuilding(this->associatedAdvancedRTSGameLayer);
    
this->setCurrentTargetLayerInterface(dynamic_cast<CollidableDestroyableDamageableLayer*>(this->FAKE_WAYPOINT_LAYER));
    

    BasicArrayList* pathsList = buildingLayer->getMoveOutOfBuildAreaPath(geographicMapCellPosition);;
    
this->associatedAdvancedRTSGameLayer->setClosestGeographicMapCellHistory(pathsList);
    

                                    }
                                

                                    }
                                
}


    private: TimeDelayHelper* repeatedToLong = new TimeDelayHelper(22000);

    public: bool needToMove(){
this->associatedAdvancedRTSGameLayer->waypointLogHelperP.needToMove(this->associatedAdvancedRTSGameLayer, this);
    

                        if(this->isTrackingWaypoint() || this->sensorAction == SensorActionFactory::getInstance()->EVADE || (this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer::getNullInstance() && this->getCurrentTargetDistance() >= this->longWeaponRange +this->currentTargetLayerInterfaceP->getHalfHeight()))
                        
                                    {
                                    this->repeatedToLong->setStartTimeTNT();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this->repeatedToLong->isTimeTNT())
                        
                                    {
                                    
    std::string message = "Repeating too long: " +this->getMovementLogicAsString();;
    
ForcedLogUtil::log(message, this->associatedAdvancedRTSGameLayer);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string getMovementLogicAsString(){

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


    public: bool isMovingFromStopped(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->movingFromStopped;
    
}


    protected: void setMovingFromStopped(bool movingFromStopped){
this->movingFromStopped= movingFromStopped;
    
}


    public: void setWaypointPathsList(BasicArrayList* waypointPathsList){
this->waypointPathsListP= waypointPathsList;
    
}


    public: BasicArrayList* getWaypointPathsList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointPathsListP;
    
}


    protected: bool isMoving(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->moving;
    
}


    protected: void setMoving(bool moving){
this->moving= moving;
    
}


    public: bool isTrackingWaypoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->trackingWaypoint;
    
}


    protected: BasicArrayList* getPossibleTargetList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->possibleTargetList;
    
}


    protected: void setLastPathGeographicMapCellPosition(GeographicMapCellPosition* lastPathGeographicMapCellPosition){
this->lastPathGeographicMapCellPosition= lastPathGeographicMapCellPosition;
    
}


    protected: GeographicMapCellPosition* getLastPathGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastPathGeographicMapCellPosition;
    
}


    protected: void setCurrentPathGeographicMapCellPosition(GeographicMapCellPosition* currentPathGeographicMapCellPosition){
this->currentPathGeographicMapCellPosition= currentPathGeographicMapCellPosition;
    
}


    public: GeographicMapCellPosition* getCurrentPathGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentPathGeographicMapCellPosition;
    
}


    protected: void setSensorAction(SensorAction* sensorAction){
this->sensorAction= sensorAction;
    
}


    protected: SensorAction* getSensorAction(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sensorAction;
    
}


    protected: void setCurrentTargetLayerInterface(CollidableDestroyableDamageableLayer* currentTargetLayerInterface){
this->currentTargetLayerInterfaceP= currentTargetLayerInterface;
    
}


    public: CollidableDestroyableDamageableLayer* getCurrentTargetLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentTargetLayerInterfaceP;
    
}


    protected: void setCurrentTargetDistance(int32_t currentTargetDistance){
this->currentTargetDistance= currentTargetDistance;
    
}


    protected: int32_t getCurrentTargetDistance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentTargetDistance;
    
}


    protected: TimeDelayHelper* getCompleteTimeDelayHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->completeTimeDelayHelper;
    
}


    public: GeographicMapCellHistory* getCurrentGeographicMapCellHistory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentGeographicMapCellHistoryP;
    
}


    protected: void setTrackingWaypoint(bool trackingWaypoint){
this->trackingWaypoint= trackingWaypoint;
    
}


};

            

