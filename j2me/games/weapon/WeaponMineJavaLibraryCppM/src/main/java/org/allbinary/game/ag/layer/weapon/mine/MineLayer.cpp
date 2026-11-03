
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYER_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/weapon/mine/MineLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/ag/weapon/media/audio/DropWeaponSound.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/layer/weapon/SimpleWeaponLayer.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/physics/movement/NoMovementFactory.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <org/allbinary/view/event/ViewPositionEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/weapon/mine/MineWeaponResources.h"


MineLayer::MineLayer(ViewPositionBase* viewPosition) : SimpleWeaponLayer(MineLayer::NAME, RemoteInfo::REMOTE_INFO,  -1, NoMovementFactory::getInstance()->getMovmentInstance(), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(MineWeaponResources::getInstance()->RESOURCE)->getInstance(0), SimpleWeaponLayer::createDestroyed(), new Rectangle(PointFactory::getInstance()->ZERO_ZERO, 10, 10), viewPosition), viewPositionEventHandler(ViewPositionEventHandler::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto MineLayer::initXYZ(int32_t x, int32_t y, int32_t z) -> void{
this->setPosition(x +5, y +5, z);
    
this->viewPositionEventHandler->addListener(dynamic_cast<AllBinaryLayer*>(this));
    
SecondaryPlayerQueueFactory::getInstance()->add(DropWeaponSound::getInstance());
    
}


    auto MineLayer::damage(int32_t damage, int32_t damageType) -> void{
this->totalDamage= this->getInitDamage() +1;
    
}


    auto MineLayer::getDamage(int32_t damageType) -> int32_t{
SimpleWeaponLayer::getDamage(damageType);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getInitDamage();;
    
}


    auto MineLayer::setDestroyed(bool destroyed) -> void{
SimpleWeaponLayer::setDestroyed(destroyed);
    

                        if(this->isDestroyed())
                        
                                    {
                                    this->viewPositionEventHandler->removeListener(this);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYER_CPP
