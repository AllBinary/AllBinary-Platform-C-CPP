
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_CPP
        #define ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/collision/layer/AllBinaryCollisionManager.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/LayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AllBinaryCollisionManager::allBinaryCollisionManager_owner() -> AllBinaryCollisionManager* { static std::unique_ptr<AllBinaryCollisionManager> value(new AllBinaryCollisionManager()); return value.get(); }
AllBinaryCollisionManager* AllBinaryCollisionManager::allBinaryCollisionManager = AllBinaryCollisionManager::allBinaryCollisionManager_owner();

AllBinaryCollisionManager::AllBinaryCollisionManager(){
}


    auto AllBinaryCollisionManager::getInstance() -> AllBinaryCollisionManager*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryCollisionManager::allBinaryCollisionManager;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryCollisionManager::process(LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, int32_t startIndex) -> void{

    int32_t size = layerManager->getSize();;
    




                        for (
    int32_t index = startIndex +1;index < size; index++)
        {

    CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2 = dynamic_cast<CollidableInterfaceCompositeInterface*>(layerManager->getLayerAt(index));;
    
this->collide(layerManager, collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryCollisionManager::collide(LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2) -> void{

    CollidableBaseBehavior* collidableBase2 = collidableInterfaceCompositeInterface2->getCollidableInferface();;
    

    CollidableBaseBehavior* collidableBase = collidableInterfaceCompositeInterface->getCollidableInferface();;
    

                        if(collidableBase2->isCollidable(dynamic_cast<CollidableCompositeLayer*>(collidableInterfaceCompositeInterface)))
                        
                                    {
                                    
                        if(collidableBase->isCollisionInterface(dynamic_cast<CollidableCompositeLayer*>(collidableInterfaceCompositeInterface), collidableInterfaceCompositeInterface2))
                        
                                    {
                                    collidableBase->collideInterface(dynamic_cast<CollidableCompositeLayer*>(collidableInterfaceCompositeInterface), collidableInterfaceCompositeInterface2);
    
collidableBase2->collideInterface(dynamic_cast<CollidableCompositeLayer*>(collidableInterfaceCompositeInterface), collidableInterfaceCompositeInterface);
    

                                    }
                                

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_CPP
