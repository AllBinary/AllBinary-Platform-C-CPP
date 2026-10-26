
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

            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WeaponLayer.h"

class WeaponLayerCircularPool: public AllBinaryLayerCircularPool {

public: WeaponLayerCircularPool();

                //@Throws(Exception.constructor)
            
    public: WeaponLayer getInstanceWeaponLayer(AllBinaryLayer sourceLayerInterface, int32_t x, int32_t y, int32_t z, int32_t angle, int32_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreable);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_H
