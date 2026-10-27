
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISIONHELPER_H
        #define ORG_ALLBINARY_GAME_COLLISION_COLLISIONHELPER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CollisionHelper
            : public Object
         {

    protected: AllBinaryLayer* sourceLayerInterface;

public: CollisionHelper(AllBinaryLayer* sourceLayerInterface);

    public: bool isCollidable(CollidableCompositeLayer* layerInterface);

    public: AllBinaryLayer* getOwnerLayerInterface();

    public: void setOwnerLayerInterface(AllBinaryLayer* sourceLayerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLISIONHELPER_H
