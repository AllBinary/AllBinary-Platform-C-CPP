
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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
        #include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"
#include "org/allbinary/game/layer/unit/UnitWaypointStrings.h"
#include "org/allbinary/game/layer/unit/UnitLayer.h"
//#include "org/allbinary/game/layer/unit/BuildingSteeringVisitor.h"

class UnitWaypointBehavior2: public UnitWaypointBehavior {

    private: static inline BasicArrayList* runningWaypointPathList = new BasicArrayListD();

    private: static inline const std::string TARGET_DISTANCE = "Target Distance";

    private: static inline const std::string TARGET_LAYER = "Target Layer";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: UnitWaypointStrings* unitWaypointStrings = UnitWaypointStrings::getInstance();

    private: BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();

    private: LayerDistanceUtil* layerDistanceUtil = LayerDistanceUtil::getInstance();

    private: ThreadPool* pathFindingThreadPool = PathFindingThreadPool::getInstance();

    private: TimeDelayHelper* progressTimeDelayHelper;

    private: BasicArrayList* wanderPathsList;

    private: WaypointPathRunnableBase* waypointPathRunnable;

    private: int32_t sensorRange = 0;

    private: int32_t closeRange = 0;

    private: GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition* afterNextUnvisitedPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: bool waitingOnTargetPath= false;

    private: bool waitingOnWaypointPath= false;

    private: CollidableDestroyableDamageableLayer* targetWithoutCachedPathLayerInterface = CollidableDestroyableDamageableLayer::getNullInstance();

public: UnitWaypointBehavior2(UnitLayer* ownerAdvancedRTSGameLayer, AdvancedRTSGameLayer* fakeWaypoint);

    protected: void initRange(int32_t weaponRange);

    public: GeographicMapCellPosition* getNextUnvisitedPathGeographicMapCellPosition();

    public: bool isRunning();

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    private: void onEnemyMovement(AdvancedRTSGameLayer* layerInterface);

                //@Throws(Exception.constructor)
            
    private: void processPossibleTarget(AdvancedRTSGameLayer* layerInterface, int32_t anotherTargetDistance);

                //@Throws(Exception.constructor)
            
    private: void teleportIfNoProgress();

                //@Throws(Exception.constructor)
            
    private: void setTarget(AdvancedRTSGameLayer* layerInterface, int32_t anotherTargetDistance);

                //@Throws(Exception.constructor)
            
    private: void setTargetPath();

                //@Throws(Exception.constructor)
            
    protected: void setGeographicMapCellHistoryPath(BasicArrayList* geographicMapCellPositionBasicArrayList);

                //@Throws(Exception.constructor)
            
    private: void processWaypoint();

                //@Throws(Exception.constructor)
            
    private: void wander();

    private: bool visitIfAtMidPoint(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    private: void processTargetList();

                //@Throws(Exception.constructor)
            
    private: void processTargeting();

    private: void updateCurrentPathGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    private: void setWaypointPath(AdvancedRTSGameLayer* waypointLayer);

                //@Throws(Exception.constructor)
            
    private: void runWaypointPathTask(AdvancedRTSGameLayer* waypointLayer);

                //@Throws(Exception.constructor)
            
    private: void removeWaypoint(RTSLayer* waypointLayer, std::string reason);

                //@Throws(Exception.constructor)
            
    public: void clearTarget();

    public: bool isWaypointListEmptyOrOnlyTargets();

    private: bool isCloseRange(AdvancedRTSGameLayer* layerInterface, int32_t targetDistance);

    public: bool isInSensorRange(CollidableDestroyableDamageableLayer* layerInterface, int32_t targetDistance);

    public: std::string getCurrentTargetingStateString();

                //@Throws(Exception.constructor)
            
    protected: void addWaypointFromUser(AdvancedRTSGameLayer* advancedRTSGameLayer);

//inner= member=true isStatic=
class BuildingSteeringVisitor: public SteeringVisitor {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: BasicArrayList* positionList = new BasicArrayListD();

    public: Object* visit(Object* anyType);

    public: BasicArrayList* getPositionList();

};

            
    private: buildingSteeringVisitor = new BuildingSteeringVisitor();

                //@Throws(Exception.constructor)
            
    public: void addBuildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);

                //@Throws(Exception.constructor)
            
    private: bool buildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR2_H
