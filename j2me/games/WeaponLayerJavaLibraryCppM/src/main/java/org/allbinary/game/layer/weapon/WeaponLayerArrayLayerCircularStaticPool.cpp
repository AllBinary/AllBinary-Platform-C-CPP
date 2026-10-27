
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/weapon/WeaponLayerArrayLayerCircularStaticPool.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/weapon/WeaponLayer.h"


WeaponLayerArrayLayerCircularStaticPool::WeaponLayerArrayLayerCircularStaticPool() : circularIndexUtil(CircularIndexUtil::createInstance(this->MAX)), ALL_WEAPONLAYER_ARRAY(std::vector<std::vector<std::vector<Object*>>>(4)) {
        }
        auto WeaponLayerArrayLayerCircularStaticPool::instance_owner() -> WeaponLayerArrayLayerCircularStaticPool* { static std::unique_ptr<WeaponLayerArrayLayerCircularStaticPool> value(new WeaponLayerArrayLayerCircularStaticPool()); return value.get(); }
WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool::instance = WeaponLayerArrayLayerCircularStaticPool::instance_owner();

    auto WeaponLayerArrayLayerCircularStaticPool::getInstance() -> WeaponLayerArrayLayerCircularStaticPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WeaponLayerArrayLayerCircularStaticPool::instance;
    
}


    auto WeaponLayerArrayLayerCircularStaticPool::init() -> void{

    std::vector<std::vector<Object*>> WEAPONLAYER_ARRAY = std::vector<std::vector<Object*>>(this->MAX *2);;
    

    std::vector<std::vector<Object*>> TWO_WEAPONLAYER_ARRAY = std::vector<std::vector<Object*>>(this->MAX);;
    

    std::vector<std::vector<Object*>> THREE_WEAPONLAYER_ARRAY = std::vector<std::vector<Object*>>(this->MAX);;
    




                        for (
    int32_t index = 0;index < this->MAX; index++)
        {
WEAPONLAYER_ARRAY[index]= std::vector<Object*>(1);
    
TWO_WEAPONLAYER_ARRAY[index]= std::vector<Object*>(2);
    
THREE_WEAPONLAYER_ARRAY[index]= std::vector<Object*>(3);
    
}

this->ALL_WEAPONLAYER_ARRAY[1]= WEAPONLAYER_ARRAY;
    
this->ALL_WEAPONLAYER_ARRAY[2]= TWO_WEAPONLAYER_ARRAY;
    
this->ALL_WEAPONLAYER_ARRAY[3]= THREE_WEAPONLAYER_ARRAY;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto WeaponLayerArrayLayerCircularStaticPool::getInstanceArray(int32_t size) -> std::vector<WeaponLayer*>{

    std::vector<WeaponLayer*> weaponLayerArray = this->ALL_WEAPONLAYER_ARRAY[size][this->circularIndexUtil->getIndex()] as WeaponLayer[];;
    
this->circularIndexUtil->next();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return weaponLayerArray;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_CPP
