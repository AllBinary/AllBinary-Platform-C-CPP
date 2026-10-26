
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_H
        #define ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_H

            #include <vector>
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimpleWeaponProperties.h"

class WeaponProperties: public SimpleWeaponProperties {

    public: static const WeaponProperties NULL_WEAPON_PROPERTIES = WeaponProperties(0, 0, 0, 0, 0);

    private: static bool messageSent = false;

    private: static const std::string DAMAGE = "Damage: ";

    private: static const std::string RANGE = "Range: ";

    private: static const std::string RELOAD = "Reload: ";

    private: int64_t reloadTime= 0;

    private: int64_t targetingTime= 0;

    private: BasicDecimal speed = BasicDecimal::ZERO_BIGDECIMAL;

    private: const int64_t MAX = 10240;

    private: const int16_t ZERO = 0;

public: WeaponProperties(int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation);

    private: void setReloadTime(int64_t reloadTime);

    public: int64_t getReloadTime();

    private: void setTargetingTime(int64_t targetingTime);

    public: int64_t getTargetingTime();

    public: BasicDecimal getSpeed();

    public: void setSpeed(BasicDecimal speed);

    public: int32_t getDamageI(int32_t range);

    public: std::vector<std::string> toStringArray();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_H
