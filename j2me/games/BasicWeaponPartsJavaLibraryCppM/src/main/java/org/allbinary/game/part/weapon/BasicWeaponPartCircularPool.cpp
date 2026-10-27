
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_CPP
        #define ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/part/weapon/BasicWeaponPartCircularPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPartFactoryInterface.h"


BasicWeaponPartCircularPool::BasicWeaponPartCircularPool() : basicWeaponPart(BasicWeaponPart::NULL_BASIC_WEAPON_PART) {
        }
        auto BasicWeaponPartCircularPool::NULL_BASIC_WEAPON_PART_CIRCULAR_POOL_owner() -> BasicWeaponPartCircularPool* { static std::unique_ptr<BasicWeaponPartCircularPool> value(new BasicWeaponPartCircularPool()); return value.get(); }
BasicWeaponPartCircularPool* BasicWeaponPartCircularPool::NULL_BASIC_WEAPON_PART_CIRCULAR_POOL = BasicWeaponPartCircularPool::NULL_BASIC_WEAPON_PART_CIRCULAR_POOL_owner();

                //@Throws(Exception.constructor)
            
    auto BasicWeaponPartCircularPool::init(BasicWeaponPartFactoryInterface* basicWeaponPartFactoryInterface) -> void{
this->basicWeaponPart= basicWeaponPartFactoryInterface->getInstance();
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicWeaponPartCircularPool::getInstance(AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) -> BasicWeaponPart*{
this->basicWeaponPart->init(sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicWeaponPart;
    
}




        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_CPP
