
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_EXPLOSIONRESOURCES_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_EXPLOSIONRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/damage/ExplosionResources.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ExplosionResources::instance_owner() -> ExplosionResources* { static std::unique_ptr<ExplosionResources> value(new ExplosionResources()); return value.get(); }
ExplosionResources* ExplosionResources::instance = ExplosionResources::instance_owner();

    auto ExplosionResources::getInstance() -> ExplosionResources*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ExplosionResources::instance;
    
}


ExplosionResources::ExplosionResources(){
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_EXPLOSIONRESOURCES_CPP
