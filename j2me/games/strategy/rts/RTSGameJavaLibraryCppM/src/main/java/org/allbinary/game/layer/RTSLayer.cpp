
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/RTSLayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/NullIndexedAnimationFactory.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>

      
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/identification/GroupFactory.h>

      
#include <org/allbinary/game/input/GameInputInterface.h>

      
#include <org/allbinary/game/input/GameInputProcessor.h>

      
#include <org/allbinary/game/input/GameInputProcessorUtil.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>

      
#include <org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/view/event/ViewPositionEventHandler.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/LayerDistanceUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSInterface.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayer2LogHelper.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionArea.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayerUtil.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"


                //@Throws(Exception.constructor)
            
    auto RTSLayer::createSimulatedInstance(RemoteInfo* remoteInfo) -> RTSLayer*{

    AnimationInterfaceFactoryInterface* nullAnimationInterfaceFactoryInterface = NullAnimationFactory::getFactoryInstance();;
    

    AnimationInterfaceFactoryInterface* nullIndexedAnimationInterfaceFactoryInterface = NullIndexedAnimationFactory::getFactoryInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new RTSLayer(RemoteInfo::REMOTE_INFO, GroupFactory::getInstance()->NULL_GROUP_ARRAY, StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING, Health::NULL_HEALTH, NullRTSFormInputFactory::getInstance(), nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, NullIndexedAnimationFactory::getFactoryInstance(), RectangleFactory::SINGLETON, 0, 0, new TileLayerPositionIntoViewPosition());
    
}


RTSLayer::RTSLayer(RemoteInfo* remoteInfo, std::vector<Group*> groupInterface, std::string rootName, std::string name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition) : MultiPlayerGameLayer(remoteInfo, groupInterface, name, rectangle, viewPosition), showMoreCaptionStates(this->debug), inputProcessorArray(std::vector<GameInputProcessor*>(InputFactory::getInstance()->MAX)), rtsLayer2LogHelper(RTSLayer2LogHelper::getInstance()), waypointLogHelperP(WaypointLogHelper::getInstance()), waypoint2LogHelperP(Waypoint2LogHelper::getInstance()), waypointRunnableLogHelperP(WaypointRunnableLogHelper::getInstance()), buildFrameTimeHelper(new TimeDelayHelper(50)), fireTimeHelper(new TimeDelayHelper(700)), hashtable(StdUtil::getInstance()->createHashtable()), healthInterface(Health::NULL_HEALTH), hackVerticleBuild(this->BUILD_VALUE), rtsLayerUtil(RTSLayerUtil::getInstance()), layerDistanceUtil(LayerDistanceUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initInputProcessors();
    
this->rootName= rootName;
    
this->healthInterface= healthInterface;
    
this->rtsFormInput= rtsFormInput;
    
this->setPosition(x, y, this->z);
    
this->verticleBuildAnimationInterface= dynamic_cast<IndexedAnimation*>(verticleBuildAnimationInterfaceFactoryInterface->getInstance(0));
    
this->buildAnimationInterface= buildAnimationInterfaceFactoryInterface->getInstance(0);
    
this->baseAnimationInterface= baseAnimationInterfaceFactoryInterface->getInstance(0);
    
this->emptyAnimationInterface= dynamic_cast<IndexedAnimation*>(emptyAnimationInterfaceFactoryInterface->getInstance(0));
    
this->indexedButShouldBeRotationAnimationInterface= dynamic_cast<IndexedAnimation*>(animationInterfaceFactoryInterface->getInstance(0));
    
this->initAnimationInterface= this->indexedButShouldBeRotationAnimationInterface;
    
this->destroyAnimationInterface= dynamic_cast<IndexedAnimation*>(proceduralAnimationInterfaceFactoryInterface->getInstanceAnimation(this->indexedButShouldBeRotationAnimationInterface));
    

    Animation* animation = NullAnimationFactory::getFactoryInstance()->getInstance(0);;
    
this->rangeAnimation= animation;
    
this->initRangeAnimation= animation;
    
this->sensorRangeAnimation= animation;
    
this->initSensorRangeAnimation= animation;
    
this->animationInterface= this->initAnimationInterface;
    
this->geographicMapCellPositionAreaBase= new GeographicMapCellPositionArea(this);
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
MultiPlayerGameLayer::setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer* tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    TileLayerPositionIntoViewPosition* viewPosition2 = dynamic_cast<TileLayerPositionIntoViewPosition*>(this->getViewPosition());;
    
viewPosition2->setTiledLayer(tiledLayer);
    
this->updateWaypointBehavior(geographicMapInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::updateWaypointBehavior(BasicGeographicMap* geographicMapInterface) -> void{
this->geographicMapCellPositionAreaBase->update(geographicMapInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface) -> void{
ViewPositionEventHandler::getInstance()->addListener(dynamic_cast<AllBinaryLayer*>(this));
    
this->animationInterface= this->buildAnimationInterface;
    
this->hackVerticleBuild= 0;
    
}


    auto RTSLayer::select() -> void{
this->rangeAnimation= this->initRangeAnimation;
    
this->sensorRangeAnimation= this->initSensorRangeAnimation;
    
this->setSelected(true);
    
}


    auto RTSLayer::deselect() -> void{

    Animation* animation = NullAnimationFactory::getFactoryInstance()->getInstance(0);;
    
this->rangeAnimation= animation;
    
this->sensorRangeAnimation= animation;
    
this->setSelected(false);
    
}


    auto RTSLayer::setSelected(bool selected) -> void{
this->selected= selected;
    
}


    auto RTSLayer::isSelected() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->selected;
    
}


    auto RTSLayer::getPercentComplete() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->percentCompleteP;
    
}


    auto RTSLayer::getScrollSelectionForm() -> ScrollSelectionForm*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ScrollSelectionForm::getNullScrollSelectionForm();;
    
}


    auto RTSLayer::initInputProcessors() -> void{
GameInputProcessorUtil::init(this->inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::processBuiltTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{
this->animationInterface= this->indexedButShouldBeRotationAnimationInterface;
    
}


    auto RTSLayer::processTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{

        try {
            
                        if(this->isCompleted())
                        
                                    {
                                    this->processBuiltTick(allBinaryLayerManager);
    

                                    }
                                
                        else {
                            this->build();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "processTick", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::processInput(AllBinaryLayerManager* layerManager) -> void{
}


    auto RTSLayer::reload() -> void{
}


    auto RTSLayer::onMovement(TrackingEvent* trackingEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::onMovementFound(TrackingEvent* trackingEvent) -> void{
}


    auto RTSLayer::paint(Graphics* graphics) -> void{
MultiPlayerGameLayer::paintFirst(graphics);
    

    ViewPositionBase* viewPosition = this->getViewPosition();;
    

    int32_t viewX = viewPosition->getX();;
    

    int32_t viewY = viewPosition->getY();;
    
this->getAnimationInterface()->paintXY(graphics, viewX, viewY);
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::damage(int32_t damage, int32_t damageType) -> void{
}


    auto RTSLayer::getSourceId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RTSLayer::id;
    
}


    auto RTSLayer::downgrade() -> void{
this->rtsLayerUtil->downgrade(this);
    
}


    auto RTSLayer::upgrade() -> void{
this->rtsLayerUtil->upgrade(this);
    
}


    auto RTSLayer::isCompleted() -> bool{

                        if(this->hackVerticleBuild < this->BUILD_VALUE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::build() -> void{

                        if(this->buildFrameTimeHelper->isTimeTNT())
                        
                                    {
                                    this->animationInterface= this->buildAnimationInterface;
    
this->verticleBuildAnimationInterface->nextFrame();
    
this->hackVerticleBuild++;
    

                                    }
                                
this->percentCompleteP= 100 *this->hackVerticleBuild /this->BUILD_VALUE;
    
this->getHudPaintable()->updateInfo();
    
}


    auto RTSLayer::isSelfUpgradeable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto RTSLayer::getCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rtsLayerUtil->getCost(this);;
    
}


    auto RTSLayer::getDowngradeCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rtsLayerUtil->getDowngradeCost(this);;
    
}


    auto RTSLayer::getUpgradeCost() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rtsLayerUtil->getUpgradeCost(this);;
    
}


    auto RTSLayer::isUpgradeable() -> bool{

                        if(this->getLevel() < this->getMaxLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto RTSLayer::isDowngradeable() -> bool{

                        if(this->getLevel() > 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto RTSLayer::getLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->level;
    
}


    auto RTSLayer::setLevel(int32_t level) -> void{
this->level= level;
    
}


    auto RTSLayer::getVerticleBuildAnimationInterface() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->verticleBuildAnimationInterface;
    
}


    auto RTSLayer::getAnimationInterface() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterface;
    
}


    auto RTSLayer::setAnimationInterface(Animation* animationInterface) -> void{
this->animationInterface= animationInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::setTarget(PathFindingLayerInterface* targetGameLayer) -> void{

    int32_t anotherTargetDistance = this->layerDistanceUtil->getDistance(dynamic_cast<AllBinaryLayer*>(this), dynamic_cast<AllBinaryLayer*>(targetGameLayer));;
    

    WaypointBehaviorBase* waypointBehaviorBase = this->getWaypointBehavior();;
    
waypointBehaviorBase->setTargetWithDistance(dynamic_cast<PathFindingLayerInterface*>(targetGameLayer), anotherTargetDistance);
    
}


    auto RTSLayer::createHudPaintable() -> SelectionHudPaintable*{



                            throw RuntimeException();
                    
}


    auto RTSLayer::getHudPaintable() -> SelectionHudPaintable*{



                            throw RuntimeException();
                    
}


    auto RTSLayer::getMaxLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxLevel;
    
}


    auto RTSLayer::setMaxLevel(int32_t maxLevel) -> void{
this->maxLevel= maxLevel;
    
}


    auto RTSLayer::getHealthInterface() -> Health*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->healthInterface;
    
}


    auto RTSLayer::setHealthInterface(Health* healthInterface) -> void{
this->healthInterface= healthInterface;
    
}


    auto RTSLayer::getRTSFormInput() -> RTSFormInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rtsFormInput;
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::isDestroyed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->destroyed;
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::setDestroyed(bool destroyed) -> void{
this->destroyed= destroyed;
    

                        if(this->isDestroyed())
                        
                                    {
                                    DestroyedLayerProcessor::getInstance()->add(this);
    
ViewPositionEventHandler::getInstance()->removeListener(this);
    

                                    }
                                
}


    auto RTSLayer::getEndGeographicMapCellPositionList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->geographicMapCellPositionAreaBase->getOccupyingGeographicMapCellPositionList();;
    
}


    auto RTSLayer::getGeographicMapCellPositionArea() -> GeographicMapCellPositionAreaBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->geographicMapCellPositionAreaBase;
    
}


    auto RTSLayer::shouldHandleStartSameAsEnd() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::handleCost(PathFindingLayerInterface* ownerLayer) -> void{
}


    auto RTSLayer::getWaypointBehavior() -> WaypointBehaviorBase*{



                            throw RuntimeException();
                    
}


    auto RTSLayer::getParentLayer() -> PathFindingLayerInterface*{



                            throw RuntimeException();
                    
}


    auto RTSLayer::getRTSLayer2LogHelper() -> RTSLayer2LogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rtsLayer2LogHelper;
    
}


    auto RTSLayer::getWaypointLogHelper() -> WaypointLogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->waypointLogHelperP;
    
}


    auto RTSLayer::getWaypoint2LogHelper() -> Waypoint2LogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->waypoint2LogHelperP;
    
}


    auto RTSLayer::getWaypointRunnableLogHelper() -> WaypointRunnableLogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->waypointRunnableLogHelperP;
    
}


    auto RTSLayer::shouldAddWaypointFromBuilding() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto RTSLayer::getCaptionAnimationHelper() -> CaptionAnimationHelperBase*{



                            throw RuntimeException();
                    
}


    auto RTSLayer::isShowMoreCaptionStates() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->showMoreCaptionStates;
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::init(GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList) -> void{
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::getCurrentGeographicMapCellPosition() -> GeographicMapCellPosition*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::getTopLeftGeographicMapCellPosition() -> GeographicMapCellPosition*{



                            throw RuntimeException();
                    
}


    auto RTSLayer::getMoveOutOfBuildAreaPath(GeographicMapCellPosition* geographicMapCellPosition) -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::setClosestGeographicMapCellHistory(BasicArrayList* pathsList) -> void{
}


    auto RTSLayer::teleportTo(GeographicMapCellPosition* geographicMapCellPosition) -> void{
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::setLoad(int32_t resource) -> void{
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::getSurroundingGeographicMapCellPositionList() -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::trackTo(std::string reason) -> void{
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::trackToDXY(int32_t dx, int32_t dy) -> void{
}


    auto RTSLayer::isWaypointListEmptyOrOnlyTargets() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto RTSLayer::getTrackingEvent() -> TrackingEvent*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayer::buildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto RTSLayer::allStop() -> void{
}


    auto RTSLayer::getMinStaticType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 1;
    
}


    auto RTSLayer::getMaxStaticType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 4;
    
}


    auto RTSLayer::isRTSLayer(AllBinaryLayer* layerInterface) -> bool{

                        if(layerInterface->getType() >= RTSLayer::getMinStaticType() && layerInterface->getType() <= RTSLayer::getMaxStaticType())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto RTSLayer::implmentsTickableInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto RTSLayer::implmentsGameInputInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto RTSLayer::getRootName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rootName;
    
}


    auto RTSLayer::getRotationAnimationInterface() -> RotationAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<RotationAnimation*>(this->indexedButShouldBeRotationAnimationInterface);
    
}


    auto RTSLayer::setFrame(int32_t index) -> void{
this->getRotationAnimationInterface()->setFrame(index);
    
}


    auto RTSLayer::setRotationAnimationInterface(RotationAnimation* rotationAnimationInterface) -> void{
this->indexedButShouldBeRotationAnimationInterface= rotationAnimationInterface;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYER_CPP
