
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H

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

class WeaponLayerArrayLayerCircularStaticPool
            : public Object
         {

    private: static WeaponLayerArrayLayerCircularStaticPool* instance() { static std::unique_ptr<WeaponLayerArrayLayerCircularStaticPool> value(new WeaponLayerArrayLayerCircularStaticPool()); return value.get(); }

    public: static WeaponLayerArrayLayerCircularStaticPool* getInstance();

    private: const int32_t MAX = 5;

    private: CircularIndexUtil* circularIndexUtil = CircularIndexUtil::createInstance(this->MAX);

    private: std::vector<std::vector<std::vector<Object*>>> ALL_WEAPONLAYER_ARRAY = std::vector<std::vector<std::vector<Object*>>>(4);

    public: void init();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::vector<WeaponLayer*> getInstanceArray(int32_t size);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H
