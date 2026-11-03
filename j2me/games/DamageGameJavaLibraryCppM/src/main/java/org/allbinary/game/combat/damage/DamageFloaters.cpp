
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEFLOATERS_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEFLOATERS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/damage/DamageFloaters.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DamageFloaters::DamageFloaters() {
        }
        auto DamageFloaters::SINGLETON_owner() -> DamageFloaters* { static std::unique_ptr<DamageFloaters> value(new DamageFloaters()); return value.get(); }
DamageFloaters* DamageFloaters::SINGLETON = DamageFloaters::SINGLETON_owner();

    auto DamageFloaters::getInstance() -> DamageFloaters*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DamageFloaters::SINGLETON;
    
}


    auto DamageFloaters::add(int32_t damage) -> void{
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEFLOATERS_CPP
