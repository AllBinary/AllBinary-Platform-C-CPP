
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERCIRCULARSTATICPOOL_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERCIRCULARSTATICPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/weapon/mine/MineLayerCircularStaticPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h>

      
#include <org/allbinary/view/ViewPositionFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/weapon/mine/MineCountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/ag/layer/weapon/mine/MineLayerFactory.h"


MineLayerCircularStaticPool::MineLayerCircularStaticPool() {
        }
        auto MineLayerCircularStaticPool::WEAPON_LAYER_CIRCULAR_STATIC_POOL_owner() -> WeaponLayerCircularPool* { static std::unique_ptr<WeaponLayerCircularPool> value(new WeaponLayerCircularPool()); return value.get(); }
WeaponLayerCircularPool* MineLayerCircularStaticPool::WEAPON_LAYER_CIRCULAR_STATIC_POOL = MineLayerCircularStaticPool::WEAPON_LAYER_CIRCULAR_STATIC_POOL_owner();

                //@Throws(Exception.constructor)
            
    auto MineLayerCircularStaticPool::init(ViewPositionFactoryInterface* viewPositionFactoryInterface) -> void{
MineCountedPickedUpLayerInterfaceFactory::init();
    
MineLayerCircularStaticPool::WEAPON_LAYER_CIRCULAR_STATIC_POOL->initAllBinaryLayerCircularPool(new MineLayerFactory(viewPositionFactoryInterface), 20);
    
}


    auto MineLayerCircularStaticPool::getInstance() -> WeaponLayerCircularPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return MineLayerCircularStaticPool::WEAPON_LAYER_CIRCULAR_STATIC_POOL;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERCIRCULARSTATICPOOL_CPP
