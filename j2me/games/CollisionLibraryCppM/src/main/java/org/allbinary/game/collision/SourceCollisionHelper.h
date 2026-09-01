
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H
        #define ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H

#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollisionHelper.h"

class SourceCollisionHelper: public CollisionHelper {

public: SourceCollisionHelper(AllBinaryLayer layerInterface);

    public: bool isCollidable(CollidableCompositeLayer layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H
