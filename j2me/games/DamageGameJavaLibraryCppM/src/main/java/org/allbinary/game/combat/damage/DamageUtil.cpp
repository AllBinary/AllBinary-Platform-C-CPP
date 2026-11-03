
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/damage/DamageUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/damage/DamageableInterface.h"

auto DamageUtil::instance_owner() -> DamageUtil* { static std::unique_ptr<DamageUtil> value(new DamageUtil()); return value.get(); }
DamageUtil* DamageUtil::instance = DamageUtil::instance_owner();

    auto DamageUtil::getInstance() -> DamageUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DamageUtil::instance;
    
}


DamageUtil::DamageUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto DamageUtil::process(DamageableInterface* damageableInterface, DamageableInterface* damageableInterface2) -> void{
damageableInterface->damage(damageableInterface2->getDamage(0), 0);
    
}


                //@Throws(Exception.constructor)
            
    auto DamageUtil::debugDamage(CollidableCompositeLayer* collidableInterfaceCompositeInterface1, CollidableCompositeLayer* collidableInterfaceCompositeInterface) -> void{

    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(collidableInterfaceCompositeInterface);;
    

    int32_t damage = collidableDestroyableDamageableLayer->getDamage(0);;
    

                        if(damage > 20000)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Collision ");
    
stringBuffer->append(collidableInterfaceCompositeInterface1->toString());
    
stringBuffer->append(" with: ");
    
stringBuffer->append(collidableInterfaceCompositeInterface->toString());
    
stringBuffer->append(" damage: ");
    
stringBuffer->appendint(damage);
    
this->logUtil->putF(stringBuffer->toString(), collidableInterfaceCompositeInterface1, this->COLLIDE);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_CPP
