
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLECHARACTERBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLECHARACTERBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/special/CollidableCharacterBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/collision/CollisionType.h>

      
#include <org/allbinary/game/collision/CollisionTypeFactory.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"


CollidableCharacterBehavior::CollidableCharacterBehavior(bool collidable) : CollidableDestroyableDamageableBehavior(collidable){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto CollidableCharacterBehavior::collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) -> void{

    CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory::getInstance();;
    

    CollisionType* collisionType = collidableInterfaceCompositeInterface->getCollidableInferface()->getCollisionTypeWith(ownerLayer);;
    

                        if(collisionType == collisionTypeFactory->PICKUP)
                        
                                    {
                                    
    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(ownerLayer);;
    
collidableDestroyableDamageableLayer->getPickupBehavior()->doPickupLayer(dynamic_cast<PickedUpLayerInterface*>(collidableInterfaceCompositeInterface));
    

                                    }
                                
                        else {
                            CollidableDestroyableDamageableBehavior::collide(ownerLayer, collidableInterfaceCompositeInterface);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto CollidableCharacterBehavior::collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> void{
ForcedLogUtil::log(this->commonStrings->NOT_IMPLEMENTED, this);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLECHARACTERBEHAVIOR_CPP
