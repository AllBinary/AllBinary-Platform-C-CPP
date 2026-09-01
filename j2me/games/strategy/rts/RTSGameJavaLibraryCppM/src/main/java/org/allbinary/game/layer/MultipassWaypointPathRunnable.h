
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: const MultipassState multipassState = MultipassState();

    private: bool done = false;

    private: BasicArrayList list = this->basicArrayListUtil.getImmutableInstance();

    private: Object* pathFindingInfo = NullUtil::getInstance().NULL_OBJECT;

//inner= member=true isStatic=
class FirstRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable multipassWaypointPathRunnable;

: FirstRunnable(MultipassWaypointPathRunnable multipassWaypointPathRunnable);

    public: void run();

};

            
    private: const Runnable FIRST_RUNNABLE = FirstRunnable(this);
//    private boolean first = true;
//inner= member=true isStatic=
class SecondRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable multipassWaypointPathRunnable;

: SecondRunnable(MultipassWaypointPathRunnable multipassWaypointPathRunnable);

    public: void run();

};

            
    private: const Runnable SECOND_RUNNABLE = SecondRunnable(this);

//inner= member=true isStatic=
class EndRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable multipassWaypointPathRunnable;

: EndRunnable(MultipassWaypointPathRunnable multipassWaypointPathRunnable);

    public: void run();

};

            
    private: const Runnable END_RUNNABLE = EndRunnable(this);

    private: const Runnable ALREADY_ENDED_RUNNABLE = class extends ARunnable
                                {
                                
    public: void run();
                                }
                            ;

    private: Runnable currentPassRunnable = this->FIRST_RUNNABLE;

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
