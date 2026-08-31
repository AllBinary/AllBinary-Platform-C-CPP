
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR2_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR2_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/layer/SteeringVisitor.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/MultipassWaypointPathRunnable.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/WaypointPathRunnable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointPathRunnableBase.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/math/LayerDistanceUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/thread/PathFindingThreadPool.h>

      
#include <org/allbinary/thread/ThreadPool.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UnitWaypointBehavior.h"
#include "UnitWaypointStrings.h"
#include "UnitLayer.h"
//#include "BuildingSteeringVisitor.h"

class UnitWaypointBehavior2: public UnitWaypointBehavior {
        

    private: static const runningWaypointPathList: BasicArrayList = new BasicArrayListD();

    private: static const TARGET_DISTANCE: string = "Target Distance";

    private: static const TARGET_LAYER: string = "Target Layer";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const unitWaypointStrings: UnitWaypointStrings = UnitWaypointStrings.getInstance()!;

    private: const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

    private: const layerDistanceUtil: LayerDistanceUtil = LayerDistanceUtil.getInstance()!;

    private: const pathFindingThreadPool: ThreadPool = PathFindingThreadPool.getInstance()!;

    private: const progressTimeDelayHelper: TimeDelayHelper;

    private: const wanderPathsList: BasicArrayList;

    private: const waypointPathRunnable: WaypointPathRunnableBase;

    private: sensorRange: int32_t = 0;

    private: closeRange: int32_t = 0;

    private: nextUnvisitedPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: afterNextUnvisitedPathGeographicMapCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: waitingOnTargetPath: bool= false;

    private: waitingOnWaypointPath: bool= false;

    private: targetWithoutCachedPathLayerInterface: CollidableDestroyableDamageableLayer = CollidableDestroyableDamageableLayer.getNullInstance()!;

public constructor (UnitLayer ownerAdvancedRTSGameLayer, AdvancedRTSGameLayer fakeWaypoint);

    initRange(int32_t weaponRange);

    public GeographicMapCellPosition getNextUnvisitedPathGeographicMapCellPosition();

    public bool isRunning();

                //@Throws(Exception.constructor)
            
    public processTick(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    onEnemyMovement(AdvancedRTSGameLayer layerInterface);

                //@Throws(Exception.constructor)
            
    processPossibleTarget(AdvancedRTSGameLayer layerInterface, int32_t anotherTargetDistance);

                //@Throws(Exception.constructor)
            
    teleportIfNoProgress();

                //@Throws(Exception.constructor)
            
    setTarget(AdvancedRTSGameLayer layerInterface, int32_t anotherTargetDistance);

                //@Throws(Exception.constructor)
            
    setTargetPath();

                //@Throws(Exception.constructor)
            
    setGeographicMapCellHistoryPath(BasicArrayList geographicMapCellPositionBasicArrayList);

                //@Throws(Exception.constructor)
            
    processWaypoint();

                //@Throws(Exception.constructor)
            
    wander();

    bool visitIfAtMidPoint(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    processTargetList();

                //@Throws(Exception.constructor)
            
    processTargeting();

    updateCurrentPathGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    setWaypointPath(AdvancedRTSGameLayer waypointLayer);

                //@Throws(Exception.constructor)
            
    runWaypointPathTask(AdvancedRTSGameLayer waypointLayer);

                //@Throws(Exception.constructor)
            
    removeWaypoint(RTSLayer waypointLayer, string reason);

                //@Throws(Exception.constructor)
            
    public clearTarget();

    public bool isWaypointListEmptyOrOnlyTargets();

    bool isCloseRange(AdvancedRTSGameLayer layerInterface, int32_t targetDistance);

    public bool isInSensorRange(CollidableDestroyableDamageableLayer layerInterface, int32_t targetDistance);

    public string getCurrentTargetingStateString();

                //@Throws(Exception.constructor)
            
    addWaypointFromUser(AdvancedRTSGameLayer advancedRTSGameLayer);

//inner= member=true isStatic=
class BuildingSteeringVisitor: public SteeringVisitor {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const positionList: BasicArrayList = new BasicArrayListD();

    public any visit(any = {} anyType);

    public BasicArrayList getPositionList();

};

            
    private: const buildingSteeringVisitor = new this.BuildingSteeringVisitor();

                //@Throws(Exception.constructor)
            
    public addBuildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition);

                //@Throws(Exception.constructor)
            
    bool buildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR2_H
