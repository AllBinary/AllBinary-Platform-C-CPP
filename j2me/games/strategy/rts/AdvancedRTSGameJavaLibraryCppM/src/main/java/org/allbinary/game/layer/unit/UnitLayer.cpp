
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/unit/UnitLayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/NullIndexedAnimationFactory.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/animation/caption/CaptionAnimationHelper.h>

      
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>

      
#include <org/allbinary/animation/vector/AdjustedCircleAnimation.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/game/combat/damage/DamageFloaters.h>

      
#include <org/allbinary/game/combat/damage/PtsDamageFloaters.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/health/HealthBar.h>

      
#include <org/allbinary/game/health/HealthBarTwodAnimation.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>

      
#include <org/allbinary/game/input/form/VisibleCellPositionsSingleton.h>

      
#include <org/allbinary/game/input/form/WaypointRTSFormInput.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/AdvancedRTSProperties.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/layer/CaptionResources.h>

      
#include <org/allbinary/game/layer/LinePathRelativeAnimation.h>

      
#include <org/allbinary/game/layer/PathAnimation.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayer2LogHelper.h>

      
#include <org/allbinary/game/layer/RTSLayer2SelectedLogHelper.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/RTSLayerHudPaintable.h>

      
#include <org/allbinary/game/layer/RTSLayerLogHelper.h>

      
#include <org/allbinary/game/layer/RTSLayerSelectedLogHelper.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/SelectionHudPaintable.h>

      
#include <org/allbinary/game/layer/SensorActionFactory.h>

      
#include <org/allbinary/game/layer/SteeringVisitor.h>

      
#include <org/allbinary/game/layer/TiledLayerUtil.h>

      
#include <org/allbinary/game/layer/VehicleFrictionProperties.h>

      
#include <org/allbinary/game/layer/VehicleProperties.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/building/BuildingLayer.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventHandler.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>

      
#include <org/allbinary/game/layer/capital/event/CapitalEvent.h>

      
#include <org/allbinary/game/layer/capital/event/CapitalEventHandlerFactory.h>

      
#include <org/allbinary/game/layer/geographic/map/LayerPartialCellPositionsUtil.h>

      
#include <org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h>

      
#include <org/allbinary/game/layer/special/SpecialFireGameInputProcessor.h>

      
#include <org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h>

      
#include <org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h>

      
#include <org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h>

      
#include <org/allbinary/game/layer/waypoint/MultipassNoCacheWaypoint.h>

      
#include <org/allbinary/game/layer/waypoint/NoCacheWaypoint.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>

      
#include <org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>

      
#include <org/allbinary/game/part/weapon/SalvoInterface.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/FrameUtil.h>

      
#include <org/allbinary/math/LayerDistanceUtil.h>

      
#include <org/allbinary/math/NamedAngle.h>

      
#include <org/allbinary/media/audio/AttackSound.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/unit/CollidableUnitBehavior.h"
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior2.h"
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"

BasicArrayList* UnitLayer::partialPositionList = new BasicArrayListS(4);

UnitLayer::UnitLayer(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, std::vector<Group*> groupInterface, std::string rootName, std::string name, VehicleProperties* vehicleProperties, Health* healthInterface, int32_t maxResourceLoad, Sound* moveSoundInterface, LayerInterfaceFactoryInterface* waypointLayerInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* decalAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* resourceAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, Direction* direction, int32_t x, int32_t y, int32_t z, ViewPositionBase* viewPosition) : AdvancedRTSGameLayer(remoteInfo, parentLayer, advancedRTSProperties, groupInterface, rootName, name, healthInterface, new WaypointRTSFormInput(groupInterface, true), animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, viewPosition), basicColorFactory(BasicColorFactory::getInstance()), groupCommonFactory(GroupCommonFactory::getInstance()), layerPartialCellPositionsUtil(LayerPartialCellPositionsUtil::getInstance()), layerDistanceUtil(LayerDistanceUtil::getInstance()), angleFactory(AngleFactory::getInstance()), cellPositionFactory(CellPositionFactory::getInstance()), accelerationBasicDecimal(new BasicDecimal(1600)), decelerationBasicDecimal(new BasicDecimal( -1000)), resourceAnimation(dynamic_cast<IndexedAnimation*>(NullIndexedAnimationFactory::getFactoryInstance()->getInstance(0))), pathAnimation(NullAnimationFactory::getFactoryInstance()->getInstance(0)), captionAnimationHelper(new CaptionAnimationHelper(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(CaptionResources::getInstance()->RESOURCE)->getInstance(0),  -23,  -25, 6, 0)), rtsLogHelper(RTSLayerLogHelper::getInstance()), movementAngle(this->angleFactory->NOT_ANGLE), steeringInsideGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), sensorGeographicMapCellPositionList(new BasicArrayListD()), CAPITAL_EVENT(new CapitalEvent(this)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setCollidableInferface(new CollidableUnitBehavior(true));
    
this->waypointLayerInterfaceFactoryInterface= waypointLayerInterfaceFactoryInterface;
    
this->maxResourceLoad= maxResourceLoad;
    
this->moveSoundInterface= moveSoundInterface;
    

                        if(Features::getInstance()->isFeature(GameFeatureFactory::getInstance()->DAMAGE_FLOATERS))
                        
                                    {
                                    this->damageFloaters= new PtsDamageFloaters(this);
    
this->damageFloatersPaintableInterface= this->damageFloaters;
    

                                    }
                                
                        else {
                            this->damageFloatersPaintableInterface= NullPaintable::getInstance();
    
this->damageFloaters= new DamageFloaters();
    

                        }
                            

                        if(Features::getInstance()->isFeature(GameFeatureFactory::getInstance()->HEALTH_BARS))
                        
                                    {
                                    this->healthBar= new HealthBar(this, this->getHealthInterface(), new HealthBarTwodAnimation(dynamic_cast<AllBinaryLayer*>(this), BasicHudFactory::getInstance()->BOTTOMLEFT),  -1);
    

                                    }
                                
                        else {
                            this->healthBar= NullPaintable::getInstance();
    

                        }
                            
this->decalAnimation= dynamic_cast<RotationAnimation*>(decalAnimationInterfaceFactoryInterface->getInstance(0));
    
this->initResourceAnimation= dynamic_cast<RotationAnimation*>(resourceAnimationInterfaceFactoryInterface->getInstance(0));
    
this->initResourceAnimation->setFrameByDirection(direction);
    
this->decalAnimation->setFrameByDirection(direction);
    
this->rotationAnimationInterfaceP= dynamic_cast<RotationAnimation*>(this->indexedButShouldBeRotationAnimationInterface);
    
this->rotationAnimationInterfaceP->setFrameByDirection(direction);
    
this->setMaxLevel(12);
    
this->vehicleProperties= vehicleProperties;
    
this->trackingEvent= new TrackingEvent(this);
    
this->initPathAnimation= new PathAnimation(this, LinePathRelativeAnimation::getInstance());
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
AdvancedRTSGameLayer::setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    
this->initPathAnimation->setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::updateWaypointBehavior(BasicGeographicMap* geographicMapInterface) -> void{

    ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();;
    
hashtable->put(this->groupCommonFactory->ID, this->getGroupInterface());
    
hashtable->put(Layer::ID, this);
    
hashtable->put(AllBinaryGameLayerManager::ID, this->allBinaryGameLayerManagerP);
    
this->setWaypointBehavior(new UnitWaypointBehavior2(this, dynamic_cast<AdvancedRTSGameLayer*>(this->waypointLayerInterfaceFactoryInterface->getNextInstance(hashtable, this->x, this->y, this->z))));
    

    Features* features = Features::getInstance();;
    

    WaypointBase* waypoint = J2MEUtil::isHTML()
                        ?       
                                new MultipassNoCacheWaypoint(this, AttackSound::getInstance())
                                :

                            new NoCacheWaypoint(this, AttackSound::getInstance());;;
    
this->getWaypointBehavior()->setWaypoint(waypoint);
    
AdvancedRTSGameLayer::updateWaypointBehavior(geographicMapInterface);
    
this->initRangeHack();
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface) -> void{
AdvancedRTSGameLayer::construct(rtsPlayerLayerInterface);
    
TrackingEventHandler::getInstance()->addListenerInterface(this);
    
WaypointEventHandlerFactory::getInstance(this->getGroupInterface()[0])->addListenerInterface(this->getUnitWaypointBehavior());
    
BuildingEventHandler::getInstance()->addListenerInterface(this);
    
this->getUnitWaypointBehavior()->setCurrentPathGeographicMapCellPosition(this->getCurrentGeographicMapCellPosition());
    
this->updateSensorGeographicMapCellPositionList();
    
this->getUnitWaypointBehavior()->setLastPathGeographicMapCellPosition(this->getUnitWaypointBehavior()->getCurrentPathGeographicMapCellPosition());
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::updateSensorGeographicMapCellPositionList() -> void{

                        if(VisibleCellPositionsSingleton::getInstance()->shouldProcess())
                        
                                    {
                                    
    GeographicMapCellPosition* currentGeographicMapCellPosition = this->getCurrentGeographicMapCellPosition();;
    
this->sensorGeographicMapCellPositionList->clear();
    
this->sensorGeographicMapCellPositionList->add(currentGeographicMapCellPosition);
    

    int32_t sensorRange = this->weaponRange *UnitLayer::SENSOR_RANGE_MULTIPLIER;;
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer* tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    int32_t totalCells = (sensorRange /tiledLayer->getCellHeight()) /2;;
    

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    int32_t column = currentGeographicMapCellPosition->getColumn();;
    

    int32_t row = currentGeographicMapCellPosition->getRow();;
    

    int32_t lastColumn = column +totalCells;;
    

    int32_t lastRow = row +totalCells;;
    

                        if(lastColumn > tiledLayer->getColumns())
                        
                                    {
                                    lastColumn= tiledLayer->getColumns();
    

                                    }
                                

                        if(lastRow > tiledLayer->getRows())
                        
                                    {
                                    lastRow= tiledLayer->getRows();
    

                                    }
                                

    int32_t firstColumn = column -totalCells;;
    

    int32_t firstRow = row -totalCells;;
    

                        if(firstColumn < 0)
                        
                                    {
                                    firstColumn= 0;
    

                                    }
                                

                        if(firstRow < 0)
                        
                                    {
                                    firstRow= 0;
    

                                    }
                                




                        for (
    int32_t index = lastColumn -1;index >= firstColumn; index--)
        {




                        for (
    int32_t index2 = lastRow -1;index2 >= firstRow; index2--)
        {

    GeographicMapCellPosition* geographicMapCellPosition = geographicMapCellPositionFactory->getAt(index, index2);;
    

                        if(!this->sensorGeographicMapCellPositionList->contains(geographicMapCellPosition))
                        
                                    {
                                    this->sensorGeographicMapCellPositionList->add(geographicMapCellPosition);
    

                                    }
                                
}

}


                                    }
                                
}


    auto UnitLayer::getSensorGeographicMapCellPositionList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sensorGeographicMapCellPositionList;
    
}


    auto UnitLayer::select() -> void{
this->pathAnimation= this->initPathAnimation;
    
AdvancedRTSGameLayer::select();
    
}


    auto UnitLayer::deselect() -> void{
this->pathAnimation= NullAnimationFactory::getFactoryInstance()->getInstance(0);
    
AdvancedRTSGameLayer::deselect();
    
}


    auto UnitLayer::setSelected(bool selected) -> void{
AdvancedRTSGameLayer::setSelected(selected);
    

                        if(selected)
                        
                                    {
                                    
                        if(this->debug)
                        
                                    {
                                    this->rtsLogHelper= RTSLayerSelectedLogHelper::getInstance();
    

                                    }
                                
this->rtsLayer2LogHelper= RTSLayer2SelectedLogHelper::getInstance();
    

                                    }
                                
                        else {
                            
                        if(this->debug)
                        
                                    {
                                    this->rtsLogHelper= RTSLayerLogHelper::getInstance();
    

                                    }
                                
this->rtsLayer2LogHelper= RTSLayer2LogHelper::getInstance();
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::setClosestGeographicMapCellHistory(BasicArrayList* pathsList) -> void{
this->rtsLogHelper->setClosestGeographicMapCellHistory(this, pathsList);
    

    int32_t closestIndex =  -1;;
    

    int32_t shortestDistance = Integer.MAX_VALUE;;
    

    int32_t currentDistance = Integer.MAX_VALUE;;
    




                        for (
    int32_t index = pathsList->size() -1;index >= 0; index--)
        {

    BasicArrayList* geographicMapCellPositionBasicArrayList = dynamic_cast<BasicArrayList*>(pathsList->get(index));;
    

    GeographicMapCellPosition* geographicMapCellPosition = dynamic_cast<GeographicMapCellPosition*>(geographicMapCellPositionBasicArrayList->get(geographicMapCellPositionBasicArrayList->size() -1));;
    
currentDistance= this->layerDistanceUtil->getDistanceAt(this, geographicMapCellPosition->getMidPoint());
    

                        if(currentDistance < shortestDistance)
                        
                                    {
                                    shortestDistance= currentDistance;
    
closestIndex= index;
    

                                    }
                                
}


                        if(closestIndex >= 0)
                        
                                    {
                                    
    BasicArrayList* geographicMapCellPositionBasicArrayList = dynamic_cast<BasicArrayList*>(pathsList->get(closestIndex));;
    

    GeographicMapCellPosition* geographicMapCellPosition = dynamic_cast<GeographicMapCellPosition*>(geographicMapCellPositionBasicArrayList->get(0));;
    
this->teleportTo(geographicMapCellPosition);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::init(GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList) -> void{
geographicMapCellHistory->trackAll(geographicMapCellPositionBasicArrayList);
    
}


    auto UnitLayer::onMovement(TrackingEvent* trackingEvent) -> void{

        try {
            
    AdvancedRTSGameLayer* layerInterface = dynamic_cast<AdvancedRTSGameLayer*>(trackingEvent->getLayerInterface());;
    

                        if(layerInterface->getGroupInterface()[0] != this->getGroupInterface()[0])
                        
                                    {
                                    this->getUnitWaypointBehavior()->getPossibleTargetList()->add(layerInterface);
    
layerInterface->onMovementFound(this->getTrackingEvent());
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onMovement", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::onMovementFound(TrackingEvent* trackingEvent) -> void{

    AdvancedRTSGameLayer* layerInterface = dynamic_cast<AdvancedRTSGameLayer*>(trackingEvent->getLayerInterface());;
    

                        if(layerInterface->getGroupInterface()[0] != this->getGroupInterface()[0])
                        
                                    {
                                    this->getUnitWaypointBehavior()->getPossibleTargetList()->add(layerInterface);
    

                                    }
                                
}


    auto UnitLayer::initRangeHack() -> void{

    BasicWeaponPart* basicWeaponPart = dynamic_cast<BasicWeaponPart*>(this->getPartInterfaceArray()[0]);;
    

    WeaponProperties* weaponProperties = basicWeaponPart->getWeaponProperties();;
    
this->weaponRange= weaponProperties->getRange();
    
this->initRangeAnimation= AdjustedCircleAnimation::createW(this->weaponRange, this->weaponRange, this->getWidth(), this->basicColorFactory->GREEN);
    

    int32_t sensorRange = this->weaponRange *UnitLayer::SENSOR_RANGE_MULTIPLIER;;
    
this->initSensorRangeAnimation= AdjustedCircleAnimation::createW(sensorRange, sensorRange, this->getWidth(), this->basicColorFactory->RED);
    
this->getUnitWaypointBehavior()->initRange(this->weaponRange);
    
this->fireTimeHelper->delay= (static_cast<int32_t>(weaponProperties->getReloadTime()));
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::processBuiltTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{

                        if(!this->getHealthInterface()->isAlive())
                        
                                    {
                                    
                        if(this->isReadyForExplosion())
                        
                                    {
                                    
    int32_t currentFrame = this->destroyAnimationInterface->getFrame();;
    

    int32_t size = this->destroyAnimationInterface->getSize() -1;;
    

                        if(currentFrame == size)
                        
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
    
this->setReadyForExplosion(true);
    

                        }
                            

                                    }
                                
                        else {
                            AdvancedRTSGameLayer::processBuiltTick(allBinaryLayerManager);
    

                        }
                            
this->captionAnimationHelper->tick();
    
this->getUnitWaypointBehavior()->processTick(allBinaryLayerManager);
    
}


    auto UnitLayer::teleportTo(GeographicMapCellPosition* geographicMapCellPosition) -> void{

    GPoint* point = geographicMapCellPosition->getMidPoint();;
    
this->setPosition(point->getX() -this->getHalfWidth(), point->getY() -this->getHalfHeight(), this->z);
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::getCurrentGeographicMapCellPosition() -> GeographicMapCellPosition*{

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    GeographicMapCellPosition* geographicMapCellPosition = geographicMapInterface->getCellPositionAtXY(this->x +this->getHalfWidth(), this->y +this->getHalfHeight());;
    

    RaceTrackGeographicMap* raceTrackGeographicMap = dynamic_cast<RaceTrackGeographicMap*>(geographicMapInterface);;
    

                        if(!raceTrackGeographicMap->isValid(geographicMapCellPosition))
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("Position is not really on the map: ") +JavaString::valueOf(geographicMapCellPosition));
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPosition;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::fire(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{

                        if(this->fireTimeHelper->isTimeTNT())
                        
                                    {
                                    this->fireAll(layerManager);
    

                                    }
                                
                        else {
                            this->reload();
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::left() -> void{
this->initResourceAnimation->previousRotation();
    
this->decalAnimation->previousRotation();
    
this->rotationAnimationInterfaceP->previousRotation();
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::right() -> void{
this->initResourceAnimation->nextRotation();
    
this->decalAnimation->nextRotation();
    
this->rotationAnimationInterfaceP->nextRotation();
    
}


    auto UnitLayer::down() -> void{

    VelocityProperties* velocityProperties = this->getVehicleProperties()->getVelocityProperties();;
    

                        if(!velocityProperties->isOverXYMaxForwardVelocity())
                        
                                    {
                                    this->accelerate(this->decelerationBasicDecimal);
    

                                    }
                                
}


    auto UnitLayer::up() -> void{

    VelocityProperties* velocityProperties = this->getVehicleProperties()->getVelocityProperties();;
    

                        if(!velocityProperties->isOverXYMaxForwardVelocity())
                        
                                    {
                                    this->accelerate(this->accelerationBasicDecimal);
    

                                    }
                                
}


    auto UnitLayer::initInputProcessors() -> void{
this->inputProcessorArray[Canvas::RIGHT]= new SpecialRightGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::LEFT]= new SpecialLeftGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_NUM0]= new SpecialFireGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_POUND]= this->inputProcessorArray[Canvas::KEY_NUM0];
    
this->inputProcessorArray[Canvas::DOWN]= new SpecialDownGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::UP]= new SpecialUpGameInputProcessor(this);
    
AdvancedRTSGameLayer::initInputProcessors();
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::processInput(AllBinaryLayerManager* layerManager) -> void{

    BasicArrayList* list = this->getGameKeyEventList();;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = JavaBoxes::toObject(list->get(index));;
    

    int32_t key = GameKeyEventUtil::getKey(anyType);;
    
this->inputProcessorArray[key].processEvent(layerManager, GameKeyEvent::NONE);
    
}

list->clear();
    
this->groundFriction();
    
this->move();
    
}


    auto UnitLayer::accelerate(BasicDecimal* accelerate) -> void{
this->getVehicleProperties()->getVelocityProperties()->addVelocityi(accelerate->getUnscaled(), static_cast<int32_t>(this->rotationAnimationInterfaceP->getAngleInfoP()->getAngle()), 90);
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::fireAll(AllBinaryLayerManager* layerManager) -> void{

    AngleInfo* angleInfo = this->rotationAnimationInterfaceP->getAngleInfoP();;
    

    int32_t angle = static_cast<int32_t>((angleInfo->getAngle() +this->slightAngle));;
    
this->hashtable->put(SmallIntegerSingletonFactory::getInstance()->getAt(1), SmallIntegerSingletonFactory::getInstance()->getAt(static_cast<int32_t>(AngleFactory::getInstance()->getAt(angle)->getValue())));
    

    SalvoInterface* salvoInterface = dynamic_cast<SalvoInterface*>(this->getPartInterfaceArray()[0]);;
    
salvoInterface->process(layerManager, angle, 90);
    
}


    auto UnitLayer::downgrade() -> void{

                        if(this->getLevel() > 1)
                        
                                    {
                                    AdvancedRTSGameLayer::downgrade();
    

                                    }
                                
}


    auto UnitLayer::upgrade() -> void{
AdvancedRTSGameLayer::upgrade();
    
this->initRangeHack();
    
}


    auto UnitLayer::groundFriction() -> void{

    VehicleFrictionProperties* vehicleFrictionProperties = this->getVehicleProperties()->getVehicleFrictionProperties();;
    
this->getVehicleProperties()->getVehicleFrictionProperties()->friction(this->getVehicleProperties()->getVelocityProperties(), vehicleFrictionProperties->getTireFrictionNominator());
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::trackTo(std::string reason) -> void{

    WaypointBehaviorBase* waypointBehaviorBase = dynamic_cast<WaypointBehaviorBase*>(this->waypointBehaviorBase);;
    

    GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition = waypointBehaviorBase->getNextUnvisitedPathGeographicMapCellPosition();;
    

    GPoint* point = nextUnvisitedPathGeographicMapCellPosition->getMidPoint();;
    

    int32_t dx = (this->getXP() +this->getHalfWidth()) -point->getX();;
    

    int32_t dy = (this->getYP() +this->getHalfHeight()) -point->getY();;
    
this->rtsLogHelper->trackTo(this, nextUnvisitedPathGeographicMapCellPosition, dx, dy, reason);
    
this->trackToDXY(dx, dy);
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::trackToDXY(int32_t dx, int32_t dy) -> void{

    int32_t angleOfTarget = 0;;
    
this->trackToDXYTargetAngle(dx, dy, angleOfTarget);
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::turnTo(int32_t dx, int32_t dy, int32_t targetAngle) -> bool{

    WaypointBehaviorBase* waypointBehaviorBase = dynamic_cast<WaypointBehaviorBase*>(this->waypointBehaviorBase);;
    

    GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition = waypointBehaviorBase->getNextUnvisitedPathGeographicMapCellPosition();;
    

    bool evading = false;;
    

                        if(this->getUnitWaypointBehavior()->getSensorAction() == SensorActionFactory::getInstance()->EVADE)
                        
                                    {
                                    this->rtsLogHelper->evade(this);
    
evading= true;
    
targetAngle += 180;
    

                                    }
                                

    AngleInfo* angleInfo = this->rotationAnimationInterfaceP->getAngleInfoP();;
    

    int32_t angle = FrameUtil::getInstance()->adjustAngleToFrameAngle(angleInfo->getAngle() -270);;
    
this->rtsLogHelper->turnTo(this, dx, dy, angleInfo, angle, this->movementAngle, evading, targetAngle);
    

    GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory::getInstance();;
    

                        if(dx == 0 && dy == 0)
                        
                                    {
                                    this->rtsLogHelper->doneMoving(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if((static_cast<int32_t>(this->movementAngle->getValue())) == angle)
                        
                                    {
                                    
                        if(dx > 0 && this->movementAngle == this->angleFactory->LEFT)
                        
                                    {
                                    this->rtsLogHelper->movingLeft(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(dx < 0 && this->movementAngle == this->angleFactory->RIGHT)
                        
                                    {
                                    this->rtsLogHelper->movingRight(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(dy > 0 && this->movementAngle == this->angleFactory->UP)
                        
                                    {
                                    this->rtsLogHelper->movingUp(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(dy < 0 && this->movementAngle == this->angleFactory->DOWN)
                        
                                    {
                                    this->rtsLogHelper->movingDown(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
this->rtsLogHelper->currentMoveEnded(this);
    

                        if(this->movementAngle == this->angleFactory->LEFT || this->movementAngle == this->angleFactory->RIGHT)
                        
                                    {
                                    this->handleDeltalY(dx, dy);
    

                                    }
                                
                             else 
                        if(this->movementAngle == this->angleFactory->UP || this->movementAngle == this->angleFactory->DOWN)
                        
                                    {
                                    this->handleDeltalX(dx, dy);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            
                        if(nextUnvisitedPathGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
                        if(this->steeringInsideGeographicMapCellPosition != nextUnvisitedPathGeographicMapCellPosition)
                        
                                    {
                                    
                        if(Math::abs(dx) > Math::abs(dy) && dy != 0)
                        
                                    {
                                    this->handleDeltalY(dx, dy);
    

                                    }
                                
                             else 
                        if(dx != 0)
                        
                                    {
                                    this->handleDeltalX(dx, dy);
    

                                    }
                                
                        else {
                            this->handleDeltalY(dx, dy);
    

                        }
                            

                                    }
                                

    int32_t deltaAngle2 = this->movementAngle->getValue() -angle;;
    

                        if(deltaAngle2 > 0)
                        
                                    {
                                    this->rtsLogHelper->rotateRight(this);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::RIGHT));
    

                                    }
                                
                        else {
                            this->rtsLogHelper->rotateLeft(this);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::LEFT));
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            this->rtsLogHelper->noRotation(this);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto UnitLayer::handleDeltalX(int32_t dx, int32_t dy) -> void{

    WaypointBehaviorBase* waypointBehaviorBase = dynamic_cast<WaypointBehaviorBase*>(this->waypointBehaviorBase);;
    

    GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition = waypointBehaviorBase->getNextUnvisitedPathGeographicMapCellPosition();;
    

                        if(dx > 0)
                        
                                    {
                                    this->movementAngle= this->angleFactory->LEFT;
    
this->steeringInsideGeographicMapCellPosition= nextUnvisitedPathGeographicMapCellPosition;
    

                                    }
                                
                        else {
                            this->movementAngle= this->angleFactory->RIGHT;
    
this->steeringInsideGeographicMapCellPosition= nextUnvisitedPathGeographicMapCellPosition;
    

                        }
                            
this->rtsLogHelper->handle(this, this->movementAngle);
    
}


    auto UnitLayer::handleDeltalY(int32_t dx, int32_t dy) -> void{

    WaypointBehaviorBase* waypointBehaviorBase = dynamic_cast<WaypointBehaviorBase*>(this->waypointBehaviorBase);;
    

    GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition = waypointBehaviorBase->getNextUnvisitedPathGeographicMapCellPosition();;
    

                        if(dy > 0)
                        
                                    {
                                    this->movementAngle= this->angleFactory->UP;
    
this->steeringInsideGeographicMapCellPosition= nextUnvisitedPathGeographicMapCellPosition;
    

                                    }
                                
                        else {
                            this->movementAngle= this->angleFactory->DOWN;
    
this->steeringInsideGeographicMapCellPosition= nextUnvisitedPathGeographicMapCellPosition;
    

                        }
                            
this->rtsLogHelper->handle(this, this->movementAngle);
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::trackToDXYTargetAngle(int32_t dx, int32_t dy, int32_t targetAngle) -> void{

    BasicArrayList* list = this->getUnitWaypointBehavior()->getSteeringVisitorList();;
    

                        if(list->size() > 0)
                        
                                    {
                                    



                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

    SteeringVisitor* steeringVisitor = dynamic_cast<SteeringVisitor*>(list->get(index));;
    

    Object* anyType = JavaBoxes::toObject(steeringVisitor->visit(this));;
    

                        if(anyType == 
                                    nullptr
                                )
                        
                                    {
                                    list->removeAt(index);
    

                                    }
                                
}

this->fireOrMove();
    

                                    }
                                
                             else 
                        if(!this->turnTo(dx, dy, targetAngle))
                        
                                    {
                                    this->fireOrMove();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::fireOrMove() -> void{

    GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory::getInstance();;
    

                        if(this->getUnitWaypointBehavior()->needToMove())
                        
                                    {
                                    this->rtsLayer2LogHelper->steeringUp(this);
    

                        if(this->showMoreCaptionStates && !this->captionAnimationHelper->isShowing())
                        
                                    {
                                    this->captionAnimationHelper->update(UnitLayer::MOVE, this->basicColorFactory->GREEN);
    

                                    }
                                
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::UP));
    

                                    }
                                
                        else {
                            this->captionAnimationHelper->update(CommonPhoneStrings::getInstance()->FIRE, this->basicColorFactory->RED);
    
this->rtsLayer2LogHelper->steeringFireOrStop(this);
    
this->allStop();
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::KEY_NUM0));
    
TrackingEventHandler::getInstance()->fireEvent(this->getTrackingEvent());
    

                        }
                            
}


    auto UnitLayer::move() -> void{

        try {
            
    VelocityProperties* velocityProperties = this->getVehicleProperties()->getVelocityProperties();;
    

    int64_t velocityXScaled = velocityProperties->getVelocityXBasicDecimalP()->getScaled();;
    

    int64_t velocityYScaled = velocityProperties->getVelocityYBasicDecimalP()->getScaled();;
    
this->getUnitWaypointBehavior()->move();
    

                        if(velocityXScaled != 0 || velocityYScaled != 0)
                        
                                    {
                                    this->getUnitWaypointBehavior()->setMoving(true);
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->layerPartialCellPositionsUtil->getAllDXY(geographicMapInterface, this, static_cast<int32_t>(velocityXScaled), static_cast<int32_t>(velocityYScaled), UnitLayer::getPartialpositionlist());
    

    GeographicMapCellPosition* cellPosition = dynamic_cast<GeographicMapCellPosition*>(DropCellPositionHistory::getInstance()->getCellPositionWithDrop(UnitLayer::getPartialpositionlist()));;
    

                        if(cellPosition == this->cellPositionFactory->NONE)
                        
                                    {
                                    
    AllBinaryTiledLayer* tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    TiledLayerUtil* tiledLayerUtil = TiledLayerUtil::getInstance();;
    

    int32_t x = this->x +static_cast<int32_t>(velocityXScaled);;
    

    int32_t y = this->y +static_cast<int32_t>(velocityYScaled);;
    
x= tiledLayerUtil->keepOnMapX(tiledLayer, x, this->getWidth());
    
y= tiledLayerUtil->keepOnMapY(tiledLayer, y, this->getHeight());
    
this->setPosition(x, y, this->z);
    

                                    }
                                
                        else {
                            
    AllBinaryLayer* allbinaryLayer = DropCellPositionHistory::getInstance()->getLayerInterface(cellPosition);;
    
this->getUnitWaypointBehavior()->setMovingFromStopped(false);
    
this->getUnitWaypointBehavior()->addBuildingChase(allbinaryLayer, cellPosition);
    

                        }
                            

                                    }
                                

                        if(this->getUnitWaypointBehavior()->isMoving())
                        
                                    {
                                    TrackingEventHandler::getInstance()->fireEvent(this->getTrackingEvent());
    

                                    }
                                
                        else {
                            this->getUnitWaypointBehavior()->setMovingFromStopped(false);
    

                        }
                            

                        if(this->getUnitWaypointBehavior()->isMovingFromStopped() && this->isVisible())
                        
                                    {
                                    SecondaryPlayerQueueFactory::getInstance()->add(this->moveSoundInterface);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "move", &e);
    
}

}


    auto UnitLayer::allStop() -> void{

    VelocityProperties* velocityProperties = this->getVehicleProperties()->getVelocityProperties();;
    
velocityProperties->getVelocityXBasicDecimalP()->setint(0);
    
velocityProperties->getVelocityYBasicDecimalP()->setint(0);
    
}


    auto UnitLayer::paint(Graphics* graphics) -> void{

                        if(this->isVisible())
                        
                                    {
                                    AdvancedRTSGameLayer::paint(graphics);
    

    ViewPositionBase* viewPosition = this->getViewPosition();;
    

    int32_t viewX = viewPosition->getX();;
    

    int32_t viewY = viewPosition->getY();;
    
this->decalAnimation->paintXY(graphics, viewX, viewY);
    
this->rangeAnimation->paintXY(graphics, viewX, viewY);
    
this->sensorRangeAnimation->paintXY(graphics, viewX, viewY);
    
this->damageFloatersPaintableInterface->paint(graphics);
    
this->healthBar->paint(graphics);
    
this->captionAnimationHelper->paintXY(graphics, viewX, viewY);
    
this->pathAnimation->paintXY(graphics, viewX, viewY);
    
this->resourceAnimation->paintXY(graphics, viewX, viewY);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::onBuildingEvent(RTSLayerEvent* event) -> void{

    BuildingLayer* buildingLayer = dynamic_cast<BuildingLayer*>(event->getRtsLayer());;
    
this->getUnitWaypointBehavior()->moveAwayFromBuilding(buildingLayer);
    
}


    auto UnitLayer::getVehicleProperties() -> VehicleProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vehicleProperties;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::damage(int32_t damage, int32_t damageType) -> void{
AdvancedRTSGameLayer::damage(damage, damageType);
    
this->damageFloaters->add(damage);
    

                        if(damage > 0)
                        
                                    {
                                    this->getHealthInterface()->damage(damage);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::getDamage(int32_t damageType) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::setDestroyed(bool destroyed) -> void{
this->logUtil->putF(this->commonStrings->START, this, "setDestroyed");
    
AdvancedRTSGameLayer::setDestroyed(destroyed);
    

                        if(this->isDestroyed())
                        
                                    {
                                    WaypointEventHandlerFactory::getInstance(this->getGroupInterface()[0])->removeListener(this->getUnitWaypointBehavior());
    
TrackingEventHandler::getInstance()->removeListener(this);
    
BuildingEventHandler::getInstance()->removeListener(this);
    

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


    auto UnitLayer::getLoad() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->resourceLoad;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::clearResourceAnimation() -> void{
this->resourceAnimation= dynamic_cast<IndexedAnimation*>(NullIndexedAnimationFactory::getFactoryInstance()->getInstance(0));
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::setLoad(int32_t resource) -> void{

                        if(resource > 0)
                        
                                    {
                                    this->resourceAnimation= this->initResourceAnimation;
    

                                    }
                                
                        else {
                            this->clearResourceAnimation();
    

                        }
                            
this->resourceLoad= resource;
    
}


    auto UnitLayer::addLoad(int32_t resource) -> void{
this->resourceLoad += resource;
    
}


                //@Throws(Exception.constructor)
            
    auto UnitLayer::handleCost(PathFindingLayerInterface* ownerLayer) -> void{

                        if(this->getLoad() > 0)
                        
                                    {
                                    this->CAPITAL_EVENT->setValue(this->getLoad());
    
CapitalEventHandlerFactory::getInstance(ownerLayer->getGroupInterface()[0])->fireEvent(this->CAPITAL_EVENT);
    
this->setLoad(0);
    

                                    }
                                
}


    auto UnitLayer::createHudPaintable() -> SelectionHudPaintable*{

    RTSLayerHudPaintable* rtsLayerHudPaintable = RTSLayerHudPaintable::getInstance();;
    
rtsLayerHudPaintable->setBasicColorP(this->allBinaryGameLayerManagerP->getForegroundBasicColor());
    
rtsLayerHudPaintable->setRtsLayer(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rtsLayerHudPaintable;
    
}


    auto UnitLayer::getHudPaintable() -> SelectionHudPaintable*{

    RTSLayerHudPaintable* rtsLayerHudPaintable = RTSLayerHudPaintable::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rtsLayerHudPaintable;
    
}


    auto UnitLayer::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


    auto UnitLayer::getStaticType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


    auto UnitLayer::getUnitWaypointBehavior() -> UnitWaypointBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<UnitWaypointBehavior*>(this->getWaypointBehavior());
    
}


    auto UnitLayer::getTrackingEvent() -> TrackingEvent*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->trackingEvent;
    
}


    auto UnitLayer::getCaptionAnimationHelper() -> CaptionAnimationHelperBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->captionAnimationHelper;
    
}


    auto UnitLayer::isSelfUpgradeable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto UnitLayer::getMaxResourceLoad() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxResourceLoad;
    
}


    auto UnitLayer::getPartialpositionlist() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UnitLayer::partialPositionList;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITLAYER_CPP
