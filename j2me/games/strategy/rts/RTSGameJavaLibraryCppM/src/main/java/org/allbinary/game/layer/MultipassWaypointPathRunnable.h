
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

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
            #include "../../../../java/lang/Runnable.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/thread/ARunnable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/MultipassState.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointPathRunnableBase.h"
//#include "FirstRunnable.h"
//#include "SecondRunnable.h"
//#include "EndRunnable.h"
#include "WaypointBehaviorBase.h"

class MultipassWaypointPathRunnable: public WaypointPathRunnableBase {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    private: const multipassState: MultipassState = new MultipassState();

    private: done: bool = false;

    private: list: BasicArrayList = this.basicArrayListUtil!.getImmutableInstance()!;

    private: pathFindingInfo: any = NullUtil.getInstance()!.NULL_OBJECT;

//inner= member=true isStatic=
class FirstRunnable: public ARunnable {
        

    private: const multipassWaypointPathRunnable: MultipassWaypointPathRunnable;

 constructor (MultipassWaypointPathRunnable multipassWaypointPathRunnable);

    public run();

};

            
    private: const FIRST_RUNNABLE: Runnable = new this.FirstRunnable(this);
//    private boolean first = true;
//inner= member=true isStatic=
class SecondRunnable: public ARunnable {
        

    private: const multipassWaypointPathRunnable: MultipassWaypointPathRunnable;

 constructor (MultipassWaypointPathRunnable multipassWaypointPathRunnable);

    public run();

};

            
    private: const SECOND_RUNNABLE: Runnable = new this.SecondRunnable(this);

//inner= member=true isStatic=
class EndRunnable: public ARunnable {
        

    private: const multipassWaypointPathRunnable: MultipassWaypointPathRunnable;

 constructor (MultipassWaypointPathRunnable multipassWaypointPathRunnable);

    public run();

};

            
    private: const END_RUNNABLE: Runnable = new this.EndRunnable(this);

    private: const ALREADY_ENDED_RUNNABLE: Runnable = new class extends ARunnable
                                {
                                
    public run();
                                }
                            ;

    private: currentPassRunnable: Runnable = this.FIRST_RUNNABLE;

public constructor ();

    public setRunning(bool isRunning);

    public run();

    reset2();

    finish();

    public bool isDone();

    public reset();

    processFirstRunnable();

    processSecondRunnable();

    processEndRunnable();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_MULTIPASSWAYPOINTPATHRUNNABLE_H
