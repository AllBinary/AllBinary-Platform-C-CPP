
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_MULTIPASSWAYPOINTPATHRUNNABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_MULTIPASSWAYPOINTPATHRUNNABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Runnable.h"
        
class NullUtil;
#include <org/allbinary/thread/ARunnable.h>
class LogUtil;
class CommonStrings;
class GeographicMapCellPosition;
class MultipassState;
class PathFindingInfo;
class BasicArrayList;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/WaypointPathRunnableBase.h"
//class FirstRunnable;
//class SecondRunnable;
//class EndRunnable;
class WaypointBehaviorBase;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultipassWaypointPathRunnable: public WaypointPathRunnableBase {
private: class FirstRunnable;
private: class SecondRunnable;
private: class EndRunnable;

    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayListUtil* basicArrayListUtil;

    private: MultipassState* multipassState;

    private: bool done = false;

    private: BasicArrayList* list;

    private: Object* pathFindingInfo;

//inner= member=true isStatic=
private: class FirstRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable* multipassWaypointPathRunnable;

public: FirstRunnable(MultipassWaypointPathRunnable* multipassWaypointPathRunnable);

    public: void run();

};

            
    private: Runnable* FIRST_RUNNABLE;
//    private boolean first = true;
//inner= member=true isStatic=
private: class SecondRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable* multipassWaypointPathRunnable;

public: SecondRunnable(MultipassWaypointPathRunnable* multipassWaypointPathRunnable);

    public: void run();

};

            
    private: Runnable* SECOND_RUNNABLE;

//inner= member=true isStatic=
private: class EndRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable* multipassWaypointPathRunnable;

public: EndRunnable(MultipassWaypointPathRunnable* multipassWaypointPathRunnable);

    public: void run();

};

            
    private: Runnable* END_RUNNABLE;

    private: Runnable* ALREADY_ENDED_RUNNABLE;

    private: Runnable* currentPassRunnable;

public: MultipassWaypointPathRunnable();

    public: void setRunning(bool isRunning);

    public: void run();

    private: void reset2();

    private: void finish();

    public: bool isDone();

    public: void reset();

    private: void processFirstRunnable();

    private: void processSecondRunnable();

    private: void processEndRunnable();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_MULTIPASSWAYPOINTPATHRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_MULTIPASSWAYPOINTPATHRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_MULTIPASSWAYPOINTPATHRUNNABLE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
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
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/WaypointPathRunnableBase.h")
#include "org/allbinary/game/layer/WaypointPathRunnableBase.h"
#endif
#if __has_include("org/allbinary/game/layer/WaypointBehaviorBase.h")
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#endif

        #endif
    
