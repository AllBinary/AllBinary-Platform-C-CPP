
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
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OptimizedTickableLayerManager.h"

class OptimizedTickableLayerProcessor: public LayerProcessor {

public: OptimizedTickableLayerProcessor() : LayerProcessor(OptimizedTickableLayerManager()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void processAt(AllBinaryLayerManager allBinaryLayerManager, AllBinaryLayer layerInterface, int32_t index){

    AllBinaryGameLayer tickableInterface = layerInterface;;
    
tickableInterface.processTick(allBinaryLayerManager);
    
}


    public: bool isProcessorLayer(AllBinaryLayer layerInterface){

                        if(layerInterface.implmentsTickableInterface())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


};

            

