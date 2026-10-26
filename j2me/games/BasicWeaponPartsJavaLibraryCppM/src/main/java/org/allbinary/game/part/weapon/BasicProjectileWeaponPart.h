
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_WEAPON_BASICPROJECTILEWEAPONPART_H
        #define ORG_ALLBINARY_GAME_PART_WEAPON_BASICPROJECTILEWEAPONPART_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayer.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h>

      
#include <org/allbinary/game/score/NoScoreable.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicWeaponPart.h"

class BasicProjectileWeaponPart: public BasicWeaponPart {

    public: static BasicProjectileWeaponPart createBasicProjectileWeaponPart(Animation animationInterface, WeaponLayerCircularPool weaponLayerCircularStaticPool);

    private: WeaponLayerCircularPool weaponLayerCircularStaticPool;

public: BasicProjectileWeaponPart(Animation animationInterface, AllBinaryLayer sourceLayerInterface, WeaponLayerCircularPool weaponLayerCircularStaticPool, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface, RelativeRelationship relativeRelationship);

                //@Throws(Exception.constructor)
            
    public: void processScore(AllBinaryLayerManager allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_BASICPROJECTILEWEAPONPART_H
