
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/weapon/CollidableDamageWeaponBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CollidableDamageWeaponBehavior::CollidableDamageWeaponBehavior(bool collidable) : CollidableDestroyableDamageableBehavior(collidable){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setCollided(false);
    
this->setCollidable(true);
    
this->collisionHelper= CollidableHelperFactory::getInstance();
    
}


    auto CollidableDamageWeaponBehavior::init(AllBinaryLayer* sourceLayerInterface) -> void{
this->setCollided(false);
    
this->collisionHelper->setOwnerLayerInterface(sourceLayerInterface);
    
}


    auto CollidableDamageWeaponBehavior::isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) -> bool{

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
            
    auto CollidableDamageWeaponBehavior::collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) -> void{
CollidableDestroyableDamageableBehavior::collide(ownerLayer, collisionLayer);
    
this->collided= true;
    
}


    auto CollidableDamageWeaponBehavior::isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> bool{

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
            
    auto CollidableDamageWeaponBehavior::collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> void{
this->damageUtil->process(dynamic_cast<DamageableInterface*>(ownerLayer), dynamic_cast<DamageableInterface*>(collidableInterfaceCompositeInterface));
    
this->collided= true;
    
}


    auto CollidableDamageWeaponBehavior::getCollisionTypeWith(AllBinaryLayer* layerInterface) -> CollisionType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CollisionTypeFactory::getInstance()->COLLISION;
    
}


    auto CollidableDamageWeaponBehavior::isCollided() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->collided;
    
}


    auto CollidableDamageWeaponBehavior::setCollided(bool collided) -> void{
this->collided= collided;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_COLLIDABLEDAMAGEWEAPONBEHAVIOR_CPP
