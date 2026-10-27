
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
        



        #ifndef ORG_ALLBINARY_GAME_TICK_TICKABLELAYERPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_TICK_TICKABLELAYERPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/tick/TickableLayerProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/tick/TickableLayerManager.h"
#include "org/allbinary/game/tick/TickableInterface.h"


TickableLayerProcessor::TickableLayerProcessor() : LayerProcessor(new TickableLayerManager()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto TickableLayerProcessor::processAt(AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) -> void{

    TickableInterface* tickableInterface = dynamic_cast<TickableInterface*>(layerInterface);;
    
tickableInterface->processTick(allBinaryLayerManager);
    
}


    auto TickableLayerProcessor::isProcessorLayer(AllBinaryLayer* layerInterface) -> bool{

                        if(layerInterface->implmentsTickableInterface())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_TICK_TICKABLELAYERPROCESSOR_CPP
