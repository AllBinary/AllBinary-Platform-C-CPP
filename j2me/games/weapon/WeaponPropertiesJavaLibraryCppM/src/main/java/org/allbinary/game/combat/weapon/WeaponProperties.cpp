
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/weapon/WeaponProperties.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/weapon/SimpleWeaponProperties.h"

auto WeaponProperties::NULL_WEAPON_PROPERTIES_owner() -> WeaponProperties* { static std::unique_ptr<WeaponProperties> value(new WeaponProperties(0, 0, 0, 0, 0)); return value.get(); }
WeaponProperties* WeaponProperties::NULL_WEAPON_PROPERTIES = WeaponProperties::NULL_WEAPON_PROPERTIES_owner();

WeaponProperties::WeaponProperties(int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation) : speed(BasicDecimal::ZERO_BIGDECIMAL){

                        if(speed < this->MAX && speed != 0 && !WeaponProperties::messageSent)
                        
                                    {
                                    
    std::string MESSAGE = "Danger Danger Danger: Speed probably to slow if using 1 degree calculations as velocity for a single axis could be below 1024: ";;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put((new StringMaker())->append(MESSAGE)->appendlong(speed)->toString(), this, commonStrings->CONSTRUCTOR);
    
WeaponProperties::messageSent= true;
    

                                    }
                                
this->setReloadTime(reloadTime);
    
this->setTargetingTime(targetingTime);
    
this->setDamage(damage);
    
this->setDissipation(dissipation);
    
this->setSpeed(new BasicDecimal(speed));
    

                        if(dissipation != this->ZERO)
                        
                                    {
                                    
    int64_t unscaledDamage = this->speed->getUnscaled() *damage;;
    

    int32_t scaledDissipation = dissipation *this->speed->getScaledFactorValue();;
    

    int64_t value = (unscaledDamage /scaledDissipation);;
    
this->setRange(static_cast<int32_t>((value *9)) /10);
    

                                    }
                                
}


    auto WeaponProperties::setReloadTime(int64_t reloadTime) -> void{
this->reloadTime= reloadTime;
    
}


    auto WeaponProperties::getReloadTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->reloadTime;
    
}


    auto WeaponProperties::setTargetingTime(int64_t targetingTime) -> void{
this->targetingTime= targetingTime;
    
}


    auto WeaponProperties::getTargetingTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->targetingTime;
    
}


    auto WeaponProperties::getSpeed() -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->speed;
    
}


    auto WeaponProperties::setSpeed(BasicDecimal* speed) -> void{
this->speed= speed;
    
}


    auto WeaponProperties::getDamageI(int32_t range) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getDamage() -((this->getDissipation() *range) /this->speed->getScaled());
    
}


    auto WeaponProperties::toStringArray() -> std::vector<std::string>{

    int32_t index = 0;;
    

    std::vector<std::string> stringArray = std::vector<std::string>(3);;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringArray[index++]= stringBuffer->append(WeaponProperties::DAMAGE)->appendint(this->getDamage())->toString();
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringArray[index++]= stringBuffer->append(WeaponProperties::RANGE)->appendint(this->getRange())->toString();
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringArray[index++]= stringBuffer->append(WeaponProperties::RELOAD)->appendlong(this->getReloadTime())->toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringArray;
    
}


    auto WeaponProperties::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(WeaponProperties::DAMAGE)->appendint(this->getDamage());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(WeaponProperties::RANGE)->appendint(this->getRange());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(WeaponProperties::RELOAD)->appendlong(this->getReloadTime());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_CPP
