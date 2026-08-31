
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

 constructor (MultipassWaypointPathRunnable multipassWaypointPathRunnable){

            super();
        this.multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    public run(){
this.multipassWaypointPathRunnable!.processFirstRunnable();
    
}


};

            
    private: const FIRST_RUNNABLE: Runnable = new this.FirstRunnable(this);
//    private boolean first = true;
//inner= member=true isStatic=
class SecondRunnable: public ARunnable {
        

    private: const multipassWaypointPathRunnable: MultipassWaypointPathRunnable;

 constructor (MultipassWaypointPathRunnable multipassWaypointPathRunnable){

            super();
        this.multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    public run(){
this.multipassWaypointPathRunnable!.processSecondRunnable();
    
}


};

            
    private: const SECOND_RUNNABLE: Runnable = new this.SecondRunnable(this);

//inner= member=true isStatic=
class EndRunnable: public ARunnable {
        

    private: const multipassWaypointPathRunnable: MultipassWaypointPathRunnable;

 constructor (MultipassWaypointPathRunnable multipassWaypointPathRunnable){

            super();
        this.multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    public run(){
this.multipassWaypointPathRunnable!.processEndRunnable();
    
}


};

            
    private: const END_RUNNABLE: Runnable = new this.EndRunnable(this);

    private: const ALREADY_ENDED_RUNNABLE: Runnable = new class extends ARunnable
                                {
                                
    public run(){



                            throw new RuntimeException();
                    
}

                                }
                            ;

    private: currentPassRunnable: Runnable = this.FIRST_RUNNABLE;

public constructor (){

            super();
        }


    public setRunning(bool isRunning){
this.runningP= isRunning;
    

                        if(this.runningP)
                        
                                    {
                                    this.reset();
    
this.done= false;
    

                                    }
                                
}


    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            this.currentPassRunnable!.run();
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
this.setRunning(false);
    
}

}


    reset2(){
this.multipassState!.step= 0;
    
this.multipassState!.iteration= 0;
    
this.multipassState!.iteration2= 0;
    
this.pathFindingInfo= NullUtil.getInstance()!.NULL_OBJECT;
    
}


    finish(){
this.reset2();
    
this.currentPassRunnable= this.ALREADY_ENDED_RUNNABLE;
    
this.done= true;
    
}


    public bool isDone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.done;
    
}


    public reset(){
this.reset2();
    
this.currentPassRunnable= this.FIRST_RUNNABLE;
    
this.done= false;
    
}


    processFirstRunnable(){

        try {
            this.pathFindingLayer!.getWaypointRunnableLogHelper()!.start(this.pathFindingLayer);
    
this.reset2();
    

    geographicMapCellPosition: GeographicMapCellPosition = this.pathFindingLayer!.getCurrentGeographicMapCellPosition()!;;
    

                        if(geographicMapCellPosition == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Should never be running here");
                    

                                    }
                                
this.pathFindingInfo= this.targetPathFindingLayer!.getWaypointBehavior()!.getWaypoint()!.getPathFindingInfo(geographicMapCellPosition);
    

    localPathFindingInfo: PathFindingInfo = this.pathFindingInfo as PathFindingInfo;;
    
this.list= this.targetPathFindingLayer!.getWaypointBehavior()!.getWaypoint()!.getPathsList(geographicMapCellPosition, localPathFindingInfo, this.multipassState);
    

                        if(this.list != this.basicArrayListUtil!.getImmutableInstance())
                        
                                    {
                                    this.END_RUNNABLE.run();
    

                                    }
                                
                        else {
                            this.currentPassRunnable= this.SECOND_RUNNABLE;
    

                        }
                            

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
this.setRunning(false);
    
this.finish();
    
}

}


    processSecondRunnable(){

        try {
            
    geographicMapCellPosition: GeographicMapCellPosition = this.pathFindingLayer!.getCurrentGeographicMapCellPosition()!;;
    

    localPathFindingInfo: PathFindingInfo = this.pathFindingInfo as PathFindingInfo;;
    
this.list= this.targetPathFindingLayer!.getWaypointBehavior()!.getWaypoint()!.getPathsList(geographicMapCellPosition, localPathFindingInfo, this.multipassState);
    

                        if(this.list != this.basicArrayListUtil!.getImmutableInstance())
                        
                                    {
                                    this.END_RUNNABLE.run();
    

                                    }
                                

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
this.setRunning(false);
    
this.finish();
    
}

}


    processEndRunnable(){

        try {
            
    waypointBehavior: WaypointBehaviorBase = this.pathFindingLayer!.getWaypointBehavior()!;;
    
waypointBehavior!.setWaypointPathsList(this.list);
    
this.pathFindingLayer!.getWaypointRunnableLogHelper()!.end(this.pathFindingLayer);
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
this.setRunning(false);
    
}

this.finish();
    
}


};

            

