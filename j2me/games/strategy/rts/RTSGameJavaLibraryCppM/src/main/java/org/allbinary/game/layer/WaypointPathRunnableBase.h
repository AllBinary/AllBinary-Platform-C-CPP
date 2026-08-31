
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLEBASE_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLEBASE_H

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

    public bool isRunning();

    public setRunning(bool isRunning);

                //@Throws(Exception.constructor)
            
    public setThread(Thread thread);

    public setTargetLayer(PathFindingLayerInterface waypointLayer);

    public setPriority();

    public PathFindingLayerInterface getTargetLayer();

    public setUnitLayer(PathFindingLayerInterface unitLayer);

    public int32_t getPriority();

    public bool isDone();

    public run();

    public reset();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLEBASE_H
