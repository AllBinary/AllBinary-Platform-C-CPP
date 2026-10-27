
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H
        #define ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H

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
        
class AllBinaryCollisionManager
            : public Object
         {

    private: static AllBinaryCollisionManager* allBinaryCollisionManager() { static std::unique_ptr<AllBinaryCollisionManager> value(new AllBinaryCollisionManager()); return value.get(); }

    public: static AllBinaryCollisionManager* getInstance();

private: AllBinaryCollisionManager();

                //@Throws(Exception.constructor)
            
    public: void process(LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, int32_t startIndex);

                //@Throws(Exception.constructor)
            
    private: void collide(LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H
