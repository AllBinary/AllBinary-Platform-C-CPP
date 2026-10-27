
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CollisionType;
class CollisionTypeFactory;
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CollidableCompositeLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableRTSBehavior: public CollidableDestroyableDamageableBehavior {

public: CollidableRTSBehavior(bool collidable);

    public: bool isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void collideNone(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_COLLIDABLERTSBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_COLLIDABLERTSBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_COLLIDABLERTSBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/collision/CollisionType.h>)
#include <org/allbinary/game/collision/CollisionType.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollisionTypeFactory.h>)
#include <org/allbinary/game/collision/CollisionTypeFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>
#endif
#if __has_include("org/allbinary/game/layer/CollidableCompositeLayer.h")
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#endif

        #endif
    
