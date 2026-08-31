
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Math.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableUnitBehavior.h"
#include "UnitWaypointBehavior2.h"
#include "UnitWaypointBehavior.h"

class UnitLayer: public AdvancedRTSGameLayer: public BuildingEventListenerInterface, public TrackingEventListenerInterface {
        

    private: static const partialPositionList: BasicArrayList = new BasicArrayListS(4);

    private: static const SENSOR_RANGE_MULTIPLIER: int32_t = 6;

    private: static const MOVE: string = "Moving";

    public static int32_t getStaticType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


    public static BasicArrayList getPartialpositionlist(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UnitLayer.partialPositionList;
    
}


    private: const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

    private: const groupCommonFactory: GroupCommonFactory = GroupCommonFactory.getInstance()!;

    private: const layerPartialCellPositionsUtil: LayerPartialCellPositionsUtil = LayerPartialCellPositionsUtil.getInstance()!;

    private: const layerDistanceUtil: LayerDistanceUtil = LayerDistanceUtil.getInstance()!;

    private: const angleFactory: AngleFactory = AngleFactory.getInstance()!;

    private: const cellPositionFactory: CellPositionFactory = CellPositionFactory.getInstance()!;

    private: const maxResourceLoad: int16_t;

    private: const vehicleProperties: VehicleProperties;

    accelerationBasicDecimal: BasicDecimal = new BasicDecimal(1600);

    decelerationBasicDecimal: BasicDecimal = new BasicDecimal( -1000);

    private: const trackingEvent: TrackingEvent;

    private: const damageFloaters: DamageFloaters;

    private: const damageFloatersPaintableInterface: Paintable;

    private: const healthBar: Paintable;

    private: const moveSoundInterface: Sound;

    private: const initResourceAnimation: RotationAnimation;

    private: resourceAnimation: IndexedAnimation = NullIndexedAnimationFactory.getFactoryInstance()!.getInstance(0) as IndexedAnimation;

    private: const initPathAnimation: PathAnimation;

    private: pathAnimation: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

    private: const captionAnimationHelper: CaptionAnimationHelperBase = new CaptionAnimationHelper(FeaturedAnimationInterfaceFactoryInterfaceFactory.getInstance()!.get(CaptionResources.getInstance()!.RESOURCE)!.getInstance(0),  -23,  -25, 6, 0);

    private: const decalAnimation: RotationAnimation;

    private: const waypointLayerInterfaceFactoryInterface: LayerInterfaceFactoryInterface;

    private: resourceLoad: int32_t = 0;

    private: weaponRange: int32_t= 0;

    rtsLogHelper: RTSLayerLogHelper = RTSLayerLogHelper.getInstance()!;

    rotationAnimationInterfaceP: RotationAnimation;

    private: movementAngle: NamedAngle = this.angleFactory!.NOT_ANGLE;

    private: steeringInsideGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

protected constructor (RemoteInfo remoteInfo, PathFindingLayerInterface parentLayer, AdvancedRTSProperties advancedRTSProperties, std::vector<Group> groupInterface, string rootName, string name, VehicleProperties vehicleProperties, Health healthInterface, Integer maxResourceLoad, Sound moveSoundInterface, LayerInterfaceFactoryInterface waypointLayerInterfaceFactoryInterface, AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface verticleBuildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface decalAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface resourceAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface proceduralAnimationInterfaceFactoryInterface, Rectangle rectangle, Direction direction, int32_t x, int32_t y, int32_t z, ViewPositionBase viewPosition){
            super(remoteInfo, parentLayer, advancedRTSProperties, groupInterface, rootName, name, healthInterface, new WaypointRTSFormInput(groupInterface, true), animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, viewPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setCollidableInferface(new CollidableUnitBehavior(true));
    
this.waypointLayerInterfaceFactoryInterface= waypointLayerInterfaceFactoryInterface;
    
this.maxResourceLoad= maxResourceLoad!.toShort();
    
this.moveSoundInterface= moveSoundInterface;
    

                        if(Features.getInstance()!.isFeature(GameFeatureFactory.getInstance()!.DAMAGE_FLOATERS))
                        
                                    {
                                    this.damageFloaters= new PtsDamageFloaters(this);
    
this.damageFloatersPaintableInterface= this.damageFloaters;
    

                                    }
                                
                        else {
                            this.damageFloatersPaintableInterface= NullPaintable.getInstance();
    
this.damageFloaters= new DamageFloaters();
    

                        }
                            

                        if(Features.getInstance()!.isFeature(GameFeatureFactory.getInstance()!.HEALTH_BARS))
                        
                                    {
                                    this.healthBar= new HealthBar(this, this.getHealthInterface(), new HealthBarTwodAnimation(this as AllBinaryLayer, BasicHudFactory.getInstance()!.BOTTOMLEFT),  -1);
    

                                    }
                                
                        else {
                            this.healthBar= NullPaintable.getInstance();
    

                        }
                            
this.decalAnimation= decalAnimationInterfaceFactoryInterface!.getInstance(0) as RotationAnimation;
    
this.initResourceAnimation= resourceAnimationInterfaceFactoryInterface!.getInstance(0) as RotationAnimation;
    
this.initResourceAnimation!.setFrameByDirection(direction);
    
this.decalAnimation!.setFrameByDirection(direction);
    
this.rotationAnimationInterfaceP= this.indexedButShouldBeRotationAnimationInterface as RotationAnimation;
    
this.rotationAnimationInterfaceP!.setFrameByDirection(direction);
    
this.setMaxLevel(12);
    
this.vehicleProperties= vehicleProperties;
    
this.trackingEvent= new TrackingEvent(this);
    
this.initPathAnimation= new PathAnimation(this, LinePathRelativeAnimation.getInstance());
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    
this.initPathAnimation!.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    
}


                //@Throws(Exception.constructor)
            
    public updateWaypointBehavior(BasicGeographicMap geographicMapInterface){

    hashtable: Hashtable<any, any> = new Hashtable<any, any>();;
    
hashtable.put(this.groupCommonFactory!.ID, this.getGroupInterface());
    
hashtable.put(Layer.ID, this);
    
hashtable.put(AllBinaryGameLayerManager.ID, this.allBinaryGameLayerManagerP);
    
this.setWaypointBehavior(new UnitWaypointBehavior2(this, this.waypointLayerInterfaceFactoryInterface!.getNextInstance(hashtable, this.x, this.y, this.z) as AdvancedRTSGameLayer));
    

    features: Features = Features.getInstance()!;;
    

    waypoint: WaypointBase = J2MEUtil.isHTML()
                        ?       
                                new MultipassNoCacheWaypoint(this, AttackSound.getInstance())
                                :

                            new NoCacheWaypoint(this, AttackSound.getInstance());

    ;;
    
this.getWaypointBehavior()!.setWaypoint(waypoint);
    
super.updateWaypointBehavior(geographicMapInterface);
    
this.initRangeHack();
    
}


                //@Throws(Exception.constructor)
            
    public construct(RTSPlayerLayerInterface rtsPlayerLayerInterface){
super.construct(rtsPlayerLayerInterface);
    
TrackingEventHandler.getInstance()!.addListenerInterface(this);
    
WaypointEventHandlerFactory.getInstance(this.getGroupInterface()[0]!)!.addListenerInterface(this.getUnitWaypointBehavior());
    
BuildingEventHandler.getInstance()!.addListenerInterface(this);
    
this.getUnitWaypointBehavior()!.setCurrentPathGeographicMapCellPosition(this.getCurrentGeographicMapCellPosition());
    
this.updateSensorGeographicMapCellPositionList();
    
this.getUnitWaypointBehavior()!.setLastPathGeographicMapCellPosition(this.getUnitWaypointBehavior()!.getCurrentPathGeographicMapCellPosition());
    
}


    private: const sensorGeographicMapCellPositionList: BasicArrayList = new BasicArrayListD();

                //@Throws(Exception.constructor)
            
    public updateSensorGeographicMapCellPositionList(){

                        if(VisibleCellPositionsSingleton.getInstance()!.shouldProcess())
                        
                                    {
                                    
    currentGeographicMapCellPosition: GeographicMapCellPosition = this.getCurrentGeographicMapCellPosition()!;;
    
this.sensorGeographicMapCellPositionList!.clear();
    
this.sensorGeographicMapCellPositionList!.add(currentGeographicMapCellPosition);
    

    sensorRange: int32_t = this.weaponRange *UnitLayer.SENSOR_RANGE_MULTIPLIER;;
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = this.allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    tiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    totalCells: int32_t = (sensorRange /tiledLayer!.getCellHeight()) /2;;
    

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    column: int32_t = currentGeographicMapCellPosition!.getColumn()!;;
    

    row: int32_t = currentGeographicMapCellPosition!.getRow()!;;
    

    lastColumn: int32_t = column +totalCells;;
    

    lastRow: int32_t = row +totalCells;;
    

                        if(lastColumn > tiledLayer!.getColumns())
                        
                                    {
                                    lastColumn= tiledLayer!.getColumns();
    

                                    }
                                

                        if(lastRow > tiledLayer!.getRows())
                        
                                    {
                                    lastRow= tiledLayer!.getRows();
    

                                    }
                                

    firstColumn: int32_t = column -totalCells;;
    

    firstRow: int32_t = row -totalCells;;
    

                        if(firstColumn < 0)
                        
                                    {
                                    firstColumn= 0;
    

                                    }
                                

                        if(firstRow < 0)
                        
                                    {
                                    firstRow= 0;
    

                                    }
                                




                        for (
    index: int32_t = lastColumn -1;index >= firstColumn; index--)
        {




                        for (
    index2: int32_t = lastRow -1;index2 >= firstRow; index2--)
        {

    geographicMapCellPosition: GeographicMapCellPosition = geographicMapCellPositionFactory!.getAt(index, index2)!;;
    

                        if(!this.sensorGeographicMapCellPositionList!.contains(geographicMapCellPosition))
                        
                                    {
                                    this.sensorGeographicMapCellPositionList!.add(geographicMapCellPosition);
    

                                    }
                                
}

}


                                    }
                                
}


    public BasicArrayList getSensorGeographicMapCellPositionList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sensorGeographicMapCellPositionList;
    
}


    public select(){
this.pathAnimation= this.initPathAnimation;
    
super.select();
    
}


    public deselect(){
this.pathAnimation= NullAnimationFactory.getFactoryInstance()!.getInstance(0);
    
super.deselect();
    
}


    setSelected(bool selected){
super.setSelected(selected);
    

                        if(selected)
                        
                                    {
                                    
                        if(this.debug)
                        
                                    {
                                    this.rtsLogHelper= RTSLayerSelectedLogHelper.getInstance();
    

                                    }
                                
this.rtsLayer2LogHelper= RTSLayer2SelectedLogHelper.getInstance();
    

                                    }
                                
                        else {
                            
                        if(this.debug)
                        
                                    {
                                    this.rtsLogHelper= RTSLayerLogHelper.getInstance();
    

                                    }
                                
this.rtsLayer2LogHelper= RTSLayer2LogHelper.getInstance();
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public setClosestGeographicMapCellHistory(BasicArrayList pathsList){
this.rtsLogHelper!.setClosestGeographicMapCellHistory(this, pathsList);
    

    closestIndex: int32_t =  -1;;
    

    shortestDistance: int32_t = Integer.MAX_VALUE;;
    

    currentDistance: int32_t = Integer.MAX_VALUE;;
    




                        for (
    index: int32_t = pathsList!.size() -1;index >= 0; index--)
        {

    geographicMapCellPositionBasicArrayList: BasicArrayList = pathsList!.get(index) as BasicArrayList;;
    

    geographicMapCellPosition: GeographicMapCellPosition = geographicMapCellPositionBasicArrayList!.get(geographicMapCellPositionBasicArrayList!.size() -1) as GeographicMapCellPosition;;
    
currentDistance= this.layerDistanceUtil!.getDistanceAt(this, geographicMapCellPosition!.getMidPoint());
    

                        if(currentDistance < shortestDistance)
                        
                                    {
                                    shortestDistance= currentDistance;
    
closestIndex= index;
    

                                    }
                                
}


                        if(closestIndex >= 0)
                        
                                    {
                                    
    geographicMapCellPositionBasicArrayList: BasicArrayList = pathsList!.get(closestIndex) as BasicArrayList;;
    

    geographicMapCellPosition: GeographicMapCellPosition = geographicMapCellPositionBasicArrayList!.get(0) as GeographicMapCellPosition;;
    
this.teleportTo(geographicMapCellPosition);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList){
geographicMapCellHistory!.trackAll(geographicMapCellPositionBasicArrayList);
    
}


    public onMovement(TrackingEvent trackingEvent){

        try {
            
    layerInterface: AdvancedRTSGameLayer = trackingEvent!.getLayerInterface() as AdvancedRTSGameLayer;;
    

                        if(layerInterface!.getGroupInterface()[0] != this.getGroupInterface()[0])
                        
                                    {
                                    this.getUnitWaypointBehavior()!.getPossibleTargetList()!.add(layerInterface);
    
layerInterface!.onMovementFound(this.getTrackingEvent());
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "onMovement", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public onMovementFound(TrackingEvent trackingEvent){

    layerInterface: AdvancedRTSGameLayer = trackingEvent!.getLayerInterface() as AdvancedRTSGameLayer;;
    

                        if(layerInterface!.getGroupInterface()[0] != this.getGroupInterface()[0])
                        
                                    {
                                    this.getUnitWaypointBehavior()!.getPossibleTargetList()!.add(layerInterface);
    

                                    }
                                
}


    public initRangeHack(){

    basicWeaponPart: BasicWeaponPart = this.getPartInterfaceArray()[0]! as BasicWeaponPart;;
    

    weaponProperties: WeaponProperties = basicWeaponPart!.getWeaponProperties()!;;
    
this.weaponRange= weaponProperties!.getRange();
    
this.initRangeAnimation= AdjustedCircleAnimation.createW(this.weaponRange, this.weaponRange, this.getWidth(), this.basicColorFactory!.GREEN);
    

    sensorRange: int32_t = this.weaponRange *UnitLayer.SENSOR_RANGE_MULTIPLIER;;
    
this.initSensorRangeAnimation= AdjustedCircleAnimation.createW(sensorRange, sensorRange, this.getWidth(), this.basicColorFactory!.RED);
    
this.getUnitWaypointBehavior()!.initRange(this.weaponRange);
    
this.fireTimeHelper!.delay= (static_cast<int32_t>(weaponProperties!.getReloadTime()));
    
}


                //@Throws(Exception.constructor)
            
    public processBuiltTick(AllBinaryLayerManager allBinaryLayerManager){

                        if(!this.getHealthInterface()!.isAlive())
                        
                                    {
                                    
                        if(this.isReadyForExplosion())
                        
                                    {
                                    
    currentFrame: int32_t = this.destroyAnimationInterface!.getFrame()!;;
    

    size: int32_t = this.destroyAnimationInterface!.getSize() -1;;
    

                        if(currentFrame == size)
                        
                                    {
                                    
                        if(!this.getHealthInterface()!.isAlive())
                        
                                    {
                                    this.setDestroyed(true);
    

                                    }
                                

                                    }
                                
                        else {
                            this.destroyAnimationInterface!.nextFrame();
    

                        }
                            

                                    }
                                
                        else {
                            this.setAnimationInterface(this.destroyAnimationInterface);
    
SecondaryPlayerQueueFactory.getInstance()!.add(ExplosionBasicSound.getInstance());
    
this.shakeListener!.onSmallShakeEvent();
    
this.vibration.vibrate(this.duration, 0, 0);
    
this.setReadyForExplosion(true);
    

                        }
                            

                                    }
                                
                        else {
                            super.processBuiltTick(allBinaryLayerManager);
    

                        }
                            
this.captionAnimationHelper!.tick();
    
this.getUnitWaypointBehavior()!.processTick(allBinaryLayerManager);
    
}


    public teleportTo(GeographicMapCellPosition geographicMapCellPosition){

    point: GPoint = geographicMapCellPosition!.getMidPoint()!;;
    
this.setPosition(point.getX() -this.getHalfWidth(), point.getY() -this.getHalfHeight(), this.z);
    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCurrentGeographicMapCellPosition(){

    geographicMapCompositeInterface: GeographicMapCompositeInterface = this.allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    geographicMapCellPosition: GeographicMapCellPosition = geographicMapInterface!.getCellPositionAtXY(this.x +this.getHalfWidth(), this.y +this.getHalfHeight())!;;
    

    raceTrackGeographicMap: RaceTrackGeographicMap = geographicMapInterface as RaceTrackGeographicMap;;
    

                        if(!raceTrackGeographicMap!.isValid(geographicMapCellPosition))
                        
                                    {
                                    


                            throw new Exception("Position is not really on the map: " +geographicMapCellPosition);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPosition;
    
}


                //@Throws(Exception.constructor)
            
    public fire(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){

                        if(this.fireTimeHelper!.isTimeTNT())
                        
                                    {
                                    this.fireAll(layerManager);
    

                                    }
                                
                        else {
                            this.reload();
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public left(){
this.initResourceAnimation!.previousRotation();
    
this.decalAnimation!.previousRotation();
    
this.rotationAnimationInterfaceP!.previousRotation();
    
}


                //@Throws(Exception.constructor)
            
    public right(){
this.initResourceAnimation!.nextRotation();
    
this.decalAnimation!.nextRotation();
    
this.rotationAnimationInterfaceP!.nextRotation();
    
}


    public down(){

    velocityProperties: VelocityProperties = this.getVehicleProperties()!.getVelocityProperties()!;;
    

                        if(!velocityProperties!.isOverXYMaxForwardVelocity())
                        
                                    {
                                    this.accelerate(this.decelerationBasicDecimal);
    

                                    }
                                
}


    public up(){

    velocityProperties: VelocityProperties = this.getVehicleProperties()!.getVelocityProperties()!;;
    

                        if(!velocityProperties!.isOverXYMaxForwardVelocity())
                        
                                    {
                                    this.accelerate(this.accelerationBasicDecimal);
    

                                    }
                                
}


    public initInputProcessors(){
this.inputProcessorArray[Canvas.RIGHT]= new SpecialRightGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.LEFT]= new SpecialLeftGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.KEY_NUM0]= new SpecialFireGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.KEY_POUND]= this.inputProcessorArray[Canvas.KEY_NUM0]!;
    
this.inputProcessorArray[Canvas.DOWN]= new SpecialDownGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.UP]= new SpecialUpGameInputProcessor(this);
    
super.initInputProcessors();
    
}


                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager){

    list: BasicArrayList = this.getGameKeyEventList()!;;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    anyType: any = list.get(index)!;;
    

    key: int32_t = GameKeyEventUtil.getKey(anyType)!;;
    
this.inputProcessorArray[key]!.processEvent(layerManager, GameKeyEvent.NONE);
    
}

list.clear();
    
this.groundFriction();
    
this.move();
    
}


    public accelerate(BasicDecimal accelerate){
this.getVehicleProperties()!.getVelocityProperties()!.addVelocityi(accelerate.getUnscaled(), static_cast<int32_t>(this.rotationAnimationInterfaceP!.getAngleInfoP()!.getAngle()), 90);
    
}


                //@Throws(Exception.constructor)
            
    fireAll(AllBinaryLayerManager layerManager){

    angleInfo: AngleInfo = this.rotationAnimationInterfaceP!.getAngleInfoP()!;;
    

    angle: int32_t = static_cast<int32_t>((angleInfo!.getAngle() +this.slightAngle));;
    
this.hashtable.put(SmallIntegerSingletonFactory.getInstance()!.getAt(1), SmallIntegerSingletonFactory.getInstance()!.getAt(static_cast<int32_t>(AngleFactory.getInstance()!.getAt(angle)!.getValue())));
    

    salvoInterface: SalvoInterface = this.getPartInterfaceArray()[0]! as SalvoInterface;;
    
salvoInterface!.process(layerManager, angle, 90);
    
}


    public downgrade(){

                        if(this.getLevel() > 1)
                        
                                    {
                                    super.downgrade();
    

                                    }
                                
}


    public upgrade(){
super.upgrade();
    
this.initRangeHack();
    
}


    groundFriction(){

    vehicleFrictionProperties: VehicleFrictionProperties = this.getVehicleProperties()!.getVehicleFrictionProperties()!;;
    
this.getVehicleProperties()!.getVehicleFrictionProperties()!.friction(this.getVehicleProperties()!.getVelocityProperties(), vehicleFrictionProperties!.getTireFrictionNominator());
    
}


                //@Throws(Exception.constructor)
            
    public trackTo(string reason){

    waypointBehaviorBase: WaypointBehaviorBase = this.waypointBehaviorBase as WaypointBehaviorBase;;
    

    nextUnvisitedPathGeographicMapCellPosition: GeographicMapCellPosition = waypointBehaviorBase!.getNextUnvisitedPathGeographicMapCellPosition()!;;
    

    point: GPoint = nextUnvisitedPathGeographicMapCellPosition!.getMidPoint()!;;
    

    dx: int32_t = (this.getXP() +this.getHalfWidth()) -point.getX();;
    

    dy: int32_t = (this.getYP() +this.getHalfHeight()) -point.getY();;
    
this.rtsLogHelper!.trackTo(this, nextUnvisitedPathGeographicMapCellPosition, dx, dy, reason);
    
this.trackToDXY(dx, dy);
    
}


                //@Throws(Exception.constructor)
            
    public trackToDXY(int32_t dx, int32_t dy){

    angleOfTarget: int32_t = 0;;
    
this.trackToDXYTargetAngle(dx, dy, angleOfTarget);
    
}


                //@Throws(Exception.constructor)
            
    bool turnTo(int32_t dx, int32_t dy, int32_t targetAngle){

    waypointBehaviorBase: WaypointBehaviorBase = this.waypointBehaviorBase as WaypointBehaviorBase;;
    

    nextUnvisitedPathGeographicMapCellPosition: GeographicMapCellPosition = waypointBehaviorBase!.getNextUnvisitedPathGeographicMapCellPosition()!;;
    

    evading: bool = false;;
    

                        if(this.getUnitWaypointBehavior()!.getSensorAction() == SensorActionFactory.getInstance()!.EVADE)
                        
                                    {
                                    this.rtsLogHelper!.evade(this);
    
evading= true;
    
targetAngle += 180;
    

                                    }
                                

    angleInfo: AngleInfo = this.rotationAnimationInterfaceP!.getAngleInfoP()!;;
    

    angle: int32_t = FrameUtil.getInstance()!.adjustAngleToFrameAngle(angleInfo!.getAngle() -270)!;;
    
this.rtsLogHelper!.turnTo(this, dx, dy, angleInfo, angle, this.movementAngle, evading, targetAngle);
    

    gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;;
    

                        if(dx == 0 && dy == 0)
                        
                                    {
                                    this.rtsLogHelper!.doneMoving(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if((static_cast<int32_t>(this.movementAngle!.getValue())) == angle)
                        
                                    {
                                    
                        if(dx > 0 && this.movementAngle == this.angleFactory!.LEFT)
                        
                                    {
                                    this.rtsLogHelper!.movingLeft(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(dx < 0 && this.movementAngle == this.angleFactory!.RIGHT)
                        
                                    {
                                    this.rtsLogHelper!.movingRight(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(dy > 0 && this.movementAngle == this.angleFactory!.UP)
                        
                                    {
                                    this.rtsLogHelper!.movingUp(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(dy < 0 && this.movementAngle == this.angleFactory!.DOWN)
                        
                                    {
                                    this.rtsLogHelper!.movingDown(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
this.rtsLogHelper!.currentMoveEnded(this);
    

                        if(this.movementAngle == this.angleFactory!.LEFT || this.movementAngle == this.angleFactory!.RIGHT)
                        
                                    {
                                    this.handleDeltalY(dx, dy);
    

                                    }
                                
                             else 
                        if(this.movementAngle == this.angleFactory!.UP || this.movementAngle == this.angleFactory!.DOWN)
                        
                                    {
                                    this.handleDeltalX(dx, dy);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            
                        if(nextUnvisitedPathGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
                        if(this.steeringInsideGeographicMapCellPosition != nextUnvisitedPathGeographicMapCellPosition)
                        
                                    {
                                    
                        if(Math.abs(dx) > Math.abs(dy) && dy != 0)
                        
                                    {
                                    this.handleDeltalY(dx, dy);
    

                                    }
                                
                             else 
                        if(dx != 0)
                        
                                    {
                                    this.handleDeltalX(dx, dy);
    

                                    }
                                
                        else {
                            this.handleDeltalY(dx, dy);
    

                        }
                            

                                    }
                                

    deltaAngle2: int32_t = this.movementAngle!.getValue() -angle;;
    

                        if(deltaAngle2 > 0)
                        
                                    {
                                    this.rtsLogHelper!.rotateRight(this);
    
this.getGameKeyEventList()!.add(gameKeyEventFactory!.getInstanceForKey(this, Canvas.RIGHT));
    

                                    }
                                
                        else {
                            this.rtsLogHelper!.rotateLeft(this);
    
this.getGameKeyEventList()!.add(gameKeyEventFactory!.getInstanceForKey(this, Canvas.LEFT));
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            this.rtsLogHelper!.noRotation(this);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    handleDeltalX(int32_t dx, int32_t dy){

    waypointBehaviorBase: WaypointBehaviorBase = this.waypointBehaviorBase as WaypointBehaviorBase;;
    

    nextUnvisitedPathGeographicMapCellPosition: GeographicMapCellPosition = waypointBehaviorBase!.getNextUnvisitedPathGeographicMapCellPosition()!;;
    

                        if(dx > 0)
                        
                                    {
                                    this.movementAngle= this.angleFactory!.LEFT;
    
this.steeringInsideGeographicMapCellPosition= nextUnvisitedPathGeographicMapCellPosition;
    

                                    }
                                
                        else {
                            this.movementAngle= this.angleFactory!.RIGHT;
    
this.steeringInsideGeographicMapCellPosition= nextUnvisitedPathGeographicMapCellPosition;
    

                        }
                            
this.rtsLogHelper!.handle(this, this.movementAngle);
    
}


    handleDeltalY(int32_t dx, int32_t dy){

    waypointBehaviorBase: WaypointBehaviorBase = this.waypointBehaviorBase as WaypointBehaviorBase;;
    

    nextUnvisitedPathGeographicMapCellPosition: GeographicMapCellPosition = waypointBehaviorBase!.getNextUnvisitedPathGeographicMapCellPosition()!;;
    

                        if(dy > 0)
                        
                                    {
                                    this.movementAngle= this.angleFactory!.UP;
    
this.steeringInsideGeographicMapCellPosition= nextUnvisitedPathGeographicMapCellPosition;
    

                                    }
                                
                        else {
                            this.movementAngle= this.angleFactory!.DOWN;
    
this.steeringInsideGeographicMapCellPosition= nextUnvisitedPathGeographicMapCellPosition;
    

                        }
                            
this.rtsLogHelper!.handle(this, this.movementAngle);
    
}


                //@Throws(Exception.constructor)
            
    trackToDXYTargetAngle(int32_t dx, int32_t dy, int32_t targetAngle){

    list: BasicArrayList = this.getUnitWaypointBehavior()!.getSteeringVisitorList()!;;
    

                        if(list.size() > 0)
                        
                                    {
                                    



                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

    steeringVisitor: SteeringVisitor = list.get(index) as SteeringVisitor;;
    

    anyType: any = steeringVisitor!.visit(this)!;;
    

                        if(anyType == 
                                    null
                                )
                        
                                    {
                                    list.removeAt(index);
    

                                    }
                                
}

this.fireOrMove();
    

                                    }
                                
                             else 
                        if(!this.turnTo(dx, dy, targetAngle))
                        
                                    {
                                    this.fireOrMove();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    fireOrMove(){

    gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;;
    

                        if(this.getUnitWaypointBehavior()!.needToMove())
                        
                                    {
                                    this.rtsLayer2LogHelper!.steeringUp(this);
    

                        if(this.showMoreCaptionStates && !this.captionAnimationHelper!.isShowing())
                        
                                    {
                                    this.captionAnimationHelper!.update(UnitLayer.MOVE, this.basicColorFactory!.GREEN);
    

                                    }
                                
this.getGameKeyEventList()!.add(gameKeyEventFactory!.getInstanceForKey(this, Canvas.UP));
    

                                    }
                                
                        else {
                            this.captionAnimationHelper!.update(CommonPhoneStrings.getInstance()!.FIRE, this.basicColorFactory!.RED);
    
this.rtsLayer2LogHelper!.steeringFireOrStop(this);
    
this.allStop();
    
this.getGameKeyEventList()!.add(gameKeyEventFactory!.getInstanceForKey(this, Canvas.KEY_NUM0));
    
TrackingEventHandler.getInstance()!.fireEvent(this.getTrackingEvent());
    

                        }
                            
}


    public move(){

        try {
            
    velocityProperties: VelocityProperties = this.getVehicleProperties()!.getVelocityProperties()!;;
    

    velocityXScaled: int64_t = velocityProperties!.getVelocityXBasicDecimalP()!.getScaled();;
    

    velocityYScaled: int64_t = velocityProperties!.getVelocityYBasicDecimalP()!.getScaled();;
    
this.getUnitWaypointBehavior()!.move();
    

                        if(velocityXScaled != 0 || velocityYScaled != 0)
                        
                                    {
                                    this.getUnitWaypointBehavior()!.setMoving(true);
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = this.allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    
this.layerPartialCellPositionsUtil!.getAllDXY(geographicMapInterface, this, static_cast<int32_t>(velocityXScaled), static_cast<int32_t>(velocityYScaled), UnitLayer.getPartialpositionlist());
    

    cellPosition: GeographicMapCellPosition = DropCellPositionHistory.getInstance()!.getCellPositionWithDrop(UnitLayer.getPartialpositionlist()) as GeographicMapCellPosition;;
    

                        if(cellPosition == this.cellPositionFactory!.NONE)
                        
                                    {
                                    
    tiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    tiledLayerUtil: TiledLayerUtil = TiledLayerUtil.getInstance()!;;
    

    x: int32_t = this.x +static_cast<int32_t>(velocityXScaled);;
    

    y: int32_t = this.y +static_cast<int32_t>(velocityYScaled);;
    
x= tiledLayerUtil!.keepOnMapX(tiledLayer, x, this.getWidth());
    
y= tiledLayerUtil!.keepOnMapY(tiledLayer, y, this.getHeight());
    
this.setPosition(x, y, this.z);
    

                                    }
                                
                        else {
                            
    allbinaryLayer: AllBinaryLayer = DropCellPositionHistory.getInstance()!.getLayerInterface(cellPosition)!;;
    
this.getUnitWaypointBehavior()!.setMovingFromStopped(false);
    
this.getUnitWaypointBehavior()!.addBuildingChase(allbinaryLayer, cellPosition);
    

                        }
                            

                                    }
                                

                        if(this.getUnitWaypointBehavior()!.isMoving())
                        
                                    {
                                    TrackingEventHandler.getInstance()!.fireEvent(this.getTrackingEvent());
    

                                    }
                                
                        else {
                            this.getUnitWaypointBehavior()!.setMovingFromStopped(false);
    

                        }
                            

                        if(this.getUnitWaypointBehavior()!.isMovingFromStopped() && this.isVisible())
                        
                                    {
                                    SecondaryPlayerQueueFactory.getInstance()!.add(this.moveSoundInterface);
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "move", e);
    
}

}


    public allStop(){

    velocityProperties: VelocityProperties = this.getVehicleProperties()!.getVelocityProperties()!;;
    
velocityProperties!.getVelocityXBasicDecimalP()!.setint(0);
    
velocityProperties!.getVelocityYBasicDecimalP()!.setint(0);
    
}


    public paint(Graphics graphics){

                        if(this.isVisible())
                        
                                    {
                                    super.paint(graphics);
    

    viewPosition: ViewPositionBase = this.getViewPosition()!;;
    

    viewX: int32_t = viewPosition!.getX()!;;
    

    viewY: int32_t = viewPosition!.getY()!;;
    
this.decalAnimation!.paintXY(graphics, viewX, viewY);
    
this.rangeAnimation!.paintXY(graphics, viewX, viewY);
    
this.sensorRangeAnimation!.paintXY(graphics, viewX, viewY);
    
this.damageFloatersPaintableInterface!.paint(graphics);
    
this.healthBar!.paint(graphics);
    
this.captionAnimationHelper!.paintXY(graphics, viewX, viewY);
    
this.pathAnimation!.paintXY(graphics, viewX, viewY);
    
this.resourceAnimation!.paintXY(graphics, viewX, viewY);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public onBuildingEvent(RTSLayerEvent event){

    buildingLayer: BuildingLayer = event.getRtsLayer() as BuildingLayer;;
    
this.getUnitWaypointBehavior()!.moveAwayFromBuilding(buildingLayer);
    
}


    public VehicleProperties getVehicleProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.vehicleProperties;
    
}


                //@Throws(Exception.constructor)
            
    public damage(int32_t damage, int32_t damageType){
super.damage(damage, damageType);
    
this.damageFloaters!.add(damage);
    

                        if(damage > 0)
                        
                                    {
                                    this.getHealthInterface()!.damage(damage);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public int32_t getDamage(int32_t damageType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    public setDestroyed(bool destroyed){
this.logUtil!.putF(this.commonStrings!.START, this, "setDestroyed");
    
super.setDestroyed(destroyed);
    

                        if(this.isDestroyed())
                        
                                    {
                                    WaypointEventHandlerFactory.getInstance(this.getGroupInterface()[0]!)!.removeListener(this.getUnitWaypointBehavior());
    
TrackingEventHandler.getInstance()!.removeListener(this);
    
BuildingEventHandler.getInstance()!.removeListener(this);
    

                        if(!this.getHealthInterface()!.isAlive())
                        
                                    {
                                    
    damage: int32_t = this.getHealthInterface()!.getMaxHealth()!;;
    

                        if(damage > 10)
                        
                                    {
                                    SecondaryPlayerQueueFactory.getInstance()!.add(ExplosionBasicSound.getInstance());
    

                        if(damage < 100)
                        
                                    {
                                    this.shakeListener!.onSmallShakeEvent();
    
this.vibration.vibrate(this.duration, 0, 0);
    

                                    }
                                
                             else 
                        if(damage < 1000)
                        
                                    {
                                    this.shakeListener!.onMediumShakeEvent();
    
this.vibration.vibrate(this.duration *2, 0, 0);
    

                                    }
                                
                             else 
                        if(damage < 3000)
                        
                                    {
                                    this.shakeListener!.onLargeShakeEvent();
    
this.vibration.vibrate(this.duration *4, 0, 0);
    

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                
}


    public int32_t getLoad(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.resourceLoad;
    
}


                //@Throws(Exception.constructor)
            
    public clearResourceAnimation(){
this.resourceAnimation= NullIndexedAnimationFactory.getFactoryInstance()!.getInstance(0) as IndexedAnimation;
    
}


                //@Throws(Exception.constructor)
            
    public setLoad(int32_t resource){

                        if(resource > 0)
                        
                                    {
                                    this.resourceAnimation= this.initResourceAnimation;
    

                                    }
                                
                        else {
                            this.clearResourceAnimation();
    

                        }
                            
this.resourceLoad= resource;
    
}


    public addLoad(int32_t resource){
this.resourceLoad += resource;
    
}


    private: const CAPITAL_EVENT: CapitalEvent = new CapitalEvent(this);

                //@Throws(Exception.constructor)
            
    public handleCost(PathFindingLayerInterface ownerLayer){

                        if(this.getLoad() > 0)
                        
                                    {
                                    this.CAPITAL_EVENT.setValue(this.getLoad());
    
CapitalEventHandlerFactory.getInstance(ownerLayer!.getGroupInterface()[0]!)!.fireEvent(this.CAPITAL_EVENT);
    
this.setLoad(0);
    

                                    }
                                
}


    public SelectionHudPaintable createHudPaintable(){

    rtsLayerHudPaintable: RTSLayerHudPaintable = RTSLayerHudPaintable.getInstance()!;;
    
rtsLayerHudPaintable!.setBasicColorP(this.allBinaryGameLayerManagerP!.getForegroundBasicColor());
    
rtsLayerHudPaintable!.setRtsLayer(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rtsLayerHudPaintable;
    
}


    public SelectionHudPaintable getHudPaintable(){

    rtsLayerHudPaintable: RTSLayerHudPaintable = RTSLayerHudPaintable.getInstance()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rtsLayerHudPaintable;
    
}


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UnitLayer.getStaticType();;
    
}


    UnitWaypointBehavior getUnitWaypointBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getWaypointBehavior() as UnitWaypointBehavior;
    
}


    public TrackingEvent getTrackingEvent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.trackingEvent;
    
}


    public CaptionAnimationHelperBase getCaptionAnimationHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.captionAnimationHelper;
    
}


    public bool isSelfUpgradeable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public int16_t getMaxResourceLoad(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxResourceLoad;
    
}


};

            

