
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_H
        #define ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class WeaponProperties;
class ScoreableInterface;
class RelativeRelationship;
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicWeaponPart;
class BasicWeaponPartFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicWeaponPartCircularPool
            : public virtual Object
         {

    private: static BasicWeaponPartCircularPool* NULL_BASIC_WEAPON_PART_CIRCULAR_POOL_owner();
    public: static BasicWeaponPartCircularPool* NULL_BASIC_WEAPON_PART_CIRCULAR_POOL;


            
    public: BasicWeaponPartCircularPool();
        
    private: BasicWeaponPart* basicWeaponPart;

                //@Throws(Exception.constructor)
            
    public: void init(BasicWeaponPartFactoryInterface* basicWeaponPartFactoryInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: BasicWeaponPart* getInstance(AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/game/combat/weapon/WeaponProperties.h>)
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>
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
#if __has_include("org/allbinary/game/part/weapon/BasicWeaponPart.h")
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#endif
#if __has_include("org/allbinary/game/part/weapon/BasicWeaponPartFactoryInterface.h")
#include "org/allbinary/game/part/weapon/BasicWeaponPartFactoryInterface.h"
#endif

        #endif
    
