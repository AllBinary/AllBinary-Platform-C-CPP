
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINECOUNTEDPICKEDUPLAYERINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINECOUNTEDPICKEDUPLAYERINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/weapon/mine/MineCountedPickedUpLayerInterfaceFactory.h"
        

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

PickedUpLayerInterfaceFactoryInterface* MineCountedPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

                //@Throws(Exception.constructor)
            
    auto MineCountedPickedUpLayerInterfaceFactory::init() -> void{
MineCountedPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface= new MineCountedPickedUpLayerInterfaceFactory();
    
}


MineCountedPickedUpLayerInterfaceFactory::MineCountedPickedUpLayerInterfaceFactory() : CountedPickedUpLayerInterfaceFactory(PickedUpLayerTypeFactory::getInstance()->MINE, IconLayerFactory::getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(MineWeaponResources::getInstance()->DROP_ICON_RESOURCE)->getInstance(0), 10, 10), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(MineWeaponResources::getInstance()->DROP_RESOURCE)->getInstance(0)), weaponLayerCircularStaticPool(MineLayerCircularStaticPool::getInstance()), weaponProperties(new WeaponProperties( -1,  -1, 0, 8000, 10)), smallIntegerSingletonFactory(SmallIntegerSingletonFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto MineCountedPickedUpLayerInterfaceFactory::getInstance() -> PickedUpLayerInterfaceFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MineCountedPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface;
    
}


    auto MineCountedPickedUpLayerInterfaceFactory::getTotal() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 3;
    
}


                //@Throws(Exception.constructor)
            
    auto MineCountedPickedUpLayerInterfaceFactory::getNextInstance(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z) -> AllBinaryLayer*{

    AllBinaryLayer* sourceLayerInterface = dynamic_cast<AllBinaryLayer*>(hashtable->get(this->smallIntegerSingletonFactory->getAt(0)));;
    

    int32_t angle = JavaBoxes::unbox<int32_t>(hashtable->get(this->smallIntegerSingletonFactory->getAt(1)));;
    

    ScoreableInterface* scoreableInterface = dynamic_cast<ScoreableInterface*>(sourceLayerInterface as unknown);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->weaponLayerCircularStaticPool->getInstanceWeaponLayer(sourceLayerInterface, x, y, z, static_cast<int32_t>(angle), 0, this->weaponProperties, scoreableInterface);;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINECOUNTEDPICKEDUPLAYERINTERFACEFACTORY_CPP
