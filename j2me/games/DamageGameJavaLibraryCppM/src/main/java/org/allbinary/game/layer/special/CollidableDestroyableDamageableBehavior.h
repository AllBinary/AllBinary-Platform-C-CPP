
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>
class CollidableInterfaceCompositeInterface;
class DamageUtil;
class CollidableCompositeLayer;
class ForcedLogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CollidableDestroyableDamageableLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableDestroyableDamageableBehavior: public CollidableBaseBehavior {

    /*protected*/ public: DamageUtil* damageUtil;

public: CollidableDestroyableDamageableBehavior(bool collidable);

    public: bool isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

    public: bool isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    public: void collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/collision/CollidableBaseBehavior.h>)
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>)
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/combat/damage/DamageUtil.h>)
#include <org/allbinary/game/combat/damage/DamageUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h")
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#endif

        #endif
    
