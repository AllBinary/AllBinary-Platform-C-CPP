
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Runnable.h"
        
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

: FirstRunnable(MultipassWaypointPathRunnable multipassWaypointPathRunnable){
this->multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    public: void run(){
this->multipassWaypointPathRunnable.processFirstRunnable();
    
}


};

            
    private: const Runnable FIRST_RUNNABLE = FirstRunnable(this);
//    private boolean first = true;
//inner= member=true isStatic=
class SecondRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable multipassWaypointPathRunnable;

: SecondRunnable(MultipassWaypointPathRunnable multipassWaypointPathRunnable){
this->multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    public: void run(){
this->multipassWaypointPathRunnable.processSecondRunnable();
    
}


};

            
    private: const Runnable SECOND_RUNNABLE = SecondRunnable(this);

//inner= member=true isStatic=
class EndRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable multipassWaypointPathRunnable;

: EndRunnable(MultipassWaypointPathRunnable multipassWaypointPathRunnable){
this->multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    public: void run(){
this->multipassWaypointPathRunnable.processEndRunnable();
    
}


};

            
    private: const Runnable END_RUNNABLE = EndRunnable(this);

    private: const Runnable ALREADY_ENDED_RUNNABLE = class extends ARunnable
                                {
                                
    public: void run(){



                            throw RuntimeException();
                    
}

                                }
                            ;

    private: Runnable currentPassRunnable = this->FIRST_RUNNABLE;

public: MultipassWaypointPathRunnable(){
}


    public: void setRunning(bool isRunning){
this->runningP= isRunning;
    

                        if(this->runningP)
                        
                                    {
                                    this->reset();
    
this->done= false;
    

                                    }
                                
}


    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            this->currentPassRunnable.run();
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
this->setRunning(false);
    
}

}


    private: void reset2(){
this->multipassState.step= 0;
    
this->multipassState.iteration= 0;
    
this->multipassState.iteration2= 0;
    
this->pathFindingInfo= NullUtil::getInstance().NULL_OBJECT;
    
}


    private: void finish(){
this->reset2();
    
this->currentPassRunnable= this->ALREADY_ENDED_RUNNABLE;
    
this->done= true;
    
}


    public: bool isDone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->done;
    
}


    public: void reset(){
this->reset2();
    
this->currentPassRunnable= this->FIRST_RUNNABLE;
    
this->done= false;
    
}


    private: void processFirstRunnable(){

        try {
            this->pathFindingLayer.getWaypointRunnableLogHelper().start(this->pathFindingLayer);
    
this->reset2();
    

    GeographicMapCellPosition geographicMapCellPosition = this->pathFindingLayer.getCurrentGeographicMapCellPosition();;
    

                        if(geographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Should never be running here");
                    

                                    }
                                
this->pathFindingInfo= this->targetPathFindingLayer.getWaypointBehavior().getWaypoint().getPathFindingInfo(geographicMapCellPosition);
    

    PathFindingInfo localPathFindingInfo = this->pathFindingInfo;;
    
this->list= this->targetPathFindingLayer.getWaypointBehavior().getWaypoint().getPathsList(geographicMapCellPosition, localPathFindingInfo, this->multipassState);
    

                        if(this->list != this->basicArrayListUtil.getImmutableInstance())
                        
                                    {
                                    this->END_RUNNABLE.run();
    

                                    }
                                
                        else {
                            this->currentPassRunnable= this->SECOND_RUNNABLE;
    

                        }
                            

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
this->setRunning(false);
    
this->finish();
    
}

}


    private: void processSecondRunnable(){

        try {
            
    GeographicMapCellPosition geographicMapCellPosition = this->pathFindingLayer.getCurrentGeographicMapCellPosition();;
    

    PathFindingInfo localPathFindingInfo = this->pathFindingInfo;;
    
this->list= this->targetPathFindingLayer.getWaypointBehavior().getWaypoint().getPathsList(geographicMapCellPosition, localPathFindingInfo, this->multipassState);
    

                        if(this->list != this->basicArrayListUtil.getImmutableInstance())
                        
                                    {
                                    this->END_RUNNABLE.run();
    

                                    }
                                

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
this->setRunning(false);
    
this->finish();
    
}

}


    private: void processEndRunnable(){

        try {
            
    WaypointBehaviorBase waypointBehavior = this->pathFindingLayer.getWaypointBehavior();;
    
waypointBehavior.setWaypointPathsList(this->list);
    
this->pathFindingLayer.getWaypointRunnableLogHelper().end(this->pathFindingLayer);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
this->setRunning(false);
    
}

this->finish();
    
}


};

            

