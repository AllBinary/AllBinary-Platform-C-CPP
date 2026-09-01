
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLESIMPLEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLESIMPLEBEHAVIOR_H

#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyableBaseBehavior.h"
#include "DestroyedLayerProcessor.h"

class DestroyableSimpleBehavior: public DestroyableBaseBehavior {

    protected: CollidableCompositeLayer ownerLayer;

    private: bool destroyed = false;

public: DestroyableSimpleBehavior(CollidableCompositeLayer ownerLayer);

    public: bool isDestroyed();

    public: void setDestroyed(bool destroyed);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLESIMPLEBEHAVIOR_H
