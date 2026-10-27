
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPITAL_HUDCAPITAL_H
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_HUDCAPITAL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class NumberStringHud;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/capital/Capital.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HudCapital: public Capital {

    private: NumberStringHud* capitalGraphic;

public: HudCapital(NumberStringHud* moneyGraphic);

    public: void removeMoney(int32_t points);

    public: int32_t getTotalMoney();

    public: void addMoney(int32_t points);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_CAPITAL_HUDCAPITAL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_CAPITAL_HUDCAPITAL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_HUDCAPITAL_H_COMPLETE
        #if __has_include(<org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h>)
#include <org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h>
#endif
#if __has_include("org/allbinary/game/layer/capital/Capital.h")
#include "org/allbinary/game/layer/capital/Capital.h"
#endif

        #endif
    
