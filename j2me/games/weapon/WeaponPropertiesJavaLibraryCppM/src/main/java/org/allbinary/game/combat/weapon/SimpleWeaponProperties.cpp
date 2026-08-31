
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimpleWeaponProperties
            : public Object
         {
        

    private: damage: int32_t= 0;

    private: dissipation: int16_t= 0;

    private: range: int32_t= 0;

    public set(SimpleWeaponProperties simpleWeaponProperties){
this.setDamage(simpleWeaponProperties!.getDamage());
    
this.setDissipation(simpleWeaponProperties!.getDissipation());
    
this.setRange(simpleWeaponProperties!.getRange());
    
}


    public setDamage(int32_t damage){
this.damage= damage;
    
}


    public int32_t getDamage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.damage;
    
}


    public setDissipation(int16_t dissipation){
this.dissipation= dissipation;
    
}


    public int16_t getDissipation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.dissipation;
    
}


    public int32_t getRange(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.range;
    
}


    public setRange(int32_t range){
this.range= range;
    
}


};

            

