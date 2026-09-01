
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MineLayerCircularStaticPool.h"
#include "MineWeaponResources.h"

class MineCountedPickedUpLayerInterfaceFactory: public CountedPickedUpLayerInterfaceFactory {

    private: static PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

                //@Throws(Exception.constructor)
            
    public: static void init(){
MineCountedPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface= MineCountedPickedUpLayerInterfaceFactory();
    
}


    public: static PickedUpLayerInterfaceFactoryInterface getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MineCountedPickedUpLayerInterfaceFactory::pickedUpLayerInterfaceFactoryInterface;
    
}


    private: const WeaponLayerCircularPool weaponLayerCircularStaticPool = MineLayerCircularStaticPool::getInstance();

private: MineCountedPickedUpLayerInterfaceFactory(){
            super(PickedUpLayerTypeFactory::getInstance().MINE, IconLayerFactory::getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance().get(MineWeaponResources::getInstance().DROP_ICON_RESOURCE).getInstance(0), 10, 10), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance().get(MineWeaponResources::getInstance().DROP_RESOURCE).getInstance(0));
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: int32_t getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 3;
    
}


    private: const WeaponProperties weaponProperties = WeaponProperties( -1,  -1, 0, 8000, 10);

    private: const SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();

                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer getNextInstance(Hashtable<any, any> hashtable, int32_t x, int32_t y, int32_t z){

    AllBinaryLayer sourceLayerInterface = hashtable.get(this->smallIntegerSingletonFactory.getAt(0)) as AllBinaryLayer;;
    

    Integer angle = hashtable.get(this->smallIntegerSingletonFactory.getAt(1)) as Integer;;
    

    ScoreableInterface scoreableInterface = sourceLayerInterface as unknown as ScoreableInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->weaponLayerCircularStaticPool.getInstanceWeaponLayer(sourceLayerInterface, x, y, z, static_cast<int32_t>(angle.intValue()), 0, this->weaponProperties, scoreableInterface);;
    
}


};

            

