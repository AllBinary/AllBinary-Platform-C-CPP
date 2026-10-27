
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Animation;
class WeaponProperties;
class RemoteInfo;
class Rectangle;
class AllBinaryLayerManager;
class Movement;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/weapon/SimpleWeaponLayer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TempExplosionWeaponLayer: public SimpleWeaponLayer {

    public: WeaponProperties* weaponProperties;

    private: TimeDelayHelper* timeDelayHelper;

public: TempExplosionWeaponLayer(std::string name, Movement* movement, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, int32_t timeDelay);

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_TEMPEXPLOSIONWEAPONLAYER_H_COMPLETE
        #if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/game/combat/weapon/WeaponProperties.h>)
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/physics/movement/Movement.h>)
#include <org/allbinary/physics/movement/Movement.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/layer/weapon/SimpleWeaponLayer.h")
#include "org/allbinary/game/layer/weapon/SimpleWeaponLayer.h"
#endif

        #endif
    
