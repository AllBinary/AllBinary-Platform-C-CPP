
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEWEAPONBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEWEAPONBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/collision/CollidableHelperFactory.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/collision/CollisionHelper.h>

      
#include <org/allbinary/game/collision/CollisionType.h>

      
#include <org/allbinary/game/collision/CollisionTypeFactory.h>

      
#include <org/allbinary/game/combat/damage/DamageableInterface.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* CollidableWeaponBehavior::NULL_COLLIDABLE_WEAPON_BEHAVIOR = NullUtil::getInstance()->NULL_OBJECT;

    auto CollidableWeaponBehavior::getNullInstance() -> CollidableWeaponBehavior*{

                        if(CollidableWeaponBehavior::NULL_COLLIDABLE_WEAPON_BEHAVIOR == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    CollidableWeaponBehavior::NULL_COLLIDABLE_WEAPON_BEHAVIOR= new CollidableWeaponBehavior(false);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CollidableWeaponBehavior*>(CollidableWeaponBehavior::NULL_COLLIDABLE_WEAPON_BEHAVIOR);
    
}


CollidableWeaponBehavior::CollidableWeaponBehavior(bool collidable) : CollidableDestroyableDamageableBehavior(collidable){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setCollided(false);
    
this->setCollidable(true);
    
this->collisionHelper= CollidableHelperFactory::getInstance();
    
}


    auto CollidableWeaponBehavior::init(AllBinaryLayer* sourceLayerInterface) -> void{
this->setCollided(false);
    
this->collisionHelper->setOwnerLayerInterface(sourceLayerInterface);
    
}


    auto CollidableWeaponBehavior::isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) -> bool{

                        if(this->collisionHelper->isCollidable(collisionLayer))
                        
                                    {
                                    
                        if(ownerLayer->getGroupInterface()[0] != collisionLayer->getGroupInterface()[0])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CollidableDestroyableDamageableBehavior::isCollision(ownerLayer, collisionLayer);;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableWeaponBehavior::collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) -> void{
CollidableDestroyableDamageableBehavior::collide(ownerLayer, collisionLayer);
    
this->collided= true;
    
}


    auto CollidableWeaponBehavior::isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> bool{

                        if(this->collisionHelper->isCollidable(dynamic_cast<CollidableCompositeLayer*>(collidableInterfaceCompositeInterface)))
                        
                                    {
                                    
    AllBinaryLayer* layerInterface = dynamic_cast<AllBinaryLayer*>(collidableInterfaceCompositeInterface);;
    

                        if(ownerLayer->getGroupInterface()[0] != layerInterface->getGroupInterface()[0])
                        
                                    {
                                    
                        if(this->layerCollisionUtil->isCollision(ownerLayer, layerInterface))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableWeaponBehavior::collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> void{

    DamageableInterface* ownerDamageableInterface = dynamic_cast<DamageableInterface*>(ownerLayer);;
    

    DamageableInterface* damageableInterface = dynamic_cast<DamageableInterface*>(collidableInterfaceCompositeInterface);;
    
this->damageUtil->process(ownerDamageableInterface, damageableInterface);
    
this->collided= true;
    
}


    auto CollidableWeaponBehavior::getCollisionTypeWith(AllBinaryLayer* layerInterface) -> CollisionType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CollisionTypeFactory::getInstance()->COLLISION;
    
}


    auto CollidableWeaponBehavior::isCollided() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->collided;
    
}


    auto CollidableWeaponBehavior::setCollided(bool collided) -> void{
this->collided= collided;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEWEAPONBEHAVIOR_CPP
