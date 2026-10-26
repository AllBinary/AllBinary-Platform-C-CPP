
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DamageableInterface.h"

class DamageUtil
            : public Object
         {

    private: static DamageUtil instance() { return DamageUtil(); }

    public: static DamageUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const std::string COLLIDE = "collide";

private: DamageUtil();

                //@Throws(Exception.constructor)
            
    public: void process(DamageableInterface damageableInterface, DamageableInterface damageableInterface2);

                //@Throws(Exception.constructor)
            
    public: void debugDamage(CollidableCompositeLayer collidableInterfaceCompositeInterface1, CollidableCompositeLayer collidableInterfaceCompositeInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_H
