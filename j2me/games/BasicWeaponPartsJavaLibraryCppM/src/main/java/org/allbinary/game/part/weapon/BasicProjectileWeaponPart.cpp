
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_WEAPON_BASICPROJECTILEWEAPONPART_CPP
        #define ORG_ALLBINARY_GAME_PART_WEAPON_BASICPROJECTILEWEAPONPART_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/part/weapon/BasicProjectileWeaponPart.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/game/part/weapon/BasicWeaponPart.h"


    auto BasicProjectileWeaponPart::createBasicProjectileWeaponPart(Animation* animationInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool) -> BasicProjectileWeaponPart*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicProjectileWeaponPart(animationInterface, AllBinaryLayer::NULL_ALLBINARY_LAYER, weaponLayerCircularStaticPool, WeaponProperties::NULL_WEAPON_PROPERTIES, NoScoreable::getInstance(), RelativeRelationship::NULL_RELATIVE_RELATIONSHIP);
    
}


BasicProjectileWeaponPart::BasicProjectileWeaponPart(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) : BasicWeaponPart(animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->weaponLayerCircularStaticPool= weaponLayerCircularStaticPool;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicProjectileWeaponPart::processScore(AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) -> void{

    WeaponLayer* weaponLayer = this->weaponLayerCircularStaticPool->getInstanceWeaponLayer(this->getOwnerLayerInterface(), this->relativeRelationship->getX(), this->relativeRelationship->getY(), this->relativeRelationship->getZ(), static_cast<int32_t>(angle), static_cast<int32_t>(otherAngle), weaponProperties, scoreableInterface);;
    
allbinaryLayerManager->append(weaponLayer);
    
}




        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_BASICPROJECTILEWEAPONPART_CPP
