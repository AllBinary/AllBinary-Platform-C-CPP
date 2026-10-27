
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_DAMAGEWEAPONLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_DAMAGEWEAPONLAYER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/physics/movement/Movement.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "org/allbinary/game/layer/weapon/CollidableDamageWeaponBehavior.h"

class DamageWeaponLayer: public WeaponLayer {

public: DamageWeaponLayer(std::string name, RemoteInfo* remoteInfo, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, std::string username, int32_t actorSessionId, int32_t id, int32_t multiPlayerType);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_DAMAGEWEAPONLAYER_H
