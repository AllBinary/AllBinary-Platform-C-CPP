
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class J2MEUtil;
class Features;
#include <org/allbinary/game/layer/SteeringVisitor.h>
class AdvancedRTSGameLayer;
class MultipassWaypointPathRunnable;
class RTSLayer;
class WaypointPathRunnable;
class BasicArrayList;
class BasicArrayListD;
class CommonStrings;
class StringMaker;
class LogUtil;
class PathFindingLayerInterface;
class WaypointPathRunnableBase;
class CollidableDestroyableDamageableLayer;
class WaypointBase;
class TrackingEventHandler;
class GPoint;
class BasicColorFactory;
class AllBinaryLayer;
class AllBinaryLayerManager;
class NullUtil;
class BooleanFactory;
class LayerDistanceUtil;
class GeographicMapCellPosition;
class SimpleGeographicMapCellPositionFactory;
class PathFindingThreadPool;
class ThreadPool;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"
class UnitWaypointStrings;
class UnitLayer;
//class BuildingSteeringVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UnitWaypointBehavior2: public UnitWaypointBehavior {
private: class BuildingSteeringVisitor;

    private: static BasicArrayList* runningWaypointPathList;

    private: static inline const std::string TARGET_DISTANCE = "Target Distance";

    private: static inline const std::string TARGET_LAYER = "Target Layer";

    /*protected*/ public: LogUtil* logUtil;

    private: UnitWaypointStrings* unitWaypointStrings;

    private: BasicColorFactory* basicColorFactory;

    private: LayerDistanceUtil* layerDistanceUtil;

    private: ThreadPool* pathFindingThreadPool;

    private: TimeDelayHelper* progressTimeDelayHelper;

    private: BasicArrayList* wanderPathsList;

    private: WaypointPathRunnableBase* waypointPathRunnable;

    private: int32_t sensorRange = 0;

    private: int32_t closeRange = 0;

    private: GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition;

    private: GeographicMapCellPosition* afterNextUnvisitedPathGeographicMapCellPosition;

    private: bool waitingOnTargetPath= false;

    private: bool waitingOnWaypointPath= false;

    private: CollidableDestroyableDamageableLayer* targetWithoutCachedPathLayerInterface;

public: UnitWaypointBehavior2(UnitLayer* ownerAdvancedRTSGameLayer, AdvancedRTSGameLayer* fakeWaypoint);

    /*protected*/ public: void initRange(int32_t weaponRange);

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
            
    /*protected*/ public: void setGeographicMapCellHistoryPath(BasicArrayList* geographicMapCellPositionBasicArrayList);

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
            
    /*protected*/ public: void addWaypointFromUser(AdvancedRTSGameLayer* advancedRTSGameLayer);

//inner= member=true isStatic=
private: class BuildingSteeringVisitor: public SteeringVisitor {

    public: UnitWaypointBehavior2* outer = nullptr;
/*Static stuff is not allowed for CPP inner classes*//**/



            
    public: BuildingSteeringVisitor();
        
    private: BasicArrayList* positionList;

    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }

    public: BasicArrayList* getPositionList();

};

            
    private: BuildingSteeringVisitor* buildingSteeringVisitor;

                //@Throws(Exception.constructor)
            
    public: void addBuildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);

                //@Throws(Exception.constructor)
            
    private: bool buildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR2_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR2_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTBEHAVIOR2_H_COMPLETE
        #if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/layer/SteeringVisitor.h>)
#include <org/allbinary/game/layer/SteeringVisitor.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/MultipassWaypointPathRunnable.h>)
#include <org/allbinary/game/layer/MultipassWaypointPathRunnable.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/WaypointPathRunnable.h>)
#include <org/allbinary/game/layer/WaypointPathRunnable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/WaypointPathRunnableBase.h>)
#include <org/allbinary/game/layer/WaypointPathRunnableBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointBase.h>)
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEventHandler.h>)
#include <org/allbinary/game/tracking/TrackingEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/math/LayerDistanceUtil.h>)
#include <org/allbinary/math/LayerDistanceUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/thread/PathFindingThreadPool.h>)
#include <org/allbinary/thread/PathFindingThreadPool.h>
#endif
#if __has_include(<org/allbinary/thread/ThreadPool.h>)
#include <org/allbinary/thread/ThreadPool.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/game/layer/unit/UnitWaypointBehavior.h")
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"
#endif
#if __has_include("org/allbinary/game/layer/unit/UnitWaypointStrings.h")
#include "org/allbinary/game/layer/unit/UnitWaypointStrings.h"
#endif
#if __has_include("org/allbinary/game/layer/unit/UnitLayer.h")
#include "org/allbinary/game/layer/unit/UnitLayer.h"
#endif

        #endif
    
