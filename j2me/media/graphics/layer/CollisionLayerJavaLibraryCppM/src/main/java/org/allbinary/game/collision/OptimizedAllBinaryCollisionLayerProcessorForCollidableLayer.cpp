
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OptimizedAllBinaryCollisionLayerManager.h"
#include "CollidableBaseBehavior.h"

class OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer: public LayerProcessor {

public: OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer(){
            super(OptimizedAllBinaryCollisionLayerManager());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void processAt(AllBinaryLayerManager allBinaryLayerManager, AllBinaryLayer layerInterface, int32_t startIndex){

    CollidableCompositeLayer collidableInterfaceCompositeInterface = layerInterface as CollidableCompositeLayer;;
    

    CollidableBaseBehavior collidableBase = collidableInterfaceCompositeInterface.getCollidableInferface();;
    

                        if(collidableBase.isCollidable(collidableInterfaceCompositeInterface))
                        
                                    {
                                    
    LayerManager layerManager = this->getLayerManager();;
    

    int32_t size = layerManager.getSize();;
    

    CollidableCompositeLayer collidableInterfaceCompositeInterface2;;
    

    CollidableBaseBehavior collidableBase2;;
    




                        for (
    int32_t index = startIndex +1;index < size; index++)
        {
collidableInterfaceCompositeInterface2= layerManager.getLayerAt(index) as CollidableCompositeLayer;
    
collidableBase2= collidableInterfaceCompositeInterface2.getCollidableInferface();
    

                        if(collidableBase2.isCollidable(collidableInterfaceCompositeInterface) && collidableBase.isCollision(collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2))
                        
                                    {
                                    collidableBase.collide(collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2);
    
collidableBase2.collide(collidableInterfaceCompositeInterface2, collidableInterfaceCompositeInterface);
    

                                    }
                                
}


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

            

