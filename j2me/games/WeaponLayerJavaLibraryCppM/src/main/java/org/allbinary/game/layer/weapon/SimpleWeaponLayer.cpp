
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

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/animation/NullIndexedAnimationFactory.h>

      
#include <org/allbinary/game/combat/damage/ExplosionResources.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/physics/movement/Movement.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WeaponLayer.h"
#include "CollidableWeaponBehavior.h"

class SimpleWeaponLayer: public WeaponLayer {

                //@Throws(Exception.constructor)
            
    public: static Animation createDestroyed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance().getProcedural(ExplosionResources::getInstance().THIRD_EXPLOSION_RESOURCE).getInstanceAnimation(NullIndexedAnimationFactory::getFactoryInstance().getInstance(0));;
    
}


public: SimpleWeaponLayer(std::string name, RemoteInfo remoteInfo, int32_t multiPlayerType, Movement movement, Animation animationInterface, Animation destroyedAnimationInterface, Rectangle rectangle, ViewPositionBase viewPosition){
            super(name, remoteInfo, multiPlayerType, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setCollidableInferface(CollidableWeaponBehavior(true));
    
}


};

            

