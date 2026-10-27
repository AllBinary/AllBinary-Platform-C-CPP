
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPITAL_HUDCAPITAL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_HUDCAPITAL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/capital/HudCapital.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/capital/Capital.h"


HudCapital::HudCapital(NumberStringHud* moneyGraphic){
this->capitalGraphic= moneyGraphic;
    
}


    auto HudCapital::removeMoney(int32_t points) -> void{
Capital::removeMoney(points);
    
this->capitalGraphic->reduce(points);
    
}


    auto HudCapital::getTotalMoney() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->capitalGraphic->get();;
    
}


    auto HudCapital::addMoney(int32_t points) -> void{
Capital::addMoney(points);
    
this->capitalGraphic->add(points);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_CAPITAL_HUDCAPITAL_CPP
