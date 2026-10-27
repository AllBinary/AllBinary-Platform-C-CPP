
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/math/LayerDistanceUtil.h>

      
#include <org/allbinary/thread/PriorityRunnable.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"

class WaypointPathRunnableBase
            : public Object
        , public RunnableInterface, public PriorityRunnable {

    private: LayerDistanceUtil* layerDistanceUtil = LayerDistanceUtil::getInstance();

    protected: PathFindingLayerInterface* pathFindingLayer = NullPathFindingLayer::NULL_PATH_FINDING_LAYER;

    protected: PathFindingLayerInterface* targetPathFindingLayer = NullPathFindingLayer::NULL_PATH_FINDING_LAYER;

    protected: int32_t priorityP = Integer.MAX_VALUE;

    protected: bool runningP= false;

    public: bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->runningP;
    
}


    public: void setRunning(bool isRunning){
this->runningP= isRunning;
    
}


                //@Throws(Exception.constructor)
            
    public: void setThread(Thread* thread){
}


    public: void setTargetLayer(PathFindingLayerInterface* waypointLayer){
this->targetPathFindingLayer= waypointLayer;
    
this->setPriority();
    
}


    public: void setPriority(){

    AllBinaryLayer* pathFindingLayer = dynamic_cast<AllBinaryLayer*>(this->pathFindingLayer);;
    

    AllBinaryLayer* targetLayer = dynamic_cast<AllBinaryLayer*>(this->targetPathFindingLayer);;
    

                        if(targetLayer != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t distance = this->layerDistanceUtil->getDistance(targetLayer, pathFindingLayer);;
    

    int32_t distanceCategory = distance /70;;
    
this->priorityP= distanceCategory;
    

                                    }
                                
}


    public: PathFindingLayerInterface* getTargetLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->targetPathFindingLayer;
    
}


    public: void setUnitLayer(PathFindingLayerInterface* unitLayer){
this->pathFindingLayer= unitLayer;
    
}


    public: int32_t getPriority(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->priorityP;
    
}


    public: bool isDone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: void run(){
}


    public: void reset(){
}


};

            

