
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/weapon/WeaponLayer.h"


WeaponLayerCircularPool::WeaponLayerCircularPool(){
}


                //@Throws(Exception.constructor)
            
    auto WeaponLayerCircularPool::getInstanceWeaponLayer(AllBinaryLayer* sourceLayerInterface, int32_t x, int32_t y, int32_t z, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable) -> WeaponLayer*{

    WeaponLayer* weaponLayer = dynamic_cast<WeaponLayer*>(AllBinaryLayerCircularPool::getNextInstance());;
    
weaponLayer->initXYZ(x, y, z);
    
weaponLayer->init(sourceLayerInterface, angle, otherAngle, weaponProperties, scoreable);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return weaponLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_CPP
