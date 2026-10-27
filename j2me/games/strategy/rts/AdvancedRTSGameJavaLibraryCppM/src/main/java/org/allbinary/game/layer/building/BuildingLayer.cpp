
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/building/BuildingLayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/NullIndexedAnimationFactory.h>

      
#include <org/allbinary/game/identification/GroupFactory.h>

      
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/input/form/VisibleCellPositionsSingleton.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/AdvancedRTSProperties.h>

      
#include <org/allbinary/game/layer/CollidableRTSBehavior.h>

      
#include <org/allbinary/game/layer/RTSLayerUtil.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/SelectionHudPaintable.h>

      
#include <org/allbinary/game/layer/waypoint/Waypoint.h>

      
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/combat/damage/DamageFloaters.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>

      
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/building/SimulatedBuildingPropertiesFactory.h"
#include "org/allbinary/game/layer/building/BuildingPropertiesFactory.h"
#include "org/allbinary/game/layer/building/BuildingInfoHudPaintable.h"


                //@Throws(Exception.constructor)
            
    auto BuildingLayer::createSimulated() -> BuildingLayer*{

    AnimationInterfaceFactoryInterface* nullAnimationInterfaceFactoryInterface = NullAnimationFactory::getFactoryInstance();;
    

    AnimationInterfaceFactoryInterface* nullIndexedAnimationInterfaceFactoryInterface = NullIndexedAnimationFactory::getFactoryInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BuildingLayer(RemoteInfo::REMOTE_INFO, SimulatedBuildingPropertiesFactory::getInstance(), AdvancedRTSProperties::createPropertiesSimulated(), GroupFactory::getInstance()->NULL_GROUP_ARRAY, StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING, Health::NULL_HEALTH, NullRTSFormInputFactory::getInstance(), nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, NullIndexedAnimationFactory::getFactoryInstance(), RectangleFactory::SINGLETON, 0, 0);
    
}


BuildingLayer::BuildingLayer(RemoteInfo* remoteInfo, BuildingPropertiesFactory* buildingPropertiesFactory, AdvancedRTSProperties* advancedRTSProperties, std::vector<Group*> groupInterface, std::string rootName, std::string name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) : AdvancedRTSGameLayer(remoteInfo, NullPathFindingLayer::NULL_PATH_FINDING_LAYER, advancedRTSProperties, groupInterface, rootName, name, healthInterface, rtsFormInput, animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, new TileLayerPositionIntoViewPosition()), timeDelayHelper(new TimeDelayHelper(3000)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setCollidableInferface(new CollidableRTSBehavior(true));
    
this->getWaypointBehavior()->setWaypoint(new Waypoint(this, SelectSound::getInstance()));
    
this->damageFloaters= buildingPropertiesFactory->getDamageFloaters(this);
    
this->damageFloatersPaintableInterface= buildingPropertiesFactory->damageFloatersPaintableInterface;
    
this->healthBar= buildingPropertiesFactory->getHealthBar(this);
    
this->pathsHashtable= buildingPropertiesFactory->getHashtable();
    
this->setMaxLevel(30);
    
this->setProductivity(1);
    
this->setEfficiency(this->calculateEfficiency());
    
this->efficiencyPerLevel= buildingPropertiesFactory->getEfficiencyPerLevel(this);
    
this->efficiency= this->efficiencyPerLevel;
    
this->generateMoveOutOfBuildAreaPaths();
    
this->trackingEvent= buildingPropertiesFactory->getTrackingEvent(this);
    
}


    auto BuildingLayer::initVisibility(RTSPlayerLayerInterface* rtsPlayerLayerInterface) -> void{

    AdvancedRTSPlayerLayerInterface* advancedRTSPlayerLayerInterface = dynamic_cast<AdvancedRTSPlayerLayerInterface*>(rtsPlayerLayerInterface);;
    

                        if(advancedRTSPlayerLayerInterface->isLocalPlayer())
                        
                                    {
                                    this->local= true;
    
this->addVisibility();
    

                                    }
                                
                        else {
                            this->local= false;
    

                        }
                            
AdvancedRTSGameLayer::initVisibility(rtsPlayerLayerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto BuildingLayer::construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface) -> void{
AdvancedRTSGameLayer::construct(rtsPlayerLayerInterface);
    
TrackingEventHandler::getInstance()->addListenerInterface(this);
    
}


    auto BuildingLayer::onMovement(TrackingEvent* trackingEvent) -> void{

        try {
            
    AdvancedRTSGameLayer* layerInterface = dynamic_cast<AdvancedRTSGameLayer*>(trackingEvent->getLayerInterface());;
    

                        if(layerInterface->getGroupInterface()[0] != this->getGroupInterface()[0])
                        
                                    {
                                    layerInterface->onMovementFound(this->trackingEvent);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onMovement", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto BuildingLayer::processBuiltTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{

                        if(this->getHealthInterface()->isDamaged())
                        
                                    {
                                    this->setAnimationInterface(this->destroyAnimationInterface);
    

                                    }
                                

                        if(!this->getHealthInterface()->isAlive())
                        
                                    {
                                    
                        if(this->isReadyForExplosion())
                        
                                    {
                                    
    int32_t currentFrame = this->destroyAnimationInterface->getFrame();;
    

    int32_t size = this->destroyAnimationInterface->getSize() -1;;
    

                        if(currentFrame == size && !this->timeDelayHelper->isTimeTNT())
                        
                                    {
                                    
                        if(!this->getHealthInterface()->isAlive())
                        
                                    {
                                    this->setDestroyed(true);
    

                                    }
                                

                                    }
                                
                        else {
                            this->destroyAnimationInterface->nextFrame();
    

                        }
                            

                                    }
                                
                        else {
                            this->setAnimationInterface(this->destroyAnimationInterface);
    
SecondaryPlayerQueueFactory::getInstance()->add(ExplosionBasicSound::getInstance());
    
this->shakeListener->onSmallShakeEvent();
    
this->vibration->vibrate(this->duration, 0, 0);
    
this->timeDelayHelper->setStartTimeTNT();
    
this->setReadyForExplosion(true);
    

                        }
                            

                                    }
                                
                        else {
                            AdvancedRTSGameLayer::processBuiltTick(allBinaryLayerManager);
    

                        }
                            
this->indexedButShouldBeRotationAnimationInterface->nextFrame();
    
}


    auto BuildingLayer::calculateEfficiency() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->efficiencyPerLevel;
    
}


    auto BuildingLayer::getCost() -> int32_t{

    int64_t total = RTSLayerUtil::getInstance()->getCostExponential((this->getLevel() *this->getBuildingLevelCost()));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(total);
    
}


    auto BuildingLayer::getDowngradeCost() -> int32_t{

    int64_t downgradeCost = RTSLayerUtil::getInstance()->getCostExponential(((this->getLevel() -1) *this->getBuildingLevelCost()));;
    
this->logUtil->putF(JavaString::valueOf("Cost: ") +JavaString::valueOf(downgradeCost), this, "getDowngradeCost");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(downgradeCost) *9 /10;
    
}


    auto BuildingLayer::getUpgradeCost() -> int32_t{

    int64_t upgradeCost = RTSLayerUtil::getInstance()->getCostExponential(((this->getLevel() +1) *this->getBuildingLevelCost()));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(upgradeCost);
    
}


    auto BuildingLayer::downgrade() -> void{
AdvancedRTSGameLayer::downgrade();
    
this->setProductivity(this->getProductivity() -1);
    
this->setEfficiency(this->getEfficiency() -this->calculateEfficiency());
    
this->getHealthInterface()->setMaxHealth(this->getHealthInterface()->getMaxHealth() -((this->getLevel() +1) *100));
    
}


    auto BuildingLayer::upgrade() -> void{
AdvancedRTSGameLayer::upgrade();
    
this->setProductivity(this->getProductivity() +1);
    
this->setEfficiency(this->getEfficiency() +this->calculateEfficiency());
    
this->getHealthInterface()->setMaxHealth(this->getHealthInterface()->getMaxHealth() +(this->getLevel() *100));
    
}


    auto BuildingLayer::getBuildingLevelCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->buildingLevelCost;
    
}


    auto BuildingLayer::setBuildingLevelCost(int32_t buildingLevelCost) -> void{
this->buildingLevelCost= buildingLevelCost;
    
}


    auto BuildingLayer::getProductivity() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->productivity;
    
}


    auto BuildingLayer::setProductivity(int32_t productivity) -> void{
this->productivity= productivity;
    
}


    auto BuildingLayer::getEfficiency() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->efficiency;
    
}


    auto BuildingLayer::setEfficiency(int32_t efficiency) -> void{
this->efficiency= efficiency;
    
}


                //@Throws(Exception.constructor)
            
    auto BuildingLayer::generateMoveOutOfBuildAreaPaths() -> void{

    BasicArrayList* occupyList = this->geographicMapCellPositionAreaBase->getOccupyingGeographicMapCellPositionList();;
    

    BasicArrayList* surroundList = this->geographicMapCellPositionAreaBase->getSurroundingGeographicMapCellPositionList();;
    

    Direction* NO_DIRECTION = DirectionFactory::getInstance()->NO_DIRECTION;;
    

    GeographicMapDirectionUtil* geographicMapDirectionUtil = GeographicMapDirectionUtil::getInstance();;
    

    BasicArrayList* pathsList;;
    

    GeographicMapCellPosition* occupyGeographicMapCellPosition;;
    

    GeographicMapCellPosition* surroundGeographicMapCellPosition;;
    

    BasicArrayList* list;;
    




                        for (
    int32_t index2 = occupyList->size() -1;index2 >= 0; index2--)
        {
pathsList= new BasicArrayListD();
    
occupyGeographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(occupyList->get(index2));
    




                        for (
    int32_t index = surroundList->size() -1;index >= 0; index--)
        {
surroundGeographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(surroundList->get(index));
    

                        if(geographicMapDirectionUtil->getEightDirectionFromCellPositionToAdjacentCellPosition(surroundGeographicMapCellPosition, occupyGeographicMapCellPosition) != NO_DIRECTION)
                        
                                    {
                                    list= new BasicArrayListS(1);
    
list->add(surroundGeographicMapCellPosition);
    
pathsList->add(list);
    

                                    }
                                
}

this->pathsHashtable->put(occupyGeographicMapCellPosition, pathsList);
    
}

}


    auto BuildingLayer::getMoveOutOfBuildAreaPath(GeographicMapCellPosition* geographicMapCellPosition) -> BasicArrayList*{

    BasicArrayList* pathsList = dynamic_cast<BasicArrayList*>(this->pathsHashtable->get(geographicMapCellPosition));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathsList;
    
}


    auto BuildingLayer::getEndGeographicMapCellPositionList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionAreaBase->getSurroundingGeographicMapCellPositionList();;
    
}


    auto BuildingLayer::shouldHandleStartSameAsEnd() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto BuildingLayer::paint(Graphics* graphics) -> void{

                        if(this->isVisible())
                        
                                    {
                                    AdvancedRTSGameLayer::paint(graphics);
    
this->damageFloatersPaintableInterface->paint(graphics);
    
this->healthBar->paint(graphics);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto BuildingLayer::damage(int32_t damage, int32_t damageType) -> void{
AdvancedRTSGameLayer::damage(damage, damageType);
    
this->damageFloaters->add(damage);
    

                        if(damage > 0)
                        this->getHealthInterface()->damage(damage);
                                
}


                //@Throws(Exception.constructor)
            
    auto BuildingLayer::getDamage(int32_t damageType) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto BuildingLayer::addVisibility() -> void{

    GeographicMapCellPositionAreaBase* geographicMapCellPositionArea = this->geographicMapCellPositionAreaBase;;
    

    BasicArrayList* occupyList = geographicMapCellPositionArea->getOccupyingGeographicMapCellPositionList();;
    
VisibleCellPositionsSingleton::getInstance()->addStationaryCellPositions(occupyList);
    

    BasicArrayList* surroundList = geographicMapCellPositionArea->getSurroundingGeographicMapCellPositionList();;
    
VisibleCellPositionsSingleton::getInstance()->addStationaryCellPositions(surroundList);
    
}


    auto BuildingLayer::removeVisibility() -> void{

    BasicArrayList* occupyList = this->geographicMapCellPositionAreaBase->getOccupyingGeographicMapCellPositionList();;
    
VisibleCellPositionsSingleton::getInstance()->removeStationaryCellPositions(occupyList);
    

    BasicArrayList* surroundList = this->geographicMapCellPositionAreaBase->getSurroundingGeographicMapCellPositionList();;
    
VisibleCellPositionsSingleton::getInstance()->removeStationaryCellPositions(surroundList);
    
}


                //@Throws(Exception.constructor)
            
    auto BuildingLayer::setDestroyed(bool destroyed) -> void{
AdvancedRTSGameLayer::setDestroyed(destroyed);
    

                        if(this->isDestroyed())
                        
                                    {
                                    DropCellPositionHistory::getInstance()->removeAll(this);
    
TrackingEventHandler::getInstance()->removeListener(this);
    

                        if(this->local)
                        
                                    {
                                    this->removeVisibility();
    

                                    }
                                

                        if(!this->getHealthInterface()->isAlive())
                        
                                    {
                                    
    int32_t damage = this->getHealthInterface()->getMaxHealth();;
    

                        if(damage > 10)
                        
                                    {
                                    SecondaryPlayerQueueFactory::getInstance()->add(ExplosionBasicSound::getInstance());
    

                        if(damage < 100)
                        
                                    {
                                    this->shakeListener->onSmallShakeEvent();
    
this->vibration->vibrate(this->duration, 0, 0);
    

                                    }
                                
                             else 
                        if(damage < 1000)
                        
                                    {
                                    this->shakeListener->onMediumShakeEvent();
    
this->vibration->vibrate(this->duration *2, 0, 0);
    

                                    }
                                
                             else 
                        if(damage < 3000)
                        
                                    {
                                    this->shakeListener->onLargeShakeEvent();
    
this->vibration->vibrate(this->duration *4, 0, 0);
    

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                
}


    auto BuildingLayer::createHudPaintable() -> SelectionHudPaintable*{

    BuildingInfoHudPaintable* buildingInfoHudPaintable = BuildingInfoHudPaintable::getInstance();;
    
buildingInfoHudPaintable->setBasicColorP(this->allBinaryGameLayerManagerP->getForegroundBasicColor());
    
buildingInfoHudPaintable->setRtsLayer(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buildingInfoHudPaintable;
    
}


    auto BuildingLayer::getHudPaintable() -> SelectionHudPaintable*{

    BuildingInfoHudPaintable* buildingInfoHudPaintable = BuildingInfoHudPaintable::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buildingInfoHudPaintable;
    
}


    auto BuildingLayer::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BuildingLayer::getStaticType();;
    
}


    auto BuildingLayer::getStaticType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 2;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGLAYER_CPP
