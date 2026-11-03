
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/CombatBaseBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/combat/damage/DamageableBaseBehavior.h>

      
#include <org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto CombatBaseBehavior::NULL_COMBAT_BEHAVIOR_owner() -> CombatBaseBehavior* { static std::unique_ptr<CombatBaseBehavior> value(new CombatBaseBehavior(DamageableBaseBehavior::getInstance(), DestroyableBaseBehavior::getInstance())); return value.get(); }
CombatBaseBehavior* CombatBaseBehavior::NULL_COMBAT_BEHAVIOR = CombatBaseBehavior::NULL_COMBAT_BEHAVIOR_owner();

CombatBaseBehavior::CombatBaseBehavior(DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior){
this->damageableBaseBehavior= damageableBaseBehavior;
    
this->destroyableBaseBehavior= destroyableBaseBehavior;
    
}


    auto CombatBaseBehavior::getDamageableBaseBehavior() -> DamageableBaseBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->damageableBaseBehavior;
    
}


    auto CombatBaseBehavior::getDestroyableBaseBehavior() -> DestroyableBaseBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->destroyableBaseBehavior;
    
}


    auto CombatBaseBehavior::isReadyForExplosion() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->readyForExplosion;
    
}


    auto CombatBaseBehavior::setReadyForExplosion(bool readyForExplosion) -> void{
this->readyForExplosion= readyForExplosion;
    
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_CPP
