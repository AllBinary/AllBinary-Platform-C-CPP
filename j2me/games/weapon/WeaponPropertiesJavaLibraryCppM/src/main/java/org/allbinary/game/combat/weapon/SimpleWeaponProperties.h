
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_WEAPON_SIMPLEWEAPONPROPERTIES_H
        #define ORG_ALLBINARY_GAME_COMBAT_WEAPON_SIMPLEWEAPONPROPERTIES_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimpleWeaponProperties
            : public Object
         {

    private: int32_t damage= 0;

    private: int16_t dissipation= 0;

    private: int32_t range= 0;

    public: void set(SimpleWeaponProperties* simpleWeaponProperties);

    public: void setDamage(int32_t damage);

    public: int32_t getDamage();

    public: void setDissipation(int16_t dissipation);

    public: int16_t getDissipation();

    public: int32_t getRange();

    public: void setRange(int32_t range);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_WEAPON_SIMPLEWEAPONPROPERTIES_H
