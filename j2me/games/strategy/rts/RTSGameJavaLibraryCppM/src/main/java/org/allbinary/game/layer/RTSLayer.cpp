
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

class RTSLayer: public MultiPlayerGameLayer: public TickableInterface, public GameInputInterface, public GameKeyEventSourceInterface, public RTSInterface, public PathFindingLayerInterface {
        

                //@Throws(Exception.constructor)
            
    public static RTSLayer createSimulatedInstance(RemoteInfo remoteInfo){

    nullAnimationInterfaceFactoryInterface: AnimationInterfaceFactoryInterface = NullAnimationFactory.getFactoryInstance()!;;
    

    nullIndexedAnimationInterfaceFactoryInterface: AnimationInterfaceFactoryInterface = NullIndexedAnimationFactory.getFactoryInstance()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new RTSLayer(RemoteInfo.REMOTE_INFO, GroupFactory.getInstance()!.NULL_GROUP_ARRAY, StringUtil.getInstance()!.EMPTY_STRING, StringUtil.getInstance()!.EMPTY_STRING, Health.NULL_HEALTH, NullRTSFormInputFactory.getInstance(), nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, NullIndexedAnimationFactory.getFactoryInstance(), RectangleFactory.SINGLETON, 0, 0, new TileLayerPositionIntoViewPosition());
    
}


    private: static const id: int32_t = 0;

    static const MAIN_INDEX: int32_t = 0;

    static const SECONDARY_INDEX: int32_t = 1;

    public static int32_t getMinStaticType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


    public static int32_t getMaxStaticType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 4;
    
}


    public static bool isRTSLayer(AllBinaryLayer layerInterface){

                        if(layerInterface!.getType() >= RTSLayer.getMinStaticType() && layerInterface!.getType() <= RTSLayer.getMaxStaticType())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    const debug: bool = true;

    public const showMoreCaptionStates: bool = this.debug;

    const inputProcessorArray: std::vector<GameInputProcessor> = new Array(InputFactory.getInstance()!.MAX);

    public rtsLayer2LogHelper: RTSLayer2LogHelper = RTSLayer2LogHelper.getInstance()!;

    public waypointLogHelperP: WaypointLogHelper = WaypointLogHelper.getInstance()!;

    public waypoint2LogHelperP: Waypoint2LogHelper = Waypoint2LogHelper.getInstance()!;

    public waypointRunnableLogHelperP: WaypointRunnableLogHelper = WaypointRunnableLogHelper.getInstance()!;

    private: const rtsFormInput: RTSFormInput;

    private: verticleBuildAnimationInterface: IndexedAnimation;

    rangeAnimation: Animation;

    initRangeAnimation: Animation;

    sensorRangeAnimation: Animation;

    initSensorRangeAnimation: Animation;

    const baseAnimationInterface: Animation;

    private: const buildFrameTimeHelper: TimeDelayHelper = new TimeDelayHelper(50);

    private: const buildAnimationInterface: Animation;

    private: animationInterface: Animation;

    const initAnimationInterface: IndexedAnimation;

    indexedButShouldBeRotationAnimationInterface: IndexedAnimation;

    const emptyAnimationInterface: IndexedAnimation;

    const destroyAnimationInterface: IndexedAnimation;

    const fireTimeHelper: TimeDelayHelper = new TimeDelayHelper(700);

    private: const rootName: string;

    const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    private: const BUILD_VALUE: int32_t = 63;

    public const geographicMapCellPositionAreaBase: GeographicMapCellPositionAreaBase;

    private: healthInterface: Health = Health.NULL_HEALTH;

    private: level: int32_t = 1;

    private: maxLevel: int32_t = 1;

    private: hackVerticleBuild: int32_t = this.BUILD_VALUE;

    slightAngle: int32_t = 0;

    percentCompleteP: int32_t= 0;

    private: destroyed: bool = false;

    private: selected: bool = false;

protected constructor (RemoteInfo remoteInfo, std::vector<Group> groupInterface, string rootName, string name, Health healthInterface, RTSFormInput rtsFormInput, AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface proceduralAnimationInterfaceFactoryInterface, Rectangle rectangle, int32_t x, int32_t y, ViewPositionBase viewPosition){
            super(remoteInfo, groupInterface, name, rectangle, viewPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initInputProcessors();
    
this.rootName= rootName;
    
this.healthInterface= healthInterface;
    
this.rtsFormInput= rtsFormInput;
    
this.setPosition(x, y, this.z);
    
this.verticleBuildAnimationInterface= verticleBuildAnimationInterfaceFactoryInterface!.getInstance(0) as IndexedAnimation;
    
this.buildAnimationInterface= buildAnimationInterfaceFactoryInterface!.getInstance(0);
    
this.baseAnimationInterface= baseAnimationInterfaceFactoryInterface!.getInstance(0);
    
this.emptyAnimationInterface= emptyAnimationInterfaceFactoryInterface!.getInstance(0) as IndexedAnimation;
    
this.indexedButShouldBeRotationAnimationInterface= animationInterfaceFactoryInterface!.getInstance(0) as IndexedAnimation;
    
this.initAnimationInterface= this.indexedButShouldBeRotationAnimationInterface;
    
this.destroyAnimationInterface= proceduralAnimationInterfaceFactoryInterface!.getInstanceAnimation(this.indexedButShouldBeRotationAnimationInterface) as IndexedAnimation;
    

    animation: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;;
    
this.rangeAnimation= animation;
    
this.initRangeAnimation= animation;
    
this.sensorRangeAnimation= animation;
    
this.initSensorRangeAnimation= animation;
    
this.animationInterface= this.initAnimationInterface;
    
this.geographicMapCellPositionAreaBase= new GeographicMapCellPositionArea(this);
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = this.allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    tiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    viewPosition2: TileLayerPositionIntoViewPosition = this.getViewPosition() as TileLayerPositionIntoViewPosition;;
    
viewPosition2!.setTiledLayer(tiledLayer);
    
this.updateWaypointBehavior(geographicMapInterface);
    
}


                //@Throws(Exception.constructor)
            
    public updateWaypointBehavior(BasicGeographicMap geographicMapInterface){
this.geographicMapCellPositionAreaBase!.update(geographicMapInterface);
    
}


                //@Throws(Exception.constructor)
            
    public construct(RTSPlayerLayerInterface rtsPlayerLayerInterface){
ViewPositionEventHandler.getInstance()!.addListener(this as AllBinaryLayer);
    
this.animationInterface= this.buildAnimationInterface;
    
this.hackVerticleBuild= 0;
    
}


    public select(){
this.rangeAnimation= this.initRangeAnimation;
    
this.sensorRangeAnimation= this.initSensorRangeAnimation;
    
this.setSelected(true);
    
}


    public deselect(){

    animation: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;;
    
this.rangeAnimation= animation;
    
this.sensorRangeAnimation= animation;
    
this.setSelected(false);
    
}


    setSelected(bool selected){
this.selected= selected;
    
}


    public bool isSelected(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selected;
    
}


    public int32_t getPercentComplete(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.percentCompleteP;
    
}


    public ScrollSelectionForm getScrollSelectionForm(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScrollSelectionForm.getNullScrollSelectionForm();;
    
}


    public initInputProcessors(){
GameInputProcessorUtil.init(this.inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    public processBuiltTick(AllBinaryLayerManager allBinaryLayerManager){
this.animationInterface= this.indexedButShouldBeRotationAnimationInterface;
    
}


    public processTick(AllBinaryLayerManager allBinaryLayerManager){

        try {
            
                        if(this.isCompleted())
                        
                                    {
                                    this.processBuiltTick(allBinaryLayerManager);
    

                                    }
                                
                        else {
                            this.build();
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "processTick", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager){
}


    reload(){
}


    public onMovement(TrackingEvent trackingEvent){
}


                //@Throws(Exception.constructor)
            
    public onMovementFound(TrackingEvent trackingEvent){
}


    public paint(Graphics graphics){
super.paintFirst(graphics);
    

    viewPosition: ViewPositionBase = this.getViewPosition()!;;
    

    viewX: int32_t = viewPosition!.getX()!;;
    

    viewY: int32_t = viewPosition!.getY()!;;
    
this.getAnimationInterface()!.paintXY(graphics, viewX, viewY);
    
}


                //@Throws(Exception.constructor)
            
    public damage(int32_t damage, int32_t damageType){
}


    public int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayer.id;
    
}


    private: const rtsLayerUtil: RTSLayerUtil = RTSLayerUtil.getInstance()!;

    public downgrade(){
this.rtsLayerUtil!.downgrade(this);
    
}


    public upgrade(){
this.rtsLayerUtil!.upgrade(this);
    
}


    public bool isCompleted(){

                        if(this.hackVerticleBuild < this.BUILD_VALUE)
                        
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
            
    build(){

                        if(this.buildFrameTimeHelper!.isTimeTNT())
                        
                                    {
                                    this.animationInterface= this.buildAnimationInterface;
    
this.verticleBuildAnimationInterface!.nextFrame();
    
this.hackVerticleBuild++;
    

                                    }
                                
this.percentCompleteP= 100 *this.hackVerticleBuild /this.BUILD_VALUE;
    
this.getHudPaintable()!.updateInfo();
    
}


    public bool isSelfUpgradeable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public int32_t getCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsLayerUtil!.getCost(this);;
    
}


    public int32_t getDowngradeCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsLayerUtil!.getDowngradeCost(this);;
    
}


    public int32_t getUpgradeCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsLayerUtil!.getUpgradeCost(this);;
    
}


    public bool isUpgradeable(){

                        if(this.getLevel() < this.getMaxLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public bool isDowngradeable(){

                        if(this.getLevel() > 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public int32_t getLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.level;
    
}


    public setLevel(int32_t level){
this.level= level;
    
}


    public Animation getVerticleBuildAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.verticleBuildAnimationInterface;
    
}


    public Animation getAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterface;
    
}


    public setAnimationInterface(Animation animationInterface){
this.animationInterface= animationInterface;
    
}


    private: const layerDistanceUtil: LayerDistanceUtil = LayerDistanceUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public setTarget(PathFindingLayerInterface targetGameLayer){

    anotherTargetDistance: int32_t = this.layerDistanceUtil!.getDistance(this as AllBinaryLayer, targetGameLayer as AllBinaryLayer)!;;
    

    waypointBehaviorBase: WaypointBehaviorBase = this.getWaypointBehavior()!;;
    
waypointBehaviorBase!.setTargetWithDistance(targetGameLayer as PathFindingLayerInterface, anotherTargetDistance);
    
}


    public SelectionHudPaintable createHudPaintable(){



                            throw new RuntimeException();
                    
}


    public SelectionHudPaintable getHudPaintable(){



                            throw new RuntimeException();
                    
}


    public int32_t getMaxLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxLevel;
    
}


    public setMaxLevel(int32_t maxLevel){
this.maxLevel= maxLevel;
    
}


    public Health getHealthInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.healthInterface;
    
}


    public setHealthInterface(Health healthInterface){
this.healthInterface= healthInterface;
    
}


    public RTSFormInput getRTSFormInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsFormInput;
    
}


                //@Throws(Exception.constructor)
            
    public bool isDestroyed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.destroyed;
    
}


                //@Throws(Exception.constructor)
            
    public setDestroyed(bool destroyed){
this.destroyed= destroyed;
    

                        if(this.isDestroyed())
                        
                                    {
                                    DestroyedLayerProcessor.getInstance()!.add(this);
    
ViewPositionEventHandler.getInstance()!.removeListener(this);
    

                                    }
                                
}


    public BasicArrayList getEndGeographicMapCellPositionList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionAreaBase!.getOccupyingGeographicMapCellPositionList();;
    
}


    public GeographicMapCellPositionAreaBase getGeographicMapCellPositionArea(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionAreaBase;
    
}


    public bool shouldHandleStartSameAsEnd(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public handleCost(PathFindingLayerInterface ownerLayer){
}


    public WaypointBehaviorBase getWaypointBehavior(){



                            throw new RuntimeException();
                    
}


    public PathFindingLayerInterface getParentLayer(){



                            throw new RuntimeException();
                    
}


    public RTSLayer2LogHelper getRTSLayer2LogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsLayer2LogHelper;
    
}


    public WaypointLogHelper getWaypointLogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.waypointLogHelperP;
    
}


    public Waypoint2LogHelper getWaypoint2LogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.waypoint2LogHelperP;
    
}


    public WaypointRunnableLogHelper getWaypointRunnableLogHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.waypointRunnableLogHelperP;
    
}


    public bool shouldAddWaypointFromBuilding(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public CaptionAnimationHelperBase getCaptionAnimationHelper(){



                            throw new RuntimeException();
                    
}


    public bool isShowMoreCaptionStates(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.showMoreCaptionStates;
    
}


                //@Throws(Exception.constructor)
            
    public init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList){
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCurrentGeographicMapCellPosition(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getTopLeftGeographicMapCellPosition(){



                            throw new RuntimeException();
                    
}


    public BasicArrayList getMoveOutOfBuildAreaPath(GeographicMapCellPosition geographicMapCellPosition){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public setClosestGeographicMapCellHistory(BasicArrayList pathsList){
}


    public teleportTo(GeographicMapCellPosition geographicMapCellPosition){
}


                //@Throws(Exception.constructor)
            
    public setLoad(int32_t resource){
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getSurroundingGeographicMapCellPositionList(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public trackTo(string reason){
}


                //@Throws(Exception.constructor)
            
    public trackToDXY(int32_t dx, int32_t dy){
}


    public bool isWaypointListEmptyOrOnlyTargets(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public TrackingEvent getTrackingEvent(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public bool buildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public allStop(){
}


    public bool implmentsTickableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public bool implmentsGameInputInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public string getRootName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rootName;
    
}


    public RotationAnimation getRotationAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.indexedButShouldBeRotationAnimationInterface as RotationAnimation;
    
}


    public setFrame(int32_t index){
this.getRotationAnimationInterface()!.setFrame(index);
    
}


    public setRotationAnimationInterface(RotationAnimation rotationAnimationInterface){
this.indexedButShouldBeRotationAnimationInterface= rotationAnimationInterface;
    
}


};

            

