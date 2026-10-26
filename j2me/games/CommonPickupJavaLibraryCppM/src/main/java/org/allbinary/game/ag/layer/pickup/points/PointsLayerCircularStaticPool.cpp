
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>

      
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PointsLayer.h"

class PointsLayerCircularStaticPool: public AllBinaryLayerCircularPool {

public: PointsLayerCircularStaticPool(AllBinaryLayerFactoryInterface allbinaryLayerFactoryInterface, int32_t total){
super.initAllBinaryLayerCircularPool(allbinaryLayerFactoryInterface, total);
    
}


                //@Throws(Exception.constructor)
            
    public: void visit(AllBinaryLayer sourceLayerInterface){

    PointsLayer pointsLayer = this->getNextInstance();;
    

    ScoreableInterface scoreableInterface = sourceLayerInterface;;
    
pointsLayer.visit(scoreableInterface);
    
}


};

            

