
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

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimpleWeaponProperties.h"

class WeaponProperties: public SimpleWeaponProperties {
        

    public static const NULL_WEAPON_PROPERTIES: WeaponProperties = new WeaponProperties(0, 0, 0, 0, 0);

    private: static messageSent: bool = false;

    private: static const DAMAGE: string = "Damage: ";

    private: static const RANGE: string = "Range: ";

    private: static const RELOAD: string = "Reload: ";

    private: reloadTime: int64_t= 0;

    private: targetingTime: int64_t= 0;

    private: speed: BasicDecimal = BasicDecimal.ZERO_BIGDECIMAL;

    private: const MAX: int64_t = 10240;

    private: const ZERO: int16_t = 0;

public constructor (int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation);

    setReloadTime(int64_t reloadTime);

    public int64_t getReloadTime();

    setTargetingTime(int64_t targetingTime);

    public int64_t getTargetingTime();

    public BasicDecimal getSpeed();

    public setSpeed(BasicDecimal speed);

    public int32_t getDamageI(int32_t range);

    public std::vector<string> toStringArray();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_H
