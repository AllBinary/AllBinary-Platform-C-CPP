
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
        



#include <org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Capital.h"

class HudCapital: public Capital {

    private: NumberStringHud capitalGraphic;

public: HudCapital(NumberStringHud moneyGraphic){
this->capitalGraphic= moneyGraphic;
    
}


    public: void removeMoney(int32_t points){
super.removeMoney(points);
    
this->capitalGraphic.reduce(points);
    
}


    public: int32_t getTotalMoney(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->capitalGraphic.get();;
    
}


    public: void addMoney(int32_t points){
super.addMoney(points);
    
this->capitalGraphic.add(points);
    
}


};

            

