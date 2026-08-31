
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/LayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryCollisionManager
            : public Object
         {
        

    private: static allBinaryCollisionManager: AllBinaryCollisionManager = new AllBinaryCollisionManager();

    public static AllBinaryCollisionManager getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryCollisionManager.allBinaryCollisionManager;
    
}


private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public process(LayerManager layerManager, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface, int32_t startIndex){

    size: int32_t = layerManager!.getSize()!;;
    




                        for (
    index: int32_t = startIndex +1;index < size; index++)
        {

    collidableInterfaceCompositeInterface2: CollidableInterfaceCompositeInterface = layerManager!.getLayerAt(index) as CollidableInterfaceCompositeInterface;;
    
this.collide(layerManager, collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2);
    
}

}


                //@Throws(Exception.constructor)
            
    collide(LayerManager layerManager, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface2){

    collidableBase2: CollidableBaseBehavior = collidableInterfaceCompositeInterface2!.getCollidableInferface()!;;
    

    collidableBase: CollidableBaseBehavior = collidableInterfaceCompositeInterface!.getCollidableInferface()!;;
    

                        if(collidableBase2!.isCollidable(collidableInterfaceCompositeInterface as CollidableCompositeLayer))
                        
                                    {
                                    
                        if(collidableBase!.isCollisionInterface(collidableInterfaceCompositeInterface as CollidableCompositeLayer, collidableInterfaceCompositeInterface2))
                        
                                    {
                                    collidableBase!.collideInterface(collidableInterfaceCompositeInterface as CollidableCompositeLayer, collidableInterfaceCompositeInterface2);
    
collidableBase2!.collideInterface(collidableInterfaceCompositeInterface as CollidableCompositeLayer, collidableInterfaceCompositeInterface);
    

                                    }
                                

                                    }
                                
}


};

            

