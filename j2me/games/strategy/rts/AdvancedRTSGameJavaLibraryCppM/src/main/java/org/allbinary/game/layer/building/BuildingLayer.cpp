
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
        
#include <java/util/Hashtable.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimulatedBuildingPropertiesFactory.h"
#include "BuildingPropertiesFactory.h"
#include "BuildingInfoHudPaintable.h"

class BuildingLayer: public AdvancedRTSGameLayer: public RotationAnimationInterfaceCompositeInterface, public TrackingEventListenerInterface {
        

                //@Throws(Exception.constructor)
            
    public static BuildingLayer createSimulated(){

    nullAnimationInterfaceFactoryInterface: AnimationInterfaceFactoryInterface = NullAnimationFactory.getFactoryInstance()!;;
    

    nullIndexedAnimationInterfaceFactoryInterface: AnimationInterfaceFactoryInterface = NullIndexedAnimationFactory.getFactoryInstance()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BuildingLayer(RemoteInfo.REMOTE_INFO, SimulatedBuildingPropertiesFactory.getInstance(), AdvancedRTSProperties.createPropertiesSimulated(), GroupFactory.getInstance()!.NULL_GROUP_ARRAY, StringUtil.getInstance()!.EMPTY_STRING, StringUtil.getInstance()!.EMPTY_STRING, Health.NULL_HEALTH, NullRTSFormInputFactory.getInstance(), nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, NullIndexedAnimationFactory.getFactoryInstance(), RectangleFactory.SINGLETON, 0, 0);
    
}


    public static int32_t getStaticType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 2;
    
}


    private: buildingLevelCost: int32_t= 0;

    private: productivity: int32_t= 0;

    private: efficiency: int32_t;

    private: efficiencyPerLevel: int32_t;

    private: const trackingEvent: TrackingEvent;

    private: const damageFloaters: DamageFloaters;

    private: const damageFloatersPaintableInterface: Paintable;

    private: const healthBar: Paintable;

    private: const pathsHashtable: Hashtable<any, any>;

public constructor (RemoteInfo remoteInfo, BuildingPropertiesFactory buildingPropertiesFactory, AdvancedRTSProperties advancedRTSProperties, std::vector<Group> groupInterface, string rootName, string name, Health healthInterface, RTSFormInput rtsFormInput, AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface proceduralAnimationInterfaceFactoryInterface, Rectangle rectangle, int32_t x, int32_t y){
            super(remoteInfo, NullPathFindingLayer.NULL_PATH_FINDING_LAYER, advancedRTSProperties, groupInterface, rootName, name, healthInterface, rtsFormInput, animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, new TileLayerPositionIntoViewPosition());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setCollidableInferface(new CollidableRTSBehavior(true));
    
this.getWaypointBehavior()!.setWaypoint(new Waypoint(this, SelectSound.getInstance()));
    
this.damageFloaters= buildingPropertiesFactory!.getDamageFloaters(this);
    
this.damageFloatersPaintableInterface= buildingPropertiesFactory!.damageFloatersPaintableInterface;
    
this.healthBar= buildingPropertiesFactory!.getHealthBar(this);
    
this.pathsHashtable= buildingPropertiesFactory!.getHashtable();
    
this.setMaxLevel(30);
    
this.setProductivity(1);
    
this.setEfficiency(this.calculateEfficiency());
    
this.efficiencyPerLevel= buildingPropertiesFactory!.getEfficiencyPerLevel(this);
    
this.efficiency= this.efficiencyPerLevel;
    
this.generateMoveOutOfBuildAreaPaths();
    
this.trackingEvent= buildingPropertiesFactory!.getTrackingEvent(this);
    
}


    local: bool= false;

    initVisibility(RTSPlayerLayerInterface rtsPlayerLayerInterface){

    advancedRTSPlayerLayerInterface: AdvancedRTSPlayerLayerInterface = rtsPlayerLayerInterface as AdvancedRTSPlayerLayerInterface;;
    

                        if(advancedRTSPlayerLayerInterface!.isLocalPlayer())
                        
                                    {
                                    this.local= true;
    
this.addVisibility();
    

                                    }
                                
                        else {
                            this.local= false;
    

                        }
                            
super.initVisibility(rtsPlayerLayerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public construct(RTSPlayerLayerInterface rtsPlayerLayerInterface){
super.construct(rtsPlayerLayerInterface);
    
TrackingEventHandler.getInstance()!.addListenerInterface(this);
    
}


    public onMovement(TrackingEvent trackingEvent){

        try {
            
    layerInterface: AdvancedRTSGameLayer = trackingEvent!.getLayerInterface() as AdvancedRTSGameLayer;;
    

                        if(layerInterface!.getGroupInterface()[0] != this.getGroupInterface()[0])
                        
                                    {
                                    layerInterface!.onMovementFound(this.trackingEvent);
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "onMovement", e);
    
}

}


    const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(3000);

                //@Throws(Exception.constructor)
            
    public processBuiltTick(AllBinaryLayerManager allBinaryLayerManager){

                        if(this.getHealthInterface()!.isDamaged())
                        
                                    {
                                    this.setAnimationInterface(this.destroyAnimationInterface);
    

                                    }
                                

                        if(!this.getHealthInterface()!.isAlive())
                        
                                    {
                                    
                        if(this.isReadyForExplosion())
                        
                                    {
                                    
    currentFrame: int32_t = this.destroyAnimationInterface!.getFrame()!;;
    

    size: int32_t = this.destroyAnimationInterface!.getSize() -1;;
    

                        if(currentFrame == size && !this.timeDelayHelper!.isTimeTNT())
                        
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
    
this.timeDelayHelper!.setStartTimeTNT();
    
this.setReadyForExplosion(true);
    

                        }
                            

                                    }
                                
                        else {
                            super.processBuiltTick(allBinaryLayerManager);
    

                        }
                            
this.indexedButShouldBeRotationAnimationInterface!.nextFrame();
    
}


    int32_t calculateEfficiency(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.efficiencyPerLevel;
    
}


    public int32_t getCost(){

    total: int64_t = RTSLayerUtil.getInstance()!.getCostExponential((this.getLevel() *this.getBuildingLevelCost()))!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(total);
    
}


    public int32_t getDowngradeCost(){

    downgradeCost: int64_t = RTSLayerUtil.getInstance()!.getCostExponential(((this.getLevel() -1) *this.getBuildingLevelCost()))!;;
    
this.logUtil!.putF("Cost: " +downgradeCost, this, "getDowngradeCost");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(downgradeCost) *9 /10;
    
}


    public int32_t getUpgradeCost(){

    upgradeCost: int64_t = RTSLayerUtil.getInstance()!.getCostExponential(((this.getLevel() +1) *this.getBuildingLevelCost()))!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(upgradeCost);
    
}


    public downgrade(){
super.downgrade();
    
this.setProductivity(this.getProductivity() -1);
    
this.setEfficiency(this.getEfficiency() -this.calculateEfficiency());
    
this.getHealthInterface()!.setMaxHealth(this.getHealthInterface()!.getMaxHealth() -((this.getLevel() +1) *100));
    
}


    public upgrade(){
super.upgrade();
    
this.setProductivity(this.getProductivity() +1);
    
this.setEfficiency(this.getEfficiency() +this.calculateEfficiency());
    
this.getHealthInterface()!.setMaxHealth(this.getHealthInterface()!.getMaxHealth() +(this.getLevel() *100));
    
}


    int32_t getBuildingLevelCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.buildingLevelCost;
    
}


    setBuildingLevelCost(int32_t buildingLevelCost){
this.buildingLevelCost= buildingLevelCost;
    
}


    public int32_t getProductivity(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.productivity;
    
}


    public setProductivity(int32_t productivity){
this.productivity= productivity;
    
}


    public int32_t getEfficiency(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.efficiency;
    
}


    public setEfficiency(int32_t efficiency){
this.efficiency= efficiency;
    
}


                //@Throws(Exception.constructor)
            
    generateMoveOutOfBuildAreaPaths(){

    occupyList: BasicArrayList = this.geographicMapCellPositionAreaBase!.getOccupyingGeographicMapCellPositionList()!;;
    

    surroundList: BasicArrayList = this.geographicMapCellPositionAreaBase!.getSurroundingGeographicMapCellPositionList()!;;
    

    NO_DIRECTION: Direction = DirectionFactory.getInstance()!.NO_DIRECTION;;
    

    geographicMapDirectionUtil: GeographicMapDirectionUtil = GeographicMapDirectionUtil.getInstance()!;;
    

    pathsList: BasicArrayList;;
    

    occupyGeographicMapCellPosition: GeographicMapCellPosition;;
    

    surroundGeographicMapCellPosition: GeographicMapCellPosition;;
    

    list: BasicArrayList;;
    




                        for (
    index2: int32_t = occupyList!.size() -1;index2 >= 0; index2--)
        {
pathsList= new BasicArrayListD();
    
occupyGeographicMapCellPosition= occupyList!.get(index2) as GeographicMapCellPosition;
    




                        for (
    index: int32_t = surroundList!.size() -1;index >= 0; index--)
        {
surroundGeographicMapCellPosition= surroundList!.get(index) as GeographicMapCellPosition;
    

                        if(geographicMapDirectionUtil!.getEightDirectionFromCellPositionToAdjacentCellPosition(surroundGeographicMapCellPosition, occupyGeographicMapCellPosition) != NO_DIRECTION)
                        
                                    {
                                    list= new BasicArrayListS(1);
    
list.add(surroundGeographicMapCellPosition);
    
pathsList!.add(list);
    

                                    }
                                
}

this.pathsHashtable!.put(occupyGeographicMapCellPosition, pathsList);
    
}

}


    public BasicArrayList getMoveOutOfBuildAreaPath(GeographicMapCellPosition geographicMapCellPosition){

    pathsList: BasicArrayList = this.pathsHashtable!.get(geographicMapCellPosition) as BasicArrayList;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathsList;
    
}


    public BasicArrayList getEndGeographicMapCellPositionList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionAreaBase!.getSurroundingGeographicMapCellPositionList();;
    
}


    public bool shouldHandleStartSameAsEnd(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public paint(Graphics graphics){

                        if(this.isVisible())
                        
                                    {
                                    super.paint(graphics);
    
this.damageFloatersPaintableInterface!.paint(graphics);
    
this.healthBar!.paint(graphics);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public damage(int32_t damage, int32_t damageType){
super.damage(damage, damageType);
    
this.damageFloaters!.add(damage);
    

                        if(damage > 0)
                        this.getHealthInterface()!.damage(damage)
}


                //@Throws(Exception.constructor)
            
    public int32_t getDamage(int32_t damageType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public addVisibility(){

    geographicMapCellPositionArea: GeographicMapCellPositionAreaBase = this.geographicMapCellPositionAreaBase;;
    

    occupyList: BasicArrayList = geographicMapCellPositionArea!.getOccupyingGeographicMapCellPositionList()!;;
    
VisibleCellPositionsSingleton.getInstance()!.addStationaryCellPositions(occupyList);
    

    surroundList: BasicArrayList = geographicMapCellPositionArea!.getSurroundingGeographicMapCellPositionList()!;;
    
VisibleCellPositionsSingleton.getInstance()!.addStationaryCellPositions(surroundList);
    
}


    public removeVisibility(){

    occupyList: BasicArrayList = this.geographicMapCellPositionAreaBase!.getOccupyingGeographicMapCellPositionList()!;;
    
VisibleCellPositionsSingleton.getInstance()!.removeStationaryCellPositions(occupyList);
    

    surroundList: BasicArrayList = this.geographicMapCellPositionAreaBase!.getSurroundingGeographicMapCellPositionList()!;;
    
VisibleCellPositionsSingleton.getInstance()!.removeStationaryCellPositions(surroundList);
    
}


                //@Throws(Exception.constructor)
            
    public setDestroyed(bool destroyed){
super.setDestroyed(destroyed);
    

                        if(this.isDestroyed())
                        
                                    {
                                    DropCellPositionHistory.getInstance()!.removeAll(this);
    
TrackingEventHandler.getInstance()!.removeListener(this);
    

                        if(this.local)
                        
                                    {
                                    this.removeVisibility();
    

                                    }
                                

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


    public SelectionHudPaintable createHudPaintable(){

    buildingInfoHudPaintable: BuildingInfoHudPaintable = BuildingInfoHudPaintable.getInstance()!;;
    
buildingInfoHudPaintable!.setBasicColorP(this.allBinaryGameLayerManagerP!.getForegroundBasicColor());
    
buildingInfoHudPaintable!.setRtsLayer(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buildingInfoHudPaintable;
    
}


    public SelectionHudPaintable getHudPaintable(){

    buildingInfoHudPaintable: BuildingInfoHudPaintable = BuildingInfoHudPaintable.getInstance()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return buildingInfoHudPaintable;
    
}


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BuildingLayer.getStaticType();;
    
}


};

            

