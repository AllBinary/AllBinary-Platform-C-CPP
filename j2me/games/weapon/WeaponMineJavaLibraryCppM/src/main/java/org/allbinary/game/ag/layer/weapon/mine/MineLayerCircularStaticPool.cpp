
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h>

      
#include <org/allbinary/view/ViewPositionFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MineCountedPickedUpLayerInterfaceFactory.h"
#include "MineLayerFactory.h"

class MineLayerCircularStaticPool
            : public Object
         {

    private: static WeaponLayerCircularPool WEAPON_LAYER_CIRCULAR_STATIC_POOL = WeaponLayerCircularPool();

                //@Throws(Exception.constructor)
            
    public: static void init(ViewPositionFactoryInterface viewPositionFactoryInterface){
MineCountedPickedUpLayerInterfaceFactory::init();
    
MineLayerCircularStaticPool::WEAPON_LAYER_CIRCULAR_STATIC_POOL.initAllBinaryLayerCircularPool(MineLayerFactory(viewPositionFactoryInterface), 20);
    
}


    public: static WeaponLayerCircularPool getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MineLayerCircularStaticPool::WEAPON_LAYER_CIRCULAR_STATIC_POOL;
    
}


};

            

