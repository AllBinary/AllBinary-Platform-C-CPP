
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

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayer.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h>

      
#include <org/allbinary/game/score/NoScoreable.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/math/NoDecimalTrigTable.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicWeaponPart.h"

class StraightMultiProjectileWeaponPart: public BasicWeaponPart {

    public: static StraightMultiProjectileWeaponPart createStraightMultiProjectileWeaponPart(Animation animationInterface, WeaponLayerCircularPool weaponLayerCircularStaticPool);

    private: WeaponLayerCircularPool weaponLayerCircularStaticPool;

    private: int32_t total;

public: StraightMultiProjectileWeaponPart(Animation animationInterface, AllBinaryLayer sourceLayerInterface, WeaponLayerCircularPool weaponLayerCircularStaticPool, int32_t total, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface, RelativeRelationship relativeRelationship);

    private: const NoDecimalTrigTable noDecimalTrigTable = NoDecimalTrigTable::getInstance();

                //@Throws(Exception.constructor)
            
    public: void processScore(AllBinaryLayerManager allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_STRAIGHTMULTIPROJECTILEWEAPONPART_H
