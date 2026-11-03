
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTBASE_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class AllBinaryGameLayerManager;
class PathFindingLayerInterface;
class ForcedLogUtil;
class AllBinaryEventObject;
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
class EventStrings;
class NoSound;
class Sound;
class GeographicMapCellPosition;
class MultipassState;
class PathFindingInfo;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointBase
            : public virtual Object
        , public virtual EventListenerInterface {

    private: static WaypointBase* NULL_WAYPOINT_BASE_owner();
    public: static WaypointBase* NULL_WAYPOINT_BASE;

    private: BasicArrayList* connectedWaypointList;

    private: Sound* sound;

    /*protected*/ public: AllBinaryGameLayerManager* allBinaryGameLayerManagerP;

public: WaypointBase(Sound* sound);

    public: Sound* getSound();

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager);

    public: BasicArrayList* getConnectedWaypointList();

    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    public: PathFindingInfo* getPathFindingInfo(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getPathsList(GeographicMapCellPosition* geographicMapCellPosition, PathFindingInfo* pathFindingInfo, MultipassState* multipassState);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getPathsListRunnable(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getPathsListFromCacheOnly(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: void visit(PathFindingLayerInterface* unitLayer);

    public: void reset();

    public: int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTBASE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTBASE_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/media/audio/NoSound.h>)
#include <org/allbinary/media/audio/NoSound.h>
#endif
#if __has_include(<org/allbinary/media/audio/Sound.h>)
#include <org/allbinary/media/audio/Sound.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/MultipassState.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/MultipassState.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
