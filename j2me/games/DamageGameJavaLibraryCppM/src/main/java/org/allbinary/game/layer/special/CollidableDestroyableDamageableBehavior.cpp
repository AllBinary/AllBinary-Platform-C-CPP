
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/combat/damage/DamageUtil.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"


CollidableDestroyableDamageableBehavior::CollidableDestroyableDamageableBehavior(bool collidable) : CollidableBaseBehavior(collidable), damageUtil(DamageUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto CollidableDestroyableDamageableBehavior::isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) -> bool{

                        if(ownerLayer->getGroupInterface()[0] != collisionLayer->getGroupInterface()[0])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableBaseBehavior::isCollision(ownerLayer, collisionLayer);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableBehavior::collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) -> void{

    CollidableDestroyableDamageableLayer* ownerCollidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(ownerLayer);;
    

    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(collidableInterfaceCompositeInterface);;
    
ownerCollidableDestroyableDamageableLayer->damage(collidableDestroyableDamageableLayer->getDamage(0), 0);
    
}


    auto CollidableDestroyableDamageableBehavior::isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> bool{
ForcedLogUtil::log("No Longer Used", this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableBehavior::collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> void{
ForcedLogUtil::log("No Longer Used", this);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLEBEHAVIOR_CPP
