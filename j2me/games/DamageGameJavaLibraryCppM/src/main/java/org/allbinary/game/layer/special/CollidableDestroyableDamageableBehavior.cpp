
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/combat/damage/DamageUtil.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableDestroyableDamageableLayer.h"

class CollidableDestroyableDamageableBehavior: public CollidableBaseBehavior {

    protected: const DamageUtil damageUtil = DamageUtil::getInstance();

public: CollidableDestroyableDamageableBehavior(bool collidable){
            super(collidable);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: bool isCollision(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collisionLayer){

                        if(ownerLayer.getGroupInterface()[0] != collisionLayer.getGroupInterface()[0])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.isCollision(ownerLayer, collisionLayer);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface){

    CollidableDestroyableDamageableLayer ownerCollidableDestroyableDamageableLayer = ownerLayer as CollidableDestroyableDamageableLayer;;
    

    CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer = collidableInterfaceCompositeInterface as CollidableDestroyableDamageableLayer;;
    
ownerCollidableDestroyableDamageableLayer.damage(collidableDestroyableDamageableLayer.getDamage(0), 0);
    
}


    public: bool isCollisionInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface){
ForcedLogUtil::log("No Longer Used", this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: void collideInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface){
ForcedLogUtil::log("No Longer Used", this);
    
}


};

            

