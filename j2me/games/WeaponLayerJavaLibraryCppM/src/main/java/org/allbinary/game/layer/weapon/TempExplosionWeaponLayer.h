
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_H

            #include "../../../../../java/lang/Exception.h"
        
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
        #include "SimpleWeaponLayer.h"

class TempExplosionWeaponLayer: public SimpleWeaponLayer {

    public: const WeaponProperties weaponProperties = WeaponProperties( -1,  -1, 0, 1000, 0);

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(0);

public: TempExplosionWeaponLayer(std::string name, Movement movement, Animation animationInterface, Rectangle rectangle, ViewPositionBase viewPosition, int32_t timeDelay);

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_H
