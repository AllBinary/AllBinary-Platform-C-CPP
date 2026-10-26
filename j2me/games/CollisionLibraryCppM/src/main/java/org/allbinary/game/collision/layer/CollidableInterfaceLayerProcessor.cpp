
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
        
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableInterfaceLayerManager.h"
#include "AllBinaryCollisionManager.h"

class CollidableInterfaceLayerProcessor: public LayerProcessor {

public: CollidableInterfaceLayerProcessor() : LayerProcessor(CollidableInterfaceLayerManager()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void processAt(AllBinaryLayerManager allBinaryLayerManager, AllBinaryLayer layerInterface, int32_t index){

    CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface = layerInterface;;
    

                        if(collidableInterfaceCompositeInterface.getCollidableInferface().isCollidable(collidableInterfaceCompositeInterface))
                        
                                    {
                                    AllBinaryCollisionManager::getInstance().process(this->getLayerManager(), collidableInterfaceCompositeInterface, index);
    

                                    }
                                
}


    public: bool isProcessorLayer(AllBinaryLayer layerInterface){

                        if(layerInterface.implmentsCollidableInterface())
                        
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

            

