
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimpleWeaponProperties
            : public Object
         {

    private: int32_t damage= 0;

    private: int16_t dissipation= 0;

    private: int32_t range= 0;

    public: void set(SimpleWeaponProperties simpleWeaponProperties){
this->setDamage(simpleWeaponProperties.getDamage());
    
this->setDissipation(simpleWeaponProperties.getDissipation());
    
this->setRange(simpleWeaponProperties.getRange());
    
}


    public: void setDamage(int32_t damage){
this->damage= damage;
    
}


    public: int32_t getDamage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->damage;
    
}


    public: void setDissipation(int16_t dissipation){
this->dissipation= dissipation;
    
}


    public: int16_t getDissipation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dissipation;
    
}


    public: int32_t getRange(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->range;
    
}


    public: void setRange(int32_t range){
this->range= range;
    
}


};

            

