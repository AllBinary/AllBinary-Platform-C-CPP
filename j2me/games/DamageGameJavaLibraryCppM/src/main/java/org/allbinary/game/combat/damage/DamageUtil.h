
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_H
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CollidableCompositeLayer;
class CollidableDestroyableDamageableLayer;
class LogUtil;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DamageableInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DamageUtil
            : public virtual Object
         {

    private: static DamageUtil* instance_owner();
    private: static DamageUtil* instance;

    public: static DamageUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    public: const std::string COLLIDE = "collide";

private: DamageUtil();

                //@Throws(Exception.constructor)
            
    public: void process(DamageableInterface* damageableInterface, DamageableInterface* damageableInterface2);

                //@Throws(Exception.constructor)
            
    public: void debugDamage(CollidableCompositeLayer* collidableInterfaceCompositeInterface1, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/game/combat/damage/DamageableInterface.h")
#include "org/allbinary/game/combat/damage/DamageableInterface.h"
#endif

        #endif
    
