
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_COLLIDABLERTSBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_COLLIDABLERTSBEHAVIOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/collision/CollisionType.h>

      
#include <org/allbinary/game/collision/CollisionTypeFactory.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/CollidableCompositeLayer.h"

class CollidableRTSBehavior: public CollidableDestroyableDamageableBehavior {

public: CollidableRTSBehavior(bool collidable);

    public: bool isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    protected: void collideNone(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_COLLIDABLERTSBEHAVIOR_H
