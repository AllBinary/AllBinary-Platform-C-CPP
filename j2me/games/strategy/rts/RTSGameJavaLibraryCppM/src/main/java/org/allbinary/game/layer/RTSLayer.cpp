
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
        



            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <java/util/Hashtable.h>

      
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSInterface.h"
#include "PathFindingLayerInterface.h"
#include "RTSLayer2LogHelper.h"
#include "GeographicMapCellPositionAreaBase.h"
#include "GeographicMapCellPositionArea.h"
#include "AllBinaryTiledLayer.h"
#include "AllBinaryGameLayerManager.h"
#include "RTSPlayerLayerInterface.h"
#include "RTSLayerUtil.h"
#include "WaypointBehaviorBase.h"
#include "SelectionHudPaintable.h"

class RTSLayer: public MultiPlayerGameLayer, public TickableInterface, public GameInputInterface, public GameKeyEventSourceInterface, public RTSInterface, public PathFindingLayerInterface {

                //@Throws(Exception.constructor)
            
    public: static RTSLayer createSimulatedInstance(RemoteInfo remoteInfo){

    AnimationInterfaceFactoryInterface nullAnimationInterfaceFactoryInterface = NullAnimationFactory::getFactoryInstance();;
    

    AnimationInterfaceFactoryInterface nullIndexedAnimationInterfaceFactoryInterface = NullIndexedAnimationFactory::getFactoryInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayer(RemoteInfo::REMOTE_INFO, GroupFactory::getInstance().NULL_GROUP_ARRAY, StringUtil::getInstance().EMPTY_STRING, StringUtil::getInstance().EMPTY_STRING, Health::NULL_HEALTH, NullRTSFormInputFactory::getInstance(), nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, NullIndexedAnimationFactory::getFactoryInstance(), RectangleFactory::SINGLETON, 0, 0, TileLayerPositionIntoViewPosition());
    
}


    private: static const int32_t id = 0;

    protected: static const int32_t MAIN_INDEX = 0;

    protected: static const int32_t SECONDARY_INDEX = 1;

    public: static int32_t getMinStaticType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


    public: static int32_t getMaxStaticType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 4;
    
}


    public: static bool isRTSLayer(AllBinaryLayer layerInterface){

                        if(layerInterface.getType() >= RTSLayer::getMinStaticType() && layerInterface.getType() <= RTSLayer::getMaxStaticType())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    protected: const bool debug = true;

    public: const bool showMoreCaptionStates = this->debug;

    protected: const std::vector<GameInputProcessor> inputProcessorArray = new Array(InputFactory::getInstance().MAX);

    public: RTSLayer2LogHelper rtsLayer2LogHelper = RTSLayer2LogHelper::getInstance();

    public: WaypointLogHelper waypointLogHelperP = WaypointLogHelper::getInstance();

    public: Waypoint2LogHelper waypoint2LogHelperP = Waypoint2LogHelper::getInstance();

    public: WaypointRunnableLogHelper waypointRunnableLogHelperP = WaypointRunnableLogHelper::getInstance();

    private: RTSFormInput rtsFormInput;

    private: IndexedAnimation verticleBuildAnimationInterface;

    protected: Animation rangeAnimation;

    protected: Animation initRangeAnimation;

    protected: Animation sensorRangeAnimation;

    protected: Animation initSensorRangeAnimation;

    protected: Animation baseAnimationInterface;

    private: const TimeDelayHelper buildFrameTimeHelper = TimeDelayHelper(50);

    private: Animation buildAnimationInterface;

    private: Animation animationInterface;

    protected: IndexedAnimation initAnimationInterface;

    protected: IndexedAnimation indexedButShouldBeRotationAnimationInterface;

    protected: IndexedAnimation emptyAnimationInterface;

    protected: IndexedAnimation destroyAnimationInterface;

    protected: const TimeDelayHelper fireTimeHelper = TimeDelayHelper(700);

    private: std::string rootName;

    protected: const Hashtable<any, any> hashtable = StdUtil::getInstance().createHashtable();

    private: const int32_t BUILD_VALUE = 63;

    public: GeographicMapCellPositionAreaBase geographicMapCellPositionAreaBase;

    private: Health healthInterface = Health::NULL_HEALTH;

    private: int32_t level = 1;

    private: int32_t maxLevel = 1;

    private: int32_t hackVerticleBuild = this->BUILD_VALUE;

    protected: int32_t slightAngle = 0;

    protected: int32_t percentCompleteP= 0;

    private: bool destroyed = false;

    private: bool selected = false;

protected: RTSLayer(RemoteInfo remoteInfo, std::vector<Group> groupInterface, std::string rootName, std::string name, Health healthInterface, RTSFormInput rtsFormInput, AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface proceduralAnimationInterfaceFactoryInterface, Rectangle rectangle, int32_t x, int32_t y, ViewPositionBase viewPosition){
            super(remoteInfo, groupInterface, name, rectangle, viewPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initInputProcessors();
    
this->rootName= rootName;
    
this->healthInterface= healthInterface;
    
this->rtsFormInput= rtsFormInput;
    
this->setPosition(x, y, this->z);
    
this->verticleBuildAnimationInterface= verticleBuildAnimationInterfaceFactoryInterface.getInstance(0) as IndexedAnimation;
    
this->buildAnimationInterface= buildAnimationInterfaceFactoryInterface.getInstance(0);
    
this->baseAnimationInterface= baseAnimationInterfaceFactoryInterface.getInstance(0);
    
this->emptyAnimationInterface= emptyAnimationInterfaceFactoryInterface.getInstance(0) as IndexedAnimation;
    
this->indexedButShouldBeRotationAnimationInterface= animationInterfaceFactoryInterface.getInstance(0) as IndexedAnimation;
    
this->initAnimationInterface= this->indexedButShouldBeRotationAnimationInterface;
    
this->destroyAnimationInterface= proceduralAnimationInterfaceFactoryInterface.getInstanceAnimation(this->indexedButShouldBeRotationAnimationInterface) as IndexedAnimation;
    

    Animation animation = NullAnimationFactory::getFactoryInstance().getInstance(0);;
    
this->rangeAnimation= animation;
    
this->initRangeAnimation= animation;
    
this->sensorRangeAnimation= animation;
    
this->initSensorRangeAnimation= animation;
    
this->animationInterface= this->initAnimationInterface;
    
this->geographicMapCellPositionAreaBase= GeographicMapCellPositionArea(this);
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface geographicMapCompositeInterface = this->allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer tiledLayer = geographicMapInterface.getAllBinaryTiledLayer();;
    

    TileLayerPositionIntoViewPosition viewPosition2 = this->getViewPosition() as TileLayerPositionIntoViewPosition;;
    
viewPosition2.setTiledLayer(tiledLayer);
    
this->updateWaypointBehavior(geographicMapInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void updateWaypointBehavior(BasicGeographicMap geographicMapInterface){
this->geographicMapCellPositionAreaBase.update(geographicMapInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void construct(RTSPlayerLayerInterface rtsPlayerLayerInterface){
ViewPositionEventHandler::getInstance().addListener(this as AllBinaryLayer);
    
this->animationInterface= this->buildAnimationInterface;
    
this->hackVerticleBuild= 0;
    
}


    public: void select(){
this->rangeAnimation= this->initRangeAnimation;
    
this->sensorRangeAnimation= this->initSensorRangeAnimation;
    
this->setSelected(true);
    
}


    public: void deselect(){

    Animation animation = NullAnimationFactory::getFactoryInstance().getInstance(0);;
    
this->rangeAnimation= animation;
    
this->sensorRangeAnimation= animation;
    
this->setSelected(false);
    
}


    protected: void setSelected(bool selected){
this->selected= selected;
    
}


    public: bool isSelected(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selected;
    
}


    public: int32_t getPercentComplete(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->percentCompleteP;
    
}


    public: ScrollSelectionForm getScrollSelectionForm(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScrollSelectionForm::getNullScrollSelectionForm();;
    
}


    public: void initInputProcessors(){
GameInputProcessorUtil::init(this->inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    public: void processBuiltTick(AllBinaryLayerManager allBinaryLayerManager){
this->animationInterface= this->indexedButShouldBeRotationAnimationInterface;
    
}


    public: void processTick(AllBinaryLayerManager allBinaryLayerManager){

        try {
            
                        if(this->isCompleted())
                        
                                    {
                                    this->processBuiltTick(allBinaryLayerManager);
    

                                    }
                                
                        else {
                            this->build();
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "processTick", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager layerManager){
}


    protected: void reload(){
}


    public: void onMovement(TrackingEvent trackingEvent){
}


                //@Throws(Exception.constructor)
            
    public: void onMovementFound(TrackingEvent trackingEvent){
}


    public: void paint(Graphics graphics){
super.paintFirst(graphics);
    

    ViewPositionBase viewPosition = this->getViewPosition();;
    

    int32_t viewX = viewPosition.getX();;
    

    int32_t viewY = viewPosition.getY();;
    
this->getAnimationInterface().paintXY(graphics, viewX, viewY);
    
}


                //@Throws(Exception.constructor)
            
    public: void damage(int32_t damage, int32_t damageType){
}


    public: int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayer::id;
    
}


    private: const RTSLayerUtil rtsLayerUtil = RTSLayerUtil::getInstance();

    public: void downgrade(){
this->rtsLayerUtil.downgrade(this);
    
}


    public: void upgrade(){
this->rtsLayerUtil.upgrade(this);
    
}


    public: bool isCompleted(){

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
            
    private: void build(){

                        if(this->buildFrameTimeHelper.isTimeTNT())
                        
                                    {
                                    this->animationInterface= this->buildAnimationInterface;
    
this->verticleBuildAnimationInterface.nextFrame();
    
this->hackVerticleBuild++;
    

                                    }
                                
this->percentCompleteP= 100 *this->hackVerticleBuild /this->BUILD_VALUE;
    
this->getHudPaintable().updateInfo();
    
}


    public: bool isSelfUpgradeable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: int32_t getCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsLayerUtil.getCost(this);;
    
}


    public: int32_t getDowngradeCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsLayerUtil.getDowngradeCost(this);;
    
}


    public: int32_t getUpgradeCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsLayerUtil.getUpgradeCost(this);;
    
}


    public: bool isUpgradeable(){

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


    public: bool isDowngradeable(){

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


    public: int32_t getLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->level;
    
}


    public: void setLevel(int32_t level){
this->level= level;
    
}


    public: Animation getVerticleBuildAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->verticleBuildAnimationInterface;
    
}


    public: Animation getAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    public: void setAnimationInterface(Animation animationInterface){
this->animationInterface= animationInterface;
    
}


    private: const LayerDistanceUtil layerDistanceUtil = LayerDistanceUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void setTarget(PathFindingLayerInterface targetGameLayer){

    int32_t anotherTargetDistance = this->layerDistanceUtil.getDistance(this as AllBinaryLayer, targetGameLayer as AllBinaryLayer);;
    

    WaypointBehaviorBase waypointBehaviorBase = this->getWaypointBehavior();;
    
waypointBehaviorBase.setTargetWithDistance(targetGameLayer as PathFindingLayerInterface, anotherTargetDistance);
    
}


    public: SelectionHudPaintable createHudPaintable(){



                            throw RuntimeException();
                    
}


    public: SelectionHudPaintable getHudPaintable(){



                            throw RuntimeException();
                    
}


    public: int32_t getMaxLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxLevel;
    
}


    public: void setMaxLevel(int32_t maxLevel){
this->maxLevel= maxLevel;
    
}


    public: Health getHealthInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->healthInterface;
    
}


    public: void setHealthInterface(Health healthInterface){
this->healthInterface= healthInterface;
    
}


    public: RTSFormInput getRTSFormInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsFormInput;
    
}


                //@Throws(Exception.constructor)
            
    public: bool isDestroyed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->destroyed;
    
}


                //@Throws(Exception.constructor)
            
    public: void setDestroyed(bool destroyed){
this->destroyed= destroyed;
    

                        if(this->isDestroyed())
                        
                                    {
                                    DestroyedLayerProcessor::getInstance().add(this);
    
ViewPositionEventHandler::getInstance().removeListener(this);
    

                                    }
                                
}


    public: BasicArrayList getEndGeographicMapCellPositionList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionAreaBase.getOccupyingGeographicMapCellPositionList();;
    
}


    public: GeographicMapCellPositionAreaBase getGeographicMapCellPositionArea(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionAreaBase;
    
}


    public: bool shouldHandleStartSameAsEnd(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public: void handleCost(PathFindingLayerInterface ownerLayer){
}


    public: WaypointBehaviorBase getWaypointBehavior(){



                            throw RuntimeException();
                    
}


    public: PathFindingLayerInterface getParentLayer(){



                            throw RuntimeException();
                    
}


    public: RTSLayer2LogHelper getRTSLayer2LogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsLayer2LogHelper;
    
}


    public: WaypointLogHelper getWaypointLogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointLogHelperP;
    
}


    public: Waypoint2LogHelper getWaypoint2LogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypoint2LogHelperP;
    
}


    public: WaypointRunnableLogHelper getWaypointRunnableLogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointRunnableLogHelperP;
    
}


    public: bool shouldAddWaypointFromBuilding(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: CaptionAnimationHelperBase getCaptionAnimationHelper(){



                            throw RuntimeException();
                    
}


    public: bool isShowMoreCaptionStates(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->showMoreCaptionStates;
    
}


                //@Throws(Exception.constructor)
            
    public: void init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList){
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getCurrentGeographicMapCellPosition(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getTopLeftGeographicMapCellPosition(){



                            throw RuntimeException();
                    
}


    public: BasicArrayList getMoveOutOfBuildAreaPath(GeographicMapCellPosition geographicMapCellPosition){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void setClosestGeographicMapCellHistory(BasicArrayList pathsList){
}


    public: void teleportTo(GeographicMapCellPosition geographicMapCellPosition){
}


                //@Throws(Exception.constructor)
            
    public: void setLoad(int32_t resource){
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getSurroundingGeographicMapCellPositionList(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void trackTo(std::string reason){
}


                //@Throws(Exception.constructor)
            
    public: void trackToDXY(int32_t dx, int32_t dy){
}


    public: bool isWaypointListEmptyOrOnlyTargets(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: TrackingEvent getTrackingEvent(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: bool buildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void allStop(){
}


    public: bool implmentsTickableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool implmentsGameInputInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: std::string getRootName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rootName;
    
}


    public: RotationAnimation getRotationAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->indexedButShouldBeRotationAnimationInterface as RotationAnimation;
    
}


    public: void setFrame(int32_t index){
this->getRotationAnimationInterface().setFrame(index);
    
}


    public: void setRotationAnimationInterface(RotationAnimation rotationAnimationInterface){
this->indexedButShouldBeRotationAnimationInterface= rotationAnimationInterface;
    
}


};

            

