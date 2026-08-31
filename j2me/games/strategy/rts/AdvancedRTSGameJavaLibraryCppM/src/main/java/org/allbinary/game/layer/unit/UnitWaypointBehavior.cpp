
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
        
            #include "../../../../../java/lang/Integer.h"
        
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
        #include "UnitLayer.h"

class UnitWaypointBehavior: public WaypointBehaviorBase: public WaypointEventListenerInterface {
        

    private: static const PATHING: string = "Pathing";

    commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: longWeaponRange: int32_t = 0;

    private: sensorAction: SensorAction = SensorActionFactory.getInstance()!.ATTACK;

    private: const completeTimeDelayHelper: TimeDelayHelper;

    const currentGeographicMapCellHistoryP: GeographicMapCellHistory;

    private: lastPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: currentPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: const FAKE_WAYPOINT_LAYER: CollidableDestroyableDamageableLayer;

    const targetList: BasicArrayList;

    private: const possibleTargetList: BasicArrayList;

    const associatedAdvancedRTSGameLayer: UnitLayer;

    private: moving: bool = false;

    private: movingFromStopped: bool = false;

    waypointPathsListP: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    private: currentTargetDistance: int32_t = Integer.MAX_VALUE;

    currentTargetLayerInterfaceP: CollidableDestroyableDamageableLayer = CollidableDestroyableDamageableLayer.getNullInstance()!;

    private: trackingWaypoint: bool= false;

protected constructor (UnitLayer associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer fakeWaypoint){

            super();
        this.associatedAdvancedRTSGameLayer= associatedAdvancedRTSGameLayer;
    
this.completeTimeDelayHelper= new TimeDelayHelper(30000);
    
this.targetList= new BasicArrayListD();
    
this.possibleTargetList= new BasicArrayListD();
    
this.setWaypointPathsList(BasicArrayListUtil.getInstance()!.getImmutableInstance());
    
this.currentGeographicMapCellHistoryP= new GeographicMapCellHistory();
    
this.FAKE_WAYPOINT_LAYER= fakeWaypoint;
    
}


    initRange(int32_t weaponRange){
this.longWeaponRange= weaponRange /2;
    
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public onWaypointEvent(RTSLayerEvent event){

    advancedRTSGameLayer: AdvancedRTSGameLayer = event.getRtsLayer() as AdvancedRTSGameLayer;;
    
this.associatedAdvancedRTSGameLayer!.waypointLogHelperP!.onWaypointEvent(this.associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
    

                        if(this.associatedAdvancedRTSGameLayer!.isSelected())
                        
                                    {
                                    this.addWaypointFromUser(advancedRTSGameLayer);
    

                                    }
                                
                             else 
                        if(advancedRTSGameLayer!.shouldAddWaypointFromBuilding())
                        
                                    {
                                    this.addWaypointFromBuilding(advancedRTSGameLayer);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    addWaypointFromUser(AdvancedRTSGameLayer advancedRTSGameLayer){
}


                //@Throws(Exception.constructor)
            
    addWaypointFromBuilding(AdvancedRTSGameLayer advancedRTSGameLayer){

                        if(advancedRTSGameLayer == PrimaryWaypointHelper.getInstance()!.getWaypointLayer() || advancedRTSGameLayer!.getParentLayer() == this.associatedAdvancedRTSGameLayer!.getParentLayer())
                        
                                    {
                                    
                        if(!this.targetList!.contains(advancedRTSGameLayer))
                        
                                    {
                                    this.associatedAdvancedRTSGameLayer!.waypointLogHelperP!.addWaypointFromBuilding(this.associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
    

                        if(advancedRTSGameLayer!.isDestroyed())
                        
                                    {
                                    


                            throw new Exception("Trying to add a dead: " +advancedRTSGameLayer);
                    

                                    }
                                
this.targetList!.add(advancedRTSGameLayer);
    
this.associatedAdvancedRTSGameLayer!.waypointLogHelperP!.addWaypointFromBuildingList(this.associatedAdvancedRTSGameLayer, advancedRTSGameLayer, this.targetList);
    

                                    }
                                

                                    }
                                
}


    public bool isWaypointListEmptyOrOnlyTargets(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public bool insertWaypoint(int32_t index, CollidableDestroyableDamageableLayer rtsLayer){

                        if(this.canInsertWaypoint(index, rtsLayer))
                        
                                    {
                                    this.associatedAdvancedRTSGameLayer!.waypointLogHelperP!.insertWaypoint(this.associatedAdvancedRTSGameLayer, index, rtsLayer, this.getName());
    

                        if(rtsLayer!.isDestroyed())
                        
                                    {
                                    


                            throw new Exception("Trying to add a dead: " +rtsLayer);
                    

                                    }
                                
this.targetList!.addAt(index, rtsLayer);
    
this.associatedAdvancedRTSGameLayer!.waypointLogHelperP!.insertWaypointList(this.associatedAdvancedRTSGameLayer, index, rtsLayer, this.getName(), this.targetList);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    move(){

                        if(this.isMoving())
                        
                                    {
                                    this.setMovingFromStopped(false);
    

                                    }
                                
                        else {
                            this.setMovingFromStopped(true);
    

                        }
                            
this.setMoving(false);
    
}


                //@Throws(Exception.constructor)
            
    setRandomGeographicMapCellHistory(BasicArrayList pathsList){

    size: int32_t = pathsList!.size()!;;
    
this.associatedAdvancedRTSGameLayer!.waypointLogHelperP!.setRandomGeographicMapCellHistoryList(this.associatedAdvancedRTSGameLayer, pathsList);
    

                        if(size > 0)
                        
                                    {
                                    
    geographicMapCellPositionBasicArrayList: BasicArrayList = BasicArrayListUtil.getInstance()!.getRandom(pathsList) as BasicArrayList;;
    
this.setGeographicMapCellHistoryPath(geographicMapCellPositionBasicArrayList);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    setGeographicMapCellHistoryPath(BasicArrayList geographicMapCellPositionBasicArrayList){
this.lastPathGeographicMapCellPosition= SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        if(this.associatedAdvancedRTSGameLayer!.showMoreCaptionStates)
                        
                                    {
                                    this.associatedAdvancedRTSGameLayer!.getCaptionAnimationHelper()!.update(UnitWaypointBehavior.PATHING, BasicColorFactory.getInstance()!.GREEN);
    

                                    }
                                
this.currentGeographicMapCellHistoryP!.init();
    
this.associatedAdvancedRTSGameLayer!.init(this.currentGeographicMapCellHistoryP, geographicMapCellPositionBasicArrayList);
    
this.setTrackingWaypoint(true);
    
this.getCompleteTimeDelayHelper()!.setStartTimeTNT();
    
}


    bool canInsertWaypoint(int32_t index, CollidableDestroyableDamageableLayer rtsLayer){

                        if(this.targetList!.size() > 4)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(this.targetList!.contains(rtsLayer))
                        
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
            
    public addBuildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition){
}


                //@Throws(Exception.constructor)
            
    moveAwayFromBuilding(BuildingLayer buildingLayer){

    geographicMapCellPosition: GeographicMapCellPosition = this.associatedAdvancedRTSGameLayer!.getCurrentGeographicMapCellPosition()!;;
    

    list: BasicArrayList = buildingLayer!.geographicMapCellPositionAreaBase!.getOccupyingGeographicMapCellPositionList()!;;
    

                        if(list.contains(geographicMapCellPosition))
                        
                                    {
                                    
                        if(this.insertWaypoint(0, this.FAKE_WAYPOINT_LAYER))
                        
                                    {
                                    this.associatedAdvancedRTSGameLayer!.waypointLogHelperP!.moveAwayFromBuilding(this.associatedAdvancedRTSGameLayer);
    
this.setCurrentTargetLayerInterface(this.FAKE_WAYPOINT_LAYER as CollidableDestroyableDamageableLayer);
    

    pathsList: BasicArrayList = buildingLayer!.getMoveOutOfBuildAreaPath(geographicMapCellPosition)!;;
    
this.associatedAdvancedRTSGameLayer!.setClosestGeographicMapCellHistory(pathsList);
    

                                    }
                                

                                    }
                                
}


    private: const repeatedToLong: TimeDelayHelper = new TimeDelayHelper(22000);

    public bool needToMove(){
this.associatedAdvancedRTSGameLayer!.waypointLogHelperP!.needToMove(this.associatedAdvancedRTSGameLayer, this);
    

                        if(this.isTrackingWaypoint() || this.sensorAction == SensorActionFactory.getInstance()!.EVADE || (this.currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer.getNullInstance() && this.getCurrentTargetDistance() >= this.longWeaponRange +this.currentTargetLayerInterfaceP!.getHalfHeight()))
                        
                                    {
                                    this.repeatedToLong!.setStartTimeTNT();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this.repeatedToLong!.isTimeTNT())
                        
                                    {
                                    
    message: string = "Repeating too long: " +this.getMovementLogicAsString();;
    
ForcedLogUtil.log(message, this.associatedAdvancedRTSGameLayer);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string getMovementLogicAsString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("isTrackingWaypoint: ");
    
stringBuffer!.appendboolean(this.isTrackingWaypoint());
    
stringBuffer!.append(" sensorAction: ");
    
stringBuffer!.append(this.sensorAction!.name);
    
stringBuffer!.append(" getCurrentTargetLayerInterface: ");
    
stringBuffer!.append(StringUtil.getInstance()!.toString(this.currentTargetLayerInterfaceP));
    

                        if(this.currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer.getNullInstance())
                        
                                    {
                                    stringBuffer!.append(" Target Range: ");
    
stringBuffer!.appendint(this.getCurrentTargetDistance());
    
stringBuffer!.append(" >= ");
    
stringBuffer!.appendint(this.longWeaponRange +this.currentTargetLayerInterfaceP!.getHalfHeight());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public bool isMovingFromStopped(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.movingFromStopped;
    
}


    setMovingFromStopped(bool movingFromStopped){
this.movingFromStopped= movingFromStopped;
    
}


    public setWaypointPathsList(BasicArrayList waypointPathsList){
this.waypointPathsListP= waypointPathsList;
    
}


    public BasicArrayList getWaypointPathsList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.waypointPathsListP;
    
}


    bool isMoving(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.moving;
    
}


    setMoving(bool moving){
this.moving= moving;
    
}


    public bool isTrackingWaypoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.trackingWaypoint;
    
}


    BasicArrayList getPossibleTargetList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.possibleTargetList;
    
}


    setLastPathGeographicMapCellPosition(GeographicMapCellPosition lastPathGeographicMapCellPosition){
this.lastPathGeographicMapCellPosition= lastPathGeographicMapCellPosition;
    
}


    GeographicMapCellPosition getLastPathGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastPathGeographicMapCellPosition;
    
}


    setCurrentPathGeographicMapCellPosition(GeographicMapCellPosition currentPathGeographicMapCellPosition){
this.currentPathGeographicMapCellPosition= currentPathGeographicMapCellPosition;
    
}


    public GeographicMapCellPosition getCurrentPathGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentPathGeographicMapCellPosition;
    
}


    setSensorAction(SensorAction sensorAction){
this.sensorAction= sensorAction;
    
}


    SensorAction getSensorAction(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sensorAction;
    
}


    setCurrentTargetLayerInterface(CollidableDestroyableDamageableLayer currentTargetLayerInterface){
this.currentTargetLayerInterfaceP= currentTargetLayerInterface;
    
}


    public CollidableDestroyableDamageableLayer getCurrentTargetLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentTargetLayerInterfaceP;
    
}


    setCurrentTargetDistance(int32_t currentTargetDistance){
this.currentTargetDistance= currentTargetDistance;
    
}


    int32_t getCurrentTargetDistance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentTargetDistance;
    
}


    TimeDelayHelper getCompleteTimeDelayHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.completeTimeDelayHelper;
    
}


    public GeographicMapCellHistory getCurrentGeographicMapCellHistory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentGeographicMapCellHistoryP;
    
}


    setTrackingWaypoint(bool trackingWaypoint){
this.trackingWaypoint= trackingWaypoint;
    
}


};

            

