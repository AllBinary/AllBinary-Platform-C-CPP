
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEBASEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEBASEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/damage/DamageableBaseBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/damage/DamageableInterface.h"


DamageableBaseBehavior::DamageableBaseBehavior() {
        }
        auto DamageableBaseBehavior::instance_owner() -> DamageableBaseBehavior* { static std::unique_ptr<DamageableBaseBehavior> value(new DamageableBaseBehavior()); return value.get(); }
DamageableBaseBehavior* DamageableBaseBehavior::instance = DamageableBaseBehavior::instance_owner();

    auto DamageableBaseBehavior::getInstance() -> DamageableBaseBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DamageableBaseBehavior::instance;
    
}


    auto DamageableBaseBehavior::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getClass()->getName();;
    
}


                //@Throws(Exception.constructor)
            
    auto DamageableBaseBehavior::damage(int32_t damage, int32_t damageType) -> void{
}


                //@Throws(Exception.constructor)
            
    auto DamageableBaseBehavior::getDamage(int32_t damageType) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 6000;
    
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEBASEBEHAVIOR_CPP
