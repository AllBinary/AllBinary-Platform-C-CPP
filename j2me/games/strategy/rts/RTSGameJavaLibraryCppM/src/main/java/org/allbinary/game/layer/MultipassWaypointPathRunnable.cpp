
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_MULTIPASSWAYPOINTPATHRUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_MULTIPASSWAYPOINTPATHRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/MultipassWaypointPathRunnable.h"
        

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


MultipassWaypointPathRunnable::FirstRunnable::FirstRunnable(MultipassWaypointPathRunnable* multipassWaypointPathRunnable){
this->multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    auto MultipassWaypointPathRunnable::FirstRunnable::run() -> void{
this->multipassWaypointPathRunnable->processFirstRunnable();
    
}


MultipassWaypointPathRunnable::SecondRunnable::SecondRunnable(MultipassWaypointPathRunnable* multipassWaypointPathRunnable){
this->multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    auto MultipassWaypointPathRunnable::SecondRunnable::run() -> void{
this->multipassWaypointPathRunnable->processSecondRunnable();
    
}


MultipassWaypointPathRunnable::EndRunnable::EndRunnable(MultipassWaypointPathRunnable* multipassWaypointPathRunnable){
this->multipassWaypointPathRunnable= multipassWaypointPathRunnable;
    
}


    auto MultipassWaypointPathRunnable::EndRunnable::run() -> void{
this->multipassWaypointPathRunnable->processEndRunnable();
    
}


MultipassWaypointPathRunnable::MultipassWaypointPathRunnable() : logUtil(LogUtil::getInstance()), basicArrayListUtil(BasicArrayListUtil::getInstance()), multipassState(new MultipassState()), list(this->basicArrayListUtil->getImmutableInstance()), pathFindingInfo(NullUtil::getInstance()->NULL_OBJECT), FIRST_RUNNABLE(javaInner(new FirstRunnable(this), this)), SECOND_RUNNABLE(javaInner(new SecondRunnable(this), this)), END_RUNNABLE(javaInner(new EndRunnable(this), this)), ALREADY_ENDED_RUNNABLE([&]() {
    static thread_local MultipassWaypointPathRunnable* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public ARunnable {
    public:
    using ARunnable::ARunnable;
    MultipassWaypointPathRunnable* outer = anonymousOuter0;

    public: void run(){



                            throw RuntimeException();
                    
}

    };
    return new Anonymous0();
}()), currentPassRunnable(this->FIRST_RUNNABLE){
}


    auto MultipassWaypointPathRunnable::setRunning(bool isRunning) -> void{
this->runningP= isRunning;
    

                        if(this->runningP)
                        
                                    {
                                    this->reset();
    
this->done= false;
    

                                    }
                                
}


    auto MultipassWaypointPathRunnable::run() -> void{

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


    auto MultipassWaypointPathRunnable::reset2() -> void{
this->multipassState->step= 0;
    
this->multipassState->iteration= 0;
    
this->multipassState->iteration2= 0;
    
this->pathFindingInfo= NullUtil::getInstance()->NULL_OBJECT;
    
}


    auto MultipassWaypointPathRunnable::finish() -> void{
this->reset2();
    
this->currentPassRunnable= this->ALREADY_ENDED_RUNNABLE;
    
this->done= true;
    
}


    auto MultipassWaypointPathRunnable::isDone() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->done;
    
}


    auto MultipassWaypointPathRunnable::reset() -> void{
this->reset2();
    
this->currentPassRunnable= this->FIRST_RUNNABLE;
    
this->done= false;
    
}


    auto MultipassWaypointPathRunnable::processFirstRunnable() -> void{

        try {
            this->pathFindingLayer->getWaypointRunnableLogHelper()->start(this->pathFindingLayer);
    
this->reset2();
    

    GeographicMapCellPosition* geographicMapCellPosition = this->pathFindingLayer->getCurrentGeographicMapCellPosition();;
    

                        if(geographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Should never be running here");
                    

                                    }
                                
this->pathFindingInfo= this->targetPathFindingLayer->getWaypointBehavior()->getWaypoint()->getPathFindingInfo(geographicMapCellPosition);
    

    PathFindingInfo* localPathFindingInfo = dynamic_cast<PathFindingInfo*>(this->pathFindingInfo);;
    
this->list= this->targetPathFindingLayer->getWaypointBehavior()->getWaypoint()->getPathsList(geographicMapCellPosition, localPathFindingInfo, this->multipassState);
    

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


    auto MultipassWaypointPathRunnable::processSecondRunnable() -> void{

        try {
            
    GeographicMapCellPosition* geographicMapCellPosition = this->pathFindingLayer->getCurrentGeographicMapCellPosition();;
    

    PathFindingInfo* localPathFindingInfo = dynamic_cast<PathFindingInfo*>(this->pathFindingInfo);;
    
this->list= this->targetPathFindingLayer->getWaypointBehavior()->getWaypoint()->getPathsList(geographicMapCellPosition, localPathFindingInfo, this->multipassState);
    

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


    auto MultipassWaypointPathRunnable::processEndRunnable() -> void{

        try {
            
    WaypointBehaviorBase* waypointBehavior = this->pathFindingLayer->getWaypointBehavior();;
    
waypointBehavior->setWaypointPathsList(this->list);
    
this->pathFindingLayer->getWaypointRunnableLogHelper()->end(this->pathFindingLayer);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
this->setRunning(false);
    
}

this->finish();
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_MULTIPASSWAYPOINTPATHRUNNABLE_CPP
