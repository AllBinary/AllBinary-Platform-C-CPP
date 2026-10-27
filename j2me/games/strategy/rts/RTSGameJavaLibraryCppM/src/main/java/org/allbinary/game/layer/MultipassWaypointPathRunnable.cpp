
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        #include "org/allbinary/game/layer/WaypointPathRunnableBase.h"
//#include "org/allbinary/game/layer/FirstRunnable.h"
//#include "org/allbinary/game/layer/SecondRunnable.h"
//#include "org/allbinary/game/layer/EndRunnable.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"

class MultipassWaypointPathRunnable: public WaypointPathRunnableBase {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BasicArrayListUtil* basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: MultipassState* multipassState = new MultipassState();

    private: bool done = false;

    private: BasicArrayList* list = this->basicArrayListUtil->getImmutableInstance();

    private: Object* pathFindingInfo = NullUtil::getInstance()->NULL_OBJECT;

//inner= member=true isStatic=
class FirstRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable* multipassWaypointPathRunnable;

: FirstRunnable(MultipassWaypointPathRunnable* multipassWaypointPathRunnable){
this->multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    public: void run(){
this->multipassWaypointPathRunnable->processFirstRunnable();
    
}


};

            
    private: Runnable* FIRST_RUNNABLE = new FirstRunnable(this);
//    private boolean first = true;
//inner= member=true isStatic=
class SecondRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable* multipassWaypointPathRunnable;

: SecondRunnable(MultipassWaypointPathRunnable* multipassWaypointPathRunnable){
this->multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    public: void run(){
this->multipassWaypointPathRunnable->processSecondRunnable();
    
}


};

            
    private: Runnable* SECOND_RUNNABLE = new SecondRunnable(this);

//inner= member=true isStatic=
class EndRunnable: public ARunnable {

    private: MultipassWaypointPathRunnable* multipassWaypointPathRunnable;

: EndRunnable(MultipassWaypointPathRunnable* multipassWaypointPathRunnable){
this->multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    public: void run(){
this->multipassWaypointPathRunnable->processEndRunnable();
    
}


};

            
    private: Runnable* END_RUNNABLE = new EndRunnable(this);

    private: Runnable* ALREADY_ENDED_RUNNABLE = class extends ARunnable
                                {
                                
    public: void run(){



                            throw new RuntimeException();
                    
}

                                }
                            ;

    private: Runnable* currentPassRunnable = this->FIRST_RUNNABLE;

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

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            this->currentPassRunnable->run();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
this->setRunning(false);
    
}

}


    private: void reset2(){
this->multipassState->step= 0;
    
this->multipassState->iteration= 0;
    
this->multipassState->iteration2= 0;
    
this->pathFindingInfo= NullUtil::getInstance()->NULL_OBJECT;
    
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
            this->pathFindingLayer.getWaypointRunnableLogHelper()->start(this->pathFindingLayer);
    
this->reset2();
    

    GeographicMapCellPosition* geographicMapCellPosition = this->pathFindingLayer.getCurrentGeographicMapCellPosition();;
    

                        if(geographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new Exception("Should never be running here");
                    

                                    }
                                
this->pathFindingInfo= this->targetPathFindingLayer.getWaypointBehavior()->getWaypoint()->getPathFindingInfo(geographicMapCellPosition);
    

    PathFindingInfo* localPathFindingInfo = dynamic_cast<PathFindingInfo*>(this->pathFindingInfo);;
    
this->list= this->targetPathFindingLayer.getWaypointBehavior()->getWaypoint()->getPathsList(geographicMapCellPosition, localPathFindingInfo, this->multipassState);
    

                        if(this->list != this->basicArrayListUtil->getImmutableInstance())
                        
                                    {
                                    this->END_RUNNABLE->run();
    

                                    }
                                
                        else {
                            this->currentPassRunnable= this->SECOND_RUNNABLE;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
this->setRunning(false);
    
this->finish();
    
}

}


    private: void processSecondRunnable(){

        try {
            
    GeographicMapCellPosition* geographicMapCellPosition = this->pathFindingLayer.getCurrentGeographicMapCellPosition();;
    

    PathFindingInfo* localPathFindingInfo = dynamic_cast<PathFindingInfo*>(this->pathFindingInfo);;
    
this->list= this->targetPathFindingLayer.getWaypointBehavior()->getWaypoint()->getPathsList(geographicMapCellPosition, localPathFindingInfo, this->multipassState);
    

                        if(this->list != this->basicArrayListUtil->getImmutableInstance())
                        
                                    {
                                    this->END_RUNNABLE->run();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
this->setRunning(false);
    
this->finish();
    
}

}


    private: void processEndRunnable(){

        try {
            
    WaypointBehaviorBase* waypointBehavior = this->pathFindingLayer.getWaypointBehavior();;
    
waypointBehavior->setWaypointPathsList(this->list);
    
this->pathFindingLayer.getWaypointRunnableLogHelper()->end(this->pathFindingLayer);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
this->setRunning(false);
    
}

this->finish();
    
}


};

            

