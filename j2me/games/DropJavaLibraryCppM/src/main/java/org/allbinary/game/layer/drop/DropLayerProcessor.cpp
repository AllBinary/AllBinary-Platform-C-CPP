
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/BasicLayerProcessor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DropLayerInterface.h"

class DropLayerProcessor: public BasicLayerProcessor {
        

    private: static const LAYER_PROCESSOR: BasicLayerProcessor = new DropLayerProcessor();

    public static BasicLayerProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DropLayerProcessor.LAYER_PROCESSOR;
    
}


private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public process(AllBinaryLayerManager allBinaryLayerManager){

    list: BasicArrayList = this.getList()!;;
    

    size: int32_t = list.size()!;;
    

    layerInterface: AllBinaryLayer;;
    

    dropLayerInterface: DropLayerInterface;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
layerInterface= list.objectArray[index]! as AllBinaryLayer;
    
dropLayerInterface= layerInterface as unknown as DropLayerInterface;
    
layerInterface= dropLayerInterface!.getDroppedLayer() as unknown as AllBinaryLayer;
    
allBinaryLayerManager!.append(layerInterface);
    
}

list.clear();
    
}


};

            

