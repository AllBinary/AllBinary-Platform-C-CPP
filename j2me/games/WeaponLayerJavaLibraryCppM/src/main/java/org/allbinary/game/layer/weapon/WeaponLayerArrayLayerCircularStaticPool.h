
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
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WeaponLayer.h"

class WeaponLayerArrayLayerCircularStaticPool
            : public Object
         {

    private: static WeaponLayerArrayLayerCircularStaticPool instance() { return WeaponLayerArrayLayerCircularStaticPool(); }

    public: static WeaponLayerArrayLayerCircularStaticPool getInstance();

    private: const int32_t MAX = 5;

    private: CircularIndexUtil circularIndexUtil = CircularIndexUtil::createInstance(this->MAX);

    private: std::vector<std::vector<std::vector<Object*>>> ALL_WEAPONLAYER_ARRAY = new Array(4)
                                                        ;

    public: void init();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::vector<WeaponLayer> getInstanceArray(int32_t size);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H
