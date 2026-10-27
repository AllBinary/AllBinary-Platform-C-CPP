
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINECOUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINECOUNTEDPICKEDUPLAYERINTERFACEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/IconLayerFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/weapon/mine/MineLayerCircularStaticPool.h"
#include "org/allbinary/game/ag/layer/weapon/mine/MineWeaponResources.h"

class MineCountedPickedUpLayerInterfaceFactory: public CountedPickedUpLayerInterfaceFactory {

    private: static inline PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

                //@Throws(Exception.constructor)
            
    public: static void init();

    public: static PickedUpLayerInterfaceFactoryInterface* getInstance();

    private: WeaponLayerCircularPool* weaponLayerCircularStaticPool = MineLayerCircularStaticPool::getInstance();

private: MineCountedPickedUpLayerInterfaceFactory();

    public: int32_t getTotal();

    private: WeaponProperties* weaponProperties = new WeaponProperties( -1,  -1, 0, 8000, 10);

    private: SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();

                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer* getNextInstance(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINECOUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
