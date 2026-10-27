
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYERCIRCULARSTATICPOOL_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYERCIRCULARSTATICPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/pickup/points/PointsLayerCircularStaticPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>

      
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/pickup/points/PointsLayer.h"


PointsLayerCircularStaticPool::PointsLayerCircularStaticPool(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total){
AllBinaryLayerCircularPool::initAllBinaryLayerCircularPool(allbinaryLayerFactoryInterface, total);
    
}


                //@Throws(Exception.constructor)
            
    auto PointsLayerCircularStaticPool::visit(AllBinaryLayer* sourceLayerInterface) -> void{

    PointsLayer* pointsLayer = dynamic_cast<PointsLayer*>(this->getNextInstance());;
    

    ScoreableInterface* scoreableInterface = dynamic_cast<ScoreableInterface*>(sourceLayerInterface);;
    
pointsLayer->visit(scoreableInterface);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYERCIRCULARSTATICPOOL_CPP
