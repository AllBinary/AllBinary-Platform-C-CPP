
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
class AllBinaryLayer;
class LayerDistanceUtil;
#include <org/allbinary/thread/PriorityRunnable.h>
#include <org/allbinary/thread/RunnableInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NullPathFindingLayer;
class PathFindingLayerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointPathRunnableBase
            : public virtual Object
        , public virtual RunnableInterface, public virtual PriorityRunnable {


            
    public: WaypointPathRunnableBase();
        
    private: LayerDistanceUtil* layerDistanceUtil;

    /*protected*/ public: PathFindingLayerInterface* pathFindingLayer;

    /*protected*/ public: PathFindingLayerInterface* targetPathFindingLayer;

    /*protected*/ public: int32_t priorityP;

    /*protected*/ public: bool runningP= false;

    public: bool isRunning();

    public: void setRunning(bool isRunning);

                //@Throws(Exception.constructor)
            
    public: void setThread(Thread* thread);

    public: void setTargetLayer(PathFindingLayerInterface* waypointLayer);

    public: void setPriority();

    public: PathFindingLayerInterface* getTargetLayer();

    public: void setUnitLayer(PathFindingLayerInterface* unitLayer);

    public: int32_t getPriority();

    public: bool isDone();

    public: void run();

    public: void reset();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLEBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLEBASE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLEBASE_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/math/LayerDistanceUtil.h>)
#include <org/allbinary/math/LayerDistanceUtil.h>
#endif
#if __has_include(<org/allbinary/thread/PriorityRunnable.h>)
#include <org/allbinary/thread/PriorityRunnable.h>
#endif
#if __has_include(<org/allbinary/thread/RunnableInterface.h>)
#include <org/allbinary/thread/RunnableInterface.h>
#endif
#if __has_include("org/allbinary/game/layer/NullPathFindingLayer.h")
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/PathFindingLayerInterface.h")
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#endif

        #endif
    
