
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/math/LayerDistanceUtil.h>

      
#include <org/allbinary/thread/PriorityRunnable.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullPathFindingLayer.h"
#include "PathFindingLayerInterface.h"

class WaypointPathRunnableBase
            : public Object
        : public RunnableInterface, public PriorityRunnable {
        

    private: const layerDistanceUtil: LayerDistanceUtil = LayerDistanceUtil.getInstance()!;

    pathFindingLayer: PathFindingLayerInterface = NullPathFindingLayer.NULL_PATH_FINDING_LAYER;

    targetPathFindingLayer: PathFindingLayerInterface = NullPathFindingLayer.NULL_PATH_FINDING_LAYER;

    priorityP: int32_t = Integer.MAX_VALUE;

    runningP: bool= false;

    public bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.runningP;
    
}


    public setRunning(bool isRunning){
this.runningP= isRunning;
    
}


                //@Throws(Exception.constructor)
            
    public setThread(Thread thread){
}


    public setTargetLayer(PathFindingLayerInterface waypointLayer){
this.targetPathFindingLayer= waypointLayer;
    
this.setPriority();
    
}


    public setPriority(){

    pathFindingLayer: AllBinaryLayer = this.pathFindingLayer as AllBinaryLayer;;
    

    targetLayer: AllBinaryLayer = this.targetPathFindingLayer as AllBinaryLayer;;
    

                        if(targetLayer != 
                                    null
                                )
                        
                                    {
                                    
    distance: int32_t = this.layerDistanceUtil!.getDistance(targetLayer, pathFindingLayer)!;;
    

    distanceCategory: int32_t = distance /70;;
    
this.priorityP= distanceCategory;
    

                                    }
                                
}


    public PathFindingLayerInterface getTargetLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.targetPathFindingLayer;
    
}


    public setUnitLayer(PathFindingLayerInterface unitLayer){
this.pathFindingLayer= unitLayer;
    
}


    public int32_t getPriority(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.priorityP;
    
}


    public bool isDone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public run(){
}


    public reset(){
}


};

            

