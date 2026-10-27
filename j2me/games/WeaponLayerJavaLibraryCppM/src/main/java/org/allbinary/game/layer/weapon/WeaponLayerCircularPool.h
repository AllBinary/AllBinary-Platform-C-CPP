
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_H
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class WeaponProperties;
class ScoreableInterface;
class AllBinaryLayer;
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class WeaponLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WeaponLayerCircularPool: public AllBinaryLayerCircularPool {

public: WeaponLayerCircularPool();

                //@Throws(Exception.constructor)
            
    public: WeaponLayer* getInstanceWeaponLayer(AllBinaryLayer* sourceLayerInterface, int32_t x, int32_t y, int32_t z, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/game/combat/weapon/WeaponProperties.h>)
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>
#endif
#if __has_include(<org/allbinary/game/score/ScoreableInterface.h>)
#include <org/allbinary/game/score/ScoreableInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerCircularPool.h>)
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>
#endif
#if __has_include("org/allbinary/game/layer/weapon/WeaponLayer.h")
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#endif

        #endif
    
