
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CircularIndexUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class WeaponLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WeaponLayerArrayLayerCircularStaticPool
            : public virtual Object
         {

    private: static WeaponLayerArrayLayerCircularStaticPool* instance_owner();
    private: static WeaponLayerArrayLayerCircularStaticPool* instance;

    public: static WeaponLayerArrayLayerCircularStaticPool* getInstance();


            
    public: WeaponLayerArrayLayerCircularStaticPool();
        
    private: const int32_t MAX = 5;

    private: CircularIndexUtil* circularIndexUtil;

    private: std::vector<std::vector<std::vector<Object*>>> ALL_WEAPONLAYER_ARRAY;

    public: void init();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::vector<WeaponLayer*> getInstanceArray(int32_t size);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H_COMPLETE
        #if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/weapon/WeaponLayer.h")
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#endif

        #endif
    
