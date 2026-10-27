
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_OPTIMIZEDALLBINARYCOLLISIONLAYERPROCESSORFORCOLLIDABLELAYER_CPP
        #define ORG_ALLBINARY_GAME_COLLISION_OPTIMIZEDALLBINARYCOLLISIONLAYERPROCESSORFORCOLLIDABLELAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/collision/OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/OptimizedAllBinaryCollisionLayerManager.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"


OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer::OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer() : LayerProcessor(new OptimizedAllBinaryCollisionLayerManager()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer::processAt(AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t startIndex) -> void{

    CollidableCompositeLayer* collidableInterfaceCompositeInterface = dynamic_cast<CollidableCompositeLayer*>(layerInterface);;
    

    CollidableBaseBehavior* collidableBase = collidableInterfaceCompositeInterface->getCollidableInferface();;
    

                        if(collidableBase->isCollidable(collidableInterfaceCompositeInterface))
                        
                                    {
                                    
    LayerManager* layerManager = this->getLayerManager();;
    

    int32_t size = layerManager->getSize();;
    

    CollidableCompositeLayer* collidableInterfaceCompositeInterface2;;
    

    CollidableBaseBehavior* collidableBase2;;
    




                        for (
    int32_t index = startIndex +1;index < size; index++)
        {
collidableInterfaceCompositeInterface2= dynamic_cast<CollidableCompositeLayer*>(layerManager->getLayerAt(index));
    
collidableBase2= collidableInterfaceCompositeInterface2->getCollidableInferface();
    

                        if(collidableBase2->isCollidable(collidableInterfaceCompositeInterface) && collidableBase->isCollision(collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2))
                        
                                    {
                                    collidableBase->collide(collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2);
    
collidableBase2->collide(collidableInterfaceCompositeInterface2, collidableInterfaceCompositeInterface);
    

                                    }
                                
}


                                    }
                                
}


    auto OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer::isProcessorLayer(AllBinaryLayer* layerInterface) -> bool{

                        if(layerInterface->implmentsCollidableInterface())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_COLLISION_OPTIMIZEDALLBINARYCOLLISIONLAYERPROCESSORFORCOLLIDABLELAYER_CPP
