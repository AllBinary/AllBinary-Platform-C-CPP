
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Item.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfigurationSingleton.h"
#include "GameConfiguration.h"
#include "GameOptionsForm.h"
#include "GameConfigurationGauge.h"
#include "GameConfigurationCentral.h"

class GameConfigurationUtil
            : public Object
         {
        

    private: static const instance: GameConfigurationUtil = new GameConfigurationUtil();

    public static GameConfigurationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameConfigurationUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

                //@Throws(Exception.constructor)
            
    public change(GameOptionsForm gameOptionsForm, GameConfigurationGauge gauge){
this.update(gauge);
    

    gameConfigurationSingleton: GameConfigurationSingleton = GameConfigurationSingleton.getInstance()!;;
    

    gameConfiguration: GameConfiguration = gameConfigurationSingleton!.getInstanceByName(gauge.getLabel())!;;
    
this.updateChallange(gameOptionsForm, gameConfiguration);
    
}


    private: const GAUGE_UPDATE: string = "Gauge Update: ";

    private: const FROM: string = " from: ";

    private: const TO: string = " to: ";

                //@Throws(Exception.constructor)
            
    public update(GameConfigurationGauge gauge){

    gameConfigurationSingleton: GameConfigurationSingleton = GameConfigurationSingleton.getInstance()!;;
    

    gameConfiguration: GameConfiguration = gameConfigurationSingleton!.getInstanceByName(gauge.getLabel())!;;
    

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

    value: Integer = smallIntegerSingletonFactory!.getAt(gauge.getValue() +gameConfiguration!.getMinValue()!.intValue())!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.GAUGE_UPDATE);
    
stringBuffer!.append(gameConfiguration!.getName());
    
stringBuffer!.append(this.FROM);
    
stringBuffer!.appendint(gameConfiguration!.getValue()!.intValue());
    
stringBuffer!.append(this.TO);
    
stringBuffer!.appendint(value.intValue());
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.UPDATE);
    
gameConfiguration!.setValue(value);
    
}


                //@Throws(Exception.constructor)
            
    public setDefault(GameConfigurationGauge gauge){

    gameConfigurationSingleton: GameConfigurationSingleton = GameConfigurationSingleton.getInstance()!;;
    

    gameConfiguration: GameConfiguration = gameConfigurationSingleton!.getInstanceByName(gauge.getLabel())!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Gauge Default: ");
    
stringBuffer!.append(gameConfiguration!.getName());
    
stringBuffer!.append(this.TO);
    
stringBuffer!.appendint(gameConfiguration!.getDefaultValue()!.intValue());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "setDefault");
    
gauge.setValue(gameConfiguration!.getDefaultValue()!.intValue() -gameConfiguration!.getMinValue()!.intValue());
    
gameConfiguration!.setValue(gameConfiguration!.getDefaultValue());
    
}


                //@Throws(Exception.constructor)
            
    public updateChallange(GameOptionsForm gameOptionsForm, GameConfiguration gameConfiguration){

    gameConfigurationSingleton: GameConfigurationSingleton = GameConfigurationSingleton.getInstance()!;;
    

    gameConfigurationCentral: GameConfigurationCentral = GameConfigurationCentral.getInstance()!;;
    

                        if(gameConfiguration == gameConfigurationCentral!.CHALLENGE_LEVEL)
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, "updateChallange");
    
gameConfigurationCentral!.COLLIDE_DAMAGE.setValue(gameConfiguration!.getValue());
    
gameConfigurationCentral!.ATTACK_CHALLENGE_LEVEL.setValue(gameConfiguration!.getValue());
    
gameConfigurationCentral!.DURABILITY_CHALLENGE_LEVEL.setValue(gameConfiguration!.getValue());
    
gameConfigurationCentral!.SPEED_CHALLENGE_LEVEL.setValue(gameConfiguration!.getValue());
    

    size: int32_t = gameOptionsForm!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: Item = gameOptionsForm!.get(index)!;;
    

                        if(item instanceof GameConfigurationGauge)
                        
                                    {
                                    
    gauge: GameConfigurationGauge = item as GameConfigurationGauge;;
    

    name: string = item.getLabel()!;;
    

    nextGameConfiguration: GameConfiguration = gameConfigurationSingleton!.getInstanceByName(name)!;;
    

                        if(nextGameConfiguration == gameConfigurationCentral!.COLLIDE_DAMAGE)
                        
                                    {
                                    gauge.setValue(gameConfigurationCentral!.COLLIDE_DAMAGE.getValue()!.intValue() -gameConfiguration!.getMinValue()!.intValue());
    

                                    }
                                
                             else 
                        if(nextGameConfiguration == gameConfigurationCentral!.DURABILITY_CHALLENGE_LEVEL)
                        
                                    {
                                    gauge.setValue(gameConfigurationCentral!.DURABILITY_CHALLENGE_LEVEL.getValue()!.intValue() -gameConfiguration!.getMinValue()!.intValue());
    

                                    }
                                
                             else 
                        if(nextGameConfiguration == gameConfigurationCentral!.ATTACK_CHALLENGE_LEVEL)
                        
                                    {
                                    gauge.setValue(gameConfigurationCentral!.ATTACK_CHALLENGE_LEVEL.getValue()!.intValue() -gameConfiguration!.getMinValue()!.intValue());
    

                                    }
                                
                             else 
                        if(nextGameConfiguration == gameConfigurationCentral!.SPEED_CHALLENGE_LEVEL)
                        
                                    {
                                    gauge.setValue(gameConfigurationCentral!.SPEED_CHALLENGE_LEVEL.getValue()!.intValue() -gameConfiguration!.getMinValue()!.intValue());
    

                                    }
                                

                                    }
                                
}


                                    }
                                
}


    private: COMPETITION_VALUE: int32_t = 1;

    public updateCompetitionValue(){
this.logUtil!.putF(this.commonStrings!.START, this, "updateCompetitionValue");
    

    gameConfigurationCentral: GameConfigurationCentral = GameConfigurationCentral.getInstance()!;;
    
this.COMPETITION_VALUE= gameConfigurationCentral!.COLLIDE_DAMAGE.getValue()!.intValue() +gameConfigurationCentral!.ATTACK_CHALLENGE_LEVEL.getValue()!.intValue() +gameConfigurationCentral!.DURABILITY_CHALLENGE_LEVEL.getValue()!.intValue() +gameConfigurationCentral!.SPEED_CHALLENGE_LEVEL.getValue()!.intValue();
    
this.COMPETITION_VALUE= (this.COMPETITION_VALUE>>2);
    
}


    public int32_t getCompetitionValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.COMPETITION_VALUE;
    
}


};

            

