
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_WEAPON_STRAIGHTMULTIPROJECTILEWEAPONPART_H
        #define ORG_ALLBINARY_GAME_PART_WEAPON_STRAIGHTMULTIPROJECTILEWEAPONPART_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Animation;
class WeaponProperties;
class WeaponLayer;
class WeaponLayerCircularPool;
class NoScoreable;
class ScoreableInterface;
class RelativeRelationship;
class AllBinaryLayer;
class AllBinaryLayerManager;
class NoDecimalTrigTable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/weapon/BasicWeaponPart.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StraightMultiProjectileWeaponPart: public BasicWeaponPart {

    public: static StraightMultiProjectileWeaponPart* createStraightMultiProjectileWeaponPart(Animation* animationInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool);

    private: WeaponLayerCircularPool* weaponLayerCircularStaticPool;

    private: int32_t total;

public: StraightMultiProjectileWeaponPart(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

    private: NoDecimalTrigTable* noDecimalTrigTable;

                //@Throws(Exception.constructor)
            
    public: void processScore(AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_STRAIGHTMULTIPROJECTILEWEAPONPART_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PART_WEAPON_STRAIGHTMULTIPROJECTILEWEAPONPART_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PART_WEAPON_STRAIGHTMULTIPROJECTILEWEAPONPART_H_COMPLETE
        #if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/game/combat/weapon/WeaponProperties.h>)
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>
#endif
#if __has_include(<org/allbinary/game/layer/weapon/WeaponLayer.h>)
#include <org/allbinary/game/layer/weapon/WeaponLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h>)
#include <org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h>
#endif
#if __has_include(<org/allbinary/game/score/NoScoreable.h>)
#include <org/allbinary/game/score/NoScoreable.h>
#endif
#if __has_include(<org/allbinary/game/score/ScoreableInterface.h>)
#include <org/allbinary/game/score/ScoreableInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/RelativeRelationship.h>)
#include <org/allbinary/graphics/RelativeRelationship.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/math/NoDecimalTrigTable.h>)
#include <org/allbinary/math/NoDecimalTrigTable.h>
#endif
#if __has_include("org/allbinary/game/part/weapon/BasicWeaponPart.h")
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#endif

        #endif
    
