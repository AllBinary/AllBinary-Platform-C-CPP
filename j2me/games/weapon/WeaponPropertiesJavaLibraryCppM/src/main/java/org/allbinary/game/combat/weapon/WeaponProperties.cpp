
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
        



            #include <vector>
        
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

public: WeaponProperties(int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation){

                        if(speed < this->MAX && speed != 0 && !WeaponProperties::messageSent)
                        
                                    {
                                    
    std::string MESSAGE = "Danger Danger Danger: Speed probably to slow if using 1 degree calculations as velocity for a single axis could be below 1024: ";;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(StringMaker().append(MESSAGE).appendlong(speed).toString(), this, commonStrings.CONSTRUCTOR);
    
WeaponProperties::messageSent= true;
    

                                    }
                                
this->setReloadTime(reloadTime);
    
this->setTargetingTime(targetingTime);
    
this->setDamage(damage);
    
this->setDissipation(dissipation);
    
this->setSpeed(BasicDecimal(speed));
    

                        if(dissipation != this->ZERO)
                        
                                    {
                                    
    int64_t unscaledDamage = this->speed.getUnscaled() *damage;;
    

    int32_t scaledDissipation = dissipation *this->speed.getScaledFactorValue();;
    

    int64_t value = (unscaledDamage /scaledDissipation);;
    
this->setRange(static_cast<int32_t>((value *9)) /10);
    

                                    }
                                
}


    private: void setReloadTime(int64_t reloadTime){
this->reloadTime= reloadTime;
    
}


    public: int64_t getReloadTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->reloadTime;
    
}


    private: void setTargetingTime(int64_t targetingTime){
this->targetingTime= targetingTime;
    
}


    public: int64_t getTargetingTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->targetingTime;
    
}


    public: BasicDecimal getSpeed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->speed;
    
}


    public: void setSpeed(BasicDecimal speed){
this->speed= speed;
    
}


    public: int32_t getDamageI(int32_t range){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getDamage() -((this->getDissipation() *range) /this->speed.getScaled());
    
}


    public: std::vector<std::string> toStringArray(){

    int32_t index = 0;;
    

    std::vector<std::string> stringArray = new Array(3);;
    

    StringMaker stringBuffer = StringMaker();;
    
stringArray[index++]= stringBuffer.append(WeaponProperties::DAMAGE).appendint(this->getDamage()).toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringArray[index++]= stringBuffer.append(WeaponProperties::RANGE).appendint(this->getRange()).toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringArray[index++]= stringBuffer.append(WeaponProperties::RELOAD).appendlong(this->getReloadTime()).toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringArray;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(WeaponProperties::DAMAGE).appendint(this->getDamage());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(WeaponProperties::RANGE).appendint(this->getRange());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(WeaponProperties::RELOAD).appendlong(this->getReloadTime());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

