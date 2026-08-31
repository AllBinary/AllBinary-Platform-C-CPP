
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Waypoint2LogHelper.h"

class Waypoint2SelectedLogHelper: public Waypoint2LogHelper {
        

    private: static const instanceC: Waypoint2SelectedLogHelper = new Waypoint2SelectedLogHelper();

    public static Waypoint2LogHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Waypoint2SelectedLogHelper.instanceC;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const positionStrings: PositionStrings = PositionStrings.getInstance()!;

    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: const ENEMY_POSSIBLE_TARGET: string = " Enemy Possible Target: ";

    private: const CLOSE_RANGE: string = "closeRange: ";

    private: const SENSOR_RANGE: string = " sensorRange: ";

    private: const ONLY_TARGETS: string = " Only Targets: ";

    private: const SHORTER_THAN_CURRENT_TARGET_DISTANCE: string = " isShorterThanCurrentTargetDistance: ";

    private: const CURRENT_TARGET_DESTROYED: string = " isCurrentTargetDestroyed: ";

    private: const CURRENT_TARGET_NOT_AVAILABLE: string = " isCurrentTargetNotAvailable: ";

    private: const PROCESS_POSSIBLE_TARGET: string = "selected: processPossibleTarget1";

    public initRange(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(this.CLOSE_RANGE);
    
stringBuffer!.appendint(closeRange);
    
stringBuffer!.append(this.SENSOR_RANGE);
    
stringBuffer!.appendint(sensorRange);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: initRange");
    
}


    public processPossibleTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed){

                        if(waypointBehaviorBase!.isWaypointListEmptyOrOnlyTargets() && waypointBehaviorBase!.isInSensorRange(layerInterface as CollidableDestroyableDamageableLayer, anotherTargetDistance))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(this.ONLY_TARGETS);
    
stringBuffer!.appendboolean(waypointBehaviorBase!.isWaypointListEmptyOrOnlyTargets());
    
stringBuffer!.append(this.SHORTER_THAN_CURRENT_TARGET_DISTANCE);
    
stringBuffer!.appendboolean(isShorterThanCurrentTargetDistance);
    
stringBuffer!.append(this.CURRENT_TARGET_DESTROYED);
    
stringBuffer!.appendboolean(isCurrentTargetDestroyed);
    
stringBuffer!.append(this.CURRENT_TARGET_NOT_AVAILABLE);
    
stringBuffer!.appendboolean((waypointBehaviorBase!.getCurrentTargetLayerInterface() == 
                                    null
                                ));
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.PROCESS_POSSIBLE_TARGET);
    

                                    }
                                
}


    public processSetTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(waypointBehaviorBase!.getCurrentTargetingStateString());
    
stringBuffer!.append(this.ENEMY_POSSIBLE_TARGET);
    
stringBuffer!.append(layerInterface!.getName());
    
stringBuffer!.append(" anotherTargetDistance: ");
    
stringBuffer!.appendint(anotherTargetDistance);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: processPossibleTarget2");
    
}


    public processPossibleTargetCloser(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(waypointBehaviorBase!.getCurrentTargetingStateString());
    
stringBuffer!.append(this.ENEMY_POSSIBLE_TARGET);
    
stringBuffer!.append(layerInterface!.getName());
    
stringBuffer!.append(" anotherTargetDistance: ");
    
stringBuffer!.appendint(anotherTargetDistance);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: processPossibleTarget3");
    
}


    public setTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface layerInterface, int32_t anotherTargetDistance){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(waypointBehaviorBase!.getName());
    
stringBuffer!.append(" targeting: ");
    
stringBuffer!.append(layerInterface!.getName());
    
stringBuffer!.append(" at: ");
    
stringBuffer!.appendint(anotherTargetDistance);
    
stringBuffer!.append(" instead of: ");
    
stringBuffer!.append(waypointBehaviorBase!.getCurrentTargetingStateString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: setTarget");
    
}


    public setTargetPath(PathFindingLayerInterface associatedAdvancedRTSGameLayer){
this.logUtil!.putF("Target Destroyed", this, "selected: setTargetPath");
    
}


    public setTargetPathIgnoreNewPath(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(" Set Path To Target: ");
    
stringBuffer!.append(waypointBehaviorBase!.getCurrentTargetLayerInterface()!.getName());
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.stringUtil!.toString(waypointBehaviorBase!.getCurrentTargetLayerInterface()));
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: setTargetPath");
    
}


    public processWaypoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase, PathFindingLayerInterface targetLayer, int32_t size){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(" Size: ");
    
stringBuffer!.appendint(size);
    
stringBuffer!.append(" Waypoint: ");
    
stringBuffer!.append(targetLayer!.getName());
    
stringBuffer!.append(" Target: ");
    
stringBuffer!.append(this.stringUtil!.toString(waypointBehaviorBase!.getCurrentTargetLayerInterface()));
    
stringBuffer!.append(" isTrackingWaypoint: ");
    
stringBuffer!.appendboolean(waypointBehaviorBase!.isTrackingWaypoint());
    
stringBuffer!.append(" WaypointOverridesAttacking: ");
    
stringBuffer!.appendboolean(waypointBehaviorBase!.isWaypointOverridesAttacking());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: processWaypoint");
    
}


    public processWaypointTracked(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase waypointBehaviorBase){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(" currentPathGeographicMapCellPosition: ");
    
stringBuffer!.append(this.stringUtil!.toString(waypointBehaviorBase!.getCurrentPathGeographicMapCellPosition()));
    
stringBuffer!.append(" nextUnvisitedPathGeographicMapCellPosition: ");
    
stringBuffer!.append(this.stringUtil!.toString(waypointBehaviorBase!.getNextUnvisitedPathGeographicMapCellPosition()));
    
stringBuffer!.append(" Tracked: ");
    
stringBuffer!.append(this.stringUtil!.toString(waypointBehaviorBase!.getCurrentGeographicMapCellHistory()!.getTracked()));
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: processWaypoint");
    
}


    public processWaypointTrackedVisit(PathFindingLayerInterface associatedAdvancedRTSGameLayer, GeographicMapCellPosition geographicMapCellPosition){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(" Visited: ");
    
stringBuffer!.append(this.stringUtil!.toString(geographicMapCellPosition));
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: processWaypoint");
    
}


    public processWaypointTrackedWithoutProgress(PathFindingLayerInterface associatedAdvancedRTSGameLayer, string reason){
this.logUtil!.putF(new StringMaker().append(associatedAdvancedRTSGameLayer!.getName())!.append(reason)!.toString(), this, "turnTo");
    
}


    public wander(PathFindingLayerInterface associatedAdvancedRTSGameLayer){
this.logUtil!.putF(associatedAdvancedRTSGameLayer!.getName(), this, "wander");
    
}


    public targetDestroyed(PathFindingLayerInterface associatedAdvancedRTSGameLayer){
this.logUtil!.putF(new StringMaker().append(associatedAdvancedRTSGameLayer!.getName())!.append(" Target Destroyed")!.toString(), this, "selected: processTargeting");
    
}


    public processTargeting(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.positionStrings!.DX_LABEL);
    
stringBuffer!.appendint(dx);
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.positionStrings!.DY_LABEL);
    
stringBuffer!.appendint(dy);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: processTargeting");
    
}


    public processTargetingNonWayPoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(" Targeting Non Waypoint ");
    
stringBuffer!.append(this.positionStrings!.DX_LABEL);
    
stringBuffer!.appendint(dx);
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.positionStrings!.DY_LABEL);
    
stringBuffer!.appendint(dy);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: processTargeting");
    
}


    public removeWaypoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, PathFindingLayerInterface waypointLayer, string reason){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(unitWaypointBehavior2!.getName());
    
stringBuffer!.append(" remove: ");
    
stringBuffer!.append(waypointLayer!.getName());
    
stringBuffer!.append(" because: ");
    
stringBuffer!.append(reason);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: removeWaypoint");
    
}


    public removeWaypointList(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior2, BasicArrayList list){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(unitWaypointBehavior2!.getName());
    
stringBuffer!.append(" Waypoints: ");
    
stringBuffer!.append(this.stringUtil!.toString(list));
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: removeWaypoint");
    
}


    public removeWaypointClear(PathFindingLayerInterface associatedAdvancedRTSGameLayer){
this.logUtil!.putF(new StringMaker().append(associatedAdvancedRTSGameLayer!.getName())!.append(" Clearing removed waypoint")!.toString(), this, "selected: removeWaypoint");
    
}


    public clearTarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer){
this.logUtil!.putF(new StringMaker().append(associatedAdvancedRTSGameLayer!.getName())!.append(" Cleared Target")!.toString(), this, "selected: clearTarget");
    
}


    public addWaypointFromUser(PathFindingLayerInterface associatedAdvancedRTSGameLayer, PathFindingLayerInterface advancedRTSGameLayer){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(associatedAdvancedRTSGameLayer!.getName());
    
stringBuffer!.append(" Adding Waypoint to Selected: ");
    
stringBuffer!.append(advancedRTSGameLayer!.getName());
    

                        if(advancedRTSGameLayer!.getParentLayer() != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(" With Parent: ");
    
stringBuffer!.append(advancedRTSGameLayer!.getParentLayer()!.getName());
    

                                    }
                                
this.logUtil!.putF(stringBuffer!.toString(), this, "selected: onWaypointEvent");
    
}


    public targetMovedSoRetarget(PathFindingLayerInterface associatedAdvancedRTSGameLayer){
this.logUtil!.putF(new StringMaker().append(associatedAdvancedRTSGameLayer!.getName())!.append(" - target moved so retargeting")!.toString(), this, "turnTo");
    
}


};

            

