
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

public constructor (int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation){

            super();
        
                        if(speed < this.MAX && speed != 0 && !WeaponProperties.messageSent)
                        
                                    {
                                    
    MESSAGE: string = "Danger Danger Danger: Speed probably to slow if using 1 degree calculations as velocity for a single axis could be below 1024: ";;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.put(new StringMaker().append(MESSAGE)!.appendlong(speed)!.toString(), this, commonStrings!.CONSTRUCTOR);
    
WeaponProperties.messageSent= true;
    

                                    }
                                
this.setReloadTime(reloadTime);
    
this.setTargetingTime(targetingTime);
    
this.setDamage(damage);
    
this.setDissipation(dissipation);
    
this.setSpeed(new BasicDecimal(speed));
    

                        if(dissipation != this.ZERO)
                        
                                    {
                                    
    unscaledDamage: int64_t = this.speed.getUnscaled() *damage;;
    

    scaledDissipation: int32_t = dissipation *this.speed.getScaledFactorValue();;
    

    value: int64_t = (unscaledDamage /scaledDissipation);;
    
this.setRange(static_cast<int32_t>((value *9)) /10);
    

                                    }
                                
}


    setReloadTime(int64_t reloadTime){
this.reloadTime= reloadTime;
    
}


    public int64_t getReloadTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.reloadTime;
    
}


    setTargetingTime(int64_t targetingTime){
this.targetingTime= targetingTime;
    
}


    public int64_t getTargetingTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.targetingTime;
    
}


    public BasicDecimal getSpeed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.speed;
    
}


    public setSpeed(BasicDecimal speed){
this.speed= speed;
    
}


    public int32_t getDamageI(int32_t range){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getDamage() -((this.getDissipation() *range) /this.speed.getScaled());
    
}


    public std::vector<string> toStringArray(){

    index: int32_t = 0;;
    

    stringArray: std::vector<string> = new Array(3);;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringArray[index++]= stringBuffer!.append(WeaponProperties.DAMAGE)!.appendint(this.getDamage())!.toString();
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringArray[index++]= stringBuffer!.append(WeaponProperties.RANGE)!.appendint(this.getRange())!.toString();
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringArray[index++]= stringBuffer!.append(WeaponProperties.RELOAD)!.appendlong(this.getReloadTime())!.toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringArray;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(WeaponProperties.DAMAGE)!.appendint(this.getDamage());
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(WeaponProperties.RANGE)!.appendint(this.getRange());
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(WeaponProperties.RELOAD)!.appendlong(this.getReloadTime());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

