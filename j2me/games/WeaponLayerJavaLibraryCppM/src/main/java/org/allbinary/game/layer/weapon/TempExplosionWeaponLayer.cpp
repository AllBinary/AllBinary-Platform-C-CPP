
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/weapon/TempExplosionWeaponLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/physics/movement/Movement.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/weapon/SimpleWeaponLayer.h"


TempExplosionWeaponLayer::TempExplosionWeaponLayer(std::string name, Movement* movement, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, int32_t timeDelay) : SimpleWeaponLayer(name, RemoteInfo::REMOTE_INFO,  -1, movement, animationInterface, SimpleWeaponLayer::createDestroyed(), rectangle, viewPosition), weaponProperties(new WeaponProperties( -1,  -1, 0, 1000, 0)), timeDelayHelper(new TimeDelayHelper(0)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->timeDelayHelper->delay= timeDelay;
    
}


                //@Throws(Exception.constructor)
            
    auto TempExplosionWeaponLayer::processTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{

                        if(this->timeDelayHelper->isTime(GameTickTimeDelayHelperFactory::getInstance()->startTime))
                        
                                    {
                                    this->getCollidableInferface()->collide(this, this);
    
this->totalDamage= this->getInitDamage() +1;
    

                                    }
                                
SimpleWeaponLayer::processTick(allBinaryLayerManager);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_CPP
