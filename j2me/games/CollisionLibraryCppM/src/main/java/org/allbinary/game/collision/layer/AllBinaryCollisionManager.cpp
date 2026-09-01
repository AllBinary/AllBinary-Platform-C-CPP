
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

    private: static AllBinaryCollisionManager allBinaryCollisionManager = AllBinaryCollisionManager();

    public: static AllBinaryCollisionManager getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryCollisionManager::allBinaryCollisionManager;
    
}


private: AllBinaryCollisionManager(){
}


                //@Throws(Exception.constructor)
            
    public: void process(LayerManager layerManager, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface, int32_t startIndex){

    int32_t size = layerManager.getSize();;
    




                        for (
    int32_t index = startIndex +1;index < size; index++)
        {

    CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface2 = layerManager.getLayerAt(index) as CollidableInterfaceCompositeInterface;;
    
this->collide(layerManager, collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2);
    
}

}


                //@Throws(Exception.constructor)
            
    private: void collide(LayerManager layerManager, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface2){

    CollidableBaseBehavior collidableBase2 = collidableInterfaceCompositeInterface2.getCollidableInferface();;
    

    CollidableBaseBehavior collidableBase = collidableInterfaceCompositeInterface.getCollidableInferface();;
    

                        if(collidableBase2.isCollidable(collidableInterfaceCompositeInterface as CollidableCompositeLayer))
                        
                                    {
                                    
                        if(collidableBase.isCollisionInterface(collidableInterfaceCompositeInterface as CollidableCompositeLayer, collidableInterfaceCompositeInterface2))
                        
                                    {
                                    collidableBase.collideInterface(collidableInterfaceCompositeInterface as CollidableCompositeLayer, collidableInterfaceCompositeInterface2);
    
collidableBase2.collideInterface(collidableInterfaceCompositeInterface as CollidableCompositeLayer, collidableInterfaceCompositeInterface);
    

                                    }
                                

                                    }
                                
}


};

            

