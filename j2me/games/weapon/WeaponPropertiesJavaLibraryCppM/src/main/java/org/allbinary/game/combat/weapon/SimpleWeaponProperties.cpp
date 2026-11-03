
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_WEAPON_SIMPLEWEAPONPROPERTIES_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_WEAPON_SIMPLEWEAPONPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/weapon/SimpleWeaponProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SimpleWeaponProperties::SimpleWeaponProperties() {
        }
        
    auto SimpleWeaponProperties::set(SimpleWeaponProperties* simpleWeaponProperties) -> void{
this->setDamage(simpleWeaponProperties->getDamage());
    
this->setDissipation(simpleWeaponProperties->getDissipation());
    
this->setRange(simpleWeaponProperties->getRange());
    
}


    auto SimpleWeaponProperties::setDamage(int32_t damage) -> void{
this->damage= damage;
    
}


    auto SimpleWeaponProperties::getDamage() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->damage;
    
}


    auto SimpleWeaponProperties::setDissipation(int16_t dissipation) -> void{
this->dissipation= dissipation;
    
}


    auto SimpleWeaponProperties::getDissipation() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->dissipation;
    
}


    auto SimpleWeaponProperties::getRange() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->range;
    
}


    auto SimpleWeaponProperties::setRange(int32_t range) -> void{
this->range= range;
    
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_WEAPON_SIMPLEWEAPONPROPERTIES_CPP
