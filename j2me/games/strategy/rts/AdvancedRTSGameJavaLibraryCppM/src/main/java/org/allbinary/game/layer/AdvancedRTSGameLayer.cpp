
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/NullIndexedAnimationFactory.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/transition/shake/ShakeAnimationListener.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/GameTypeFactory.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/identification/GroupFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventHandler.h>

      
#include <org/allbinary/game/layer/unit/UnitLayer.h>

      
#include <org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/Waypoint2SelectedLogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointRunnableSelectedLogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointSelectedLogHelper.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/game/tick/NullTickable.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/FrameUtil.h>

      
#include <org/allbinary/media/AllBinaryVibrationME.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/AdvancedRTSProperties.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#include "org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayerUtil.h"

class AdvancedRTSGameLayer: public RTSLayer, public DestroyedEventListenerInterface {

                //@Throws(Exception.constructor)
            
    public: static AdvancedRTSGameLayer* createSimulated(){

    AnimationInterfaceFactoryInterface* nullAnimationInterfaceFactoryInterface = NullAnimationFactory::getFactoryInstance();;
    

    AnimationInterfaceFactoryInterface* nullIndexedAnimationInterfaceFactoryInterface = NullIndexedAnimationFactory::getFactoryInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AdvancedRTSGameLayer(RemoteInfo::REMOTE_INFO, NullPathFindingLayer::NULL_PATH_FINDING_LAYER, AdvancedRTSProperties::createPropertiesSimulated(), GroupFactory::getInstance()->NULL_GROUP_ARRAY, StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING, Health::NULL_HEALTH, NullRTSFormInputFactory::getInstance(), nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, NullIndexedAnimationFactory::getFactoryInstance(), RectangleFactory::SINGLETON, 0, 0, new TileLayerPositionIntoViewPosition());
    
}


    protected: ShakeAnimationListener* shakeListener;

    protected: AllBinaryVibrationME* vibration;

    protected: int32_t duration;

    private: PathFindingLayerInterface* parentLayer = NullPathFindingLayer::NULL_PATH_FINDING_LAYER;

    protected: TickableInterface* waypointBehaviorBase = NullTickable::getInstance();

public: AdvancedRTSGameLayer(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, std::vector<Group*> groupInterface, std::string rootName, std::string name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition) : RTSLayer(remoteInfo, groupInterface, rootName, name, healthInterface, rtsFormInput, animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, viewPosition){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setVisible(false);
    
this->setWaypointBehavior(new WaypointBehaviorBase());
    
this->shakeListener= advancedRTSProperties->shakeListener;
    
this->vibration= advancedRTSProperties->vibration;
    
this->duration= advancedRTSProperties->duration;
    
this->setParentLayer(parentLayer);
    
}


                //@Throws(Exception.constructor)
            
    public: void updateWaypointBehavior(BasicGeographicMap* geographicMapInterface){
super.updateWaypointBehavior(geographicMapInterface);
    
this->getWaypointBehavior()->getWaypoint()->setAllBinaryGameLayerManager(this->allBinaryGameLayerManagerP);
    
}


    protected: void initVisibility(RTSPlayerLayerInterface* rtsPlayerLayerInterface){

    AdvancedRTSPlayerLayerInterface* advancedRTSPlayerLayerInterface = dynamic_cast<AdvancedRTSPlayerLayerInterface*>(rtsPlayerLayerInterface);;
    

                        if(advancedRTSPlayerLayerInterface->isLocalPlayer() || advancedRTSPlayerLayerInterface->getGameType() == GameTypeFactory::getInstance()->BOT)
                        
                                    {
                                    this->setVisible(true);
    

                                    }
                                
                        else {
                            this->setVisible(false);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface){
super.construct(rtsPlayerLayerInterface);
    
this->initVisibility(rtsPlayerLayerInterface);
    
BuildingEventHandler::getInstance()->addListenerInterface(this->getWaypointBehavior()->getWaypoint());
    
}


                //@Throws(Exception.constructor)
            
    public: void setDestroyed(bool destroyed){
super.setDestroyed(destroyed);
    

                        if(this->isDestroyed())
                        
                                    {
                                    BuildingEventHandler::getInstance()->removeListener(this->getWaypointBehavior()->getWaypoint());
    
BuildingEventHandler::getInstance()->removeListener(this);
    
DestroyedEventHandler::getInstance()->addListener(this);
    
RTSLayerUtil::getInstance()->destroyAndClear(this->getWaypointBehavior()->getOwnedWaypointList());
    

                                    }
                                
}


    public: PathFindingLayerInterface* getParentLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->parentLayer;
    
}


    public: void setParentLayer(PathFindingLayerInterface* parentLayer){
this->parentLayer= parentLayer;
    
}


    public: WaypointBehaviorBase* getWaypointBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<WaypointBehaviorBase*>(this->waypointBehaviorBase);
    
}


    protected: void setWaypointBehavior(WaypointBehaviorBase* unitWaypointHelper){
this->waypointBehaviorBase= unitWaypointHelper;
    
}


    public: WaypointLogHelper* getWaypointLogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointLogHelperP;
    
}


    public: Waypoint2LogHelper* getWaypoint2LogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypoint2LogHelperP;
    
}


    public: WaypointRunnableLogHelper* getWaypointRunnableLogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointRunnableLogHelperP;
    
}


    public: bool shouldAddWaypointFromBuilding(){

                        if(this->parentLayer != NullPathFindingLayer::NULL_PATH_FINDING_LAYER)
                        
                                    {
                                    
    AdvancedRTSGameLayer* parentAdvancedRTSGameLayer = dynamic_cast<AdvancedRTSGameLayer*>(this->parentLayer);;
    

                        if(parentAdvancedRTSGameLayer->getType() != UnitLayer::getStaticType())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isWaypointListEmptyOrOnlyTargets(){

                        if(this->getType() != UnitLayer::getStaticType())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: bool buildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition){

    GeographicMapCellPosition* geographicMapCellPosition = this->getCurrentGeographicMapCellPosition();;
    

    Direction* buildingDirection = GeographicMapDirectionUtil::getInstance()->getDirectionFromCellPositionToAdjacentCellPosition(geographicMapCellPosition, cellPosition);;
    

    AngleInfo* angleInfo = this->getRotationAnimationInterface()->getAngleInfoP();;
    

    int32_t angle = FrameUtil::getInstance()->adjustAngleToFrameAngle(angleInfo->getAngle() +90);;
    

    GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory::getInstance();;
    

                        if(buildingDirection == DirectionFactory::getInstance()->UP)
                        
                                    {
                                    this->rtsLayer2LogHelper.buildingAbove(this);
    

                        if(angle > 180 && angle < 360)
                        
                                    {
                                    this->rtsLayer2LogHelper.buildingChaseLeft(this, angle);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::LEFT));
    

                        if(angle <= 190)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            this->rtsLayer2LogHelper.buildingChaseRight(this, angle);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::RIGHT));
    

                        if(angle >= 170)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        }
                            

                                    }
                                
                             else 
                        if(buildingDirection == DirectionFactory::getInstance()->DOWN)
                        
                                    {
                                    this->rtsLayer2LogHelper.buildingDown(this);
    

                        if(angle > 180 && angle < 360)
                        
                                    {
                                    this->rtsLayer2LogHelper.buildingChaseLeft(this, angle);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::RIGHT));
    

                        if(angle > 315)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            this->rtsLayer2LogHelper.buildingChaseRight(this, angle);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::LEFT));
    

                        if(angle < 45)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        }
                            

                                    }
                                
                             else 
                        if(buildingDirection == DirectionFactory::getInstance()->LEFT)
                        
                                    {
                                    this->rtsLayer2LogHelper.buildingLeft();
    

                        if(angle > 90 && angle < 270)
                        
                                    {
                                    this->rtsLayer2LogHelper.buildingChaseDown(this, angle);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::LEFT));
    

                        if(angle < 135)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            this->rtsLayer2LogHelper.buildingChaseUp(this, angle);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::RIGHT));
    

                        if(angle > 45)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        }
                            

                                    }
                                
                             else 
                        if(buildingDirection == DirectionFactory::getInstance()->RIGHT)
                        
                                    {
                                    this->rtsLayer2LogHelper.buildingRight();
    

                        if(angle > 90 && angle < 270)
                        
                                    {
                                    this->rtsLayer2LogHelper.buildingChaseDown(this, angle);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::RIGHT));
    

                        if(angle > 225)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            this->rtsLayer2LogHelper.buildingChaseUp(this, angle);
    
this->getGameKeyEventList()->add(gameKeyEventFactory->getInstanceForKey(this, Canvas::LEFT));
    

                        if(angle < 315 && angle > 180)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getSurroundingGeographicMapCellPositionList(){

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->geographicMapCellPositionAreaBase.update(geographicMapInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionAreaBase.getSurroundingGeographicMapCellPositionList();;
    
}


    protected: void setSelected(bool selected){
super.setSelected(selected);
    

                        if(this->debug)
                        
                                    {
                                    
                        if(selected)
                        
                                    {
                                    this->waypointLogHelperP= WaypointSelectedLogHelper::getInstance();
    
this->waypoint2LogHelperP= Waypoint2SelectedLogHelper::getInstance();
    
this->waypointRunnableLogHelperP= WaypointRunnableSelectedLogHelper::getInstance();
    

                                    }
                                
                        else {
                            this->waypointLogHelperP= WaypointLogHelper::getInstance();
    
this->waypoint2LogHelperP= Waypoint2LogHelper::getInstance();
    
this->waypointRunnableLogHelperP= WaypointRunnableLogHelper::getInstance();
    

                        }
                            

                                    }
                                
}


    public: void onDestroyed(DestroyedEvent* destroyedEvent){

        try {
            
    AllBinaryLayer* layerInterface = destroyedEvent->getLayerInterface();;
    

                        if(layerInterface == this)
                        
                                    {
                                    DestroyedEventHandler::getInstance()->removeListener(this);
    

    WaypointBase* waypoint = dynamic_cast<WaypointBase*>(this->getWaypointBehavior()->getWaypoint());;
    
waypoint->reset();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "onDestroyed", &e);
    
}

}


};

            

