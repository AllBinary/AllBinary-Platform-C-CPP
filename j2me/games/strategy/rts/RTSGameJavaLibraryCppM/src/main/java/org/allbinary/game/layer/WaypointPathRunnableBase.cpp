
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLEBASE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLEBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/WaypointPathRunnableBase.h"
        

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


WaypointPathRunnableBase::WaypointPathRunnableBase() : layerDistanceUtil(LayerDistanceUtil::getInstance()), pathFindingLayer(NullPathFindingLayer::NULL_PATH_FINDING_LAYER), targetPathFindingLayer(NullPathFindingLayer::NULL_PATH_FINDING_LAYER), priorityP(Integer.MAX_VALUE) {
        }
        
    auto WaypointPathRunnableBase::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->runningP;
    
}


    auto WaypointPathRunnableBase::setRunning(bool isRunning) -> void{
this->runningP= isRunning;
    
}


                //@Throws(Exception.constructor)
            
    auto WaypointPathRunnableBase::setThread(Thread* thread) -> void{
}


    auto WaypointPathRunnableBase::setTargetLayer(PathFindingLayerInterface* waypointLayer) -> void{
this->targetPathFindingLayer= waypointLayer;
    
this->setPriority();
    
}


    auto WaypointPathRunnableBase::setPriority() -> void{

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


    auto WaypointPathRunnableBase::getTargetLayer() -> PathFindingLayerInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->targetPathFindingLayer;
    
}


    auto WaypointPathRunnableBase::setUnitLayer(PathFindingLayerInterface* unitLayer) -> void{
this->pathFindingLayer= unitLayer;
    
}


    auto WaypointPathRunnableBase::getPriority() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->priorityP;
    
}


    auto WaypointPathRunnableBase::isDone() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto WaypointPathRunnableBase::run() -> void{
}


    auto WaypointPathRunnableBase::reset() -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLEBASE_CPP
