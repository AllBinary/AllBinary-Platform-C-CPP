
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_AGGRESSION_CPP
        #define ORG_ALLBINARY_GAME_LAYER_AGGRESSION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/Aggression.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Aggression::Aggression(int32_t ram, int32_t projectile, int32_t drops) : ram(SmallIntegerSingletonFactory::getInstance()->getAt(0)), projectile(SmallIntegerSingletonFactory::getInstance()->getAt(0)), drops(SmallIntegerSingletonFactory::getInstance()->getAt(0)){
this->setRam(ram);
    
this->setProjectile(projectile);
    
this->setDrops(drops);
    
}


    auto Aggression::getRam() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ram;
    
}


    auto Aggression::setRam(int32_t ram) -> void{
this->ram= ram;
    
}


    auto Aggression::getProjectile() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->projectile;
    
}


    auto Aggression::setProjectile(int32_t projectile) -> void{
this->projectile= projectile;
    
}


    auto Aggression::getDrops() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->drops;
    
}


    auto Aggression::setDrops(int32_t drops) -> void{
this->drops= drops;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_AGGRESSION_CPP
