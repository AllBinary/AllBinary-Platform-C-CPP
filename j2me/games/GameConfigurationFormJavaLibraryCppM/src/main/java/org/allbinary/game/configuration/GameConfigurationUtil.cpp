
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

    private: static GameConfigurationUtil instance() { return GameConfigurationUtil(); }

    public: static GameConfigurationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameConfigurationUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: void change(GameOptionsForm gameOptionsForm, GameConfigurationGauge gauge){
this->update(gauge);
    

    GameConfigurationSingleton gameConfigurationSingleton = GameConfigurationSingleton::getInstance();;
    

    GameConfiguration gameConfiguration = gameConfigurationSingleton.getInstanceByName(gauge.getLabel());;
    
this->updateChallange(gameOptionsForm, gameConfiguration);
    
}


    private: const std::string GAUGE_UPDATE = "Gauge Update: ";

    private: const std::string FROM = " from: ";

    private: const std::string TO = " to: ";

                //@Throws(Exception.constructor)
            
    public: void update(GameConfigurationGauge gauge){

    GameConfigurationSingleton gameConfigurationSingleton = GameConfigurationSingleton::getInstance();;
    

    GameConfiguration gameConfiguration = gameConfigurationSingleton.getInstanceByName(gauge.getLabel());;
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    Integer value = smallIntegerSingletonFactory.getAt(gauge.getValue() +gameConfiguration.getMinValue().intValue());;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->GAUGE_UPDATE);
    
stringBuffer.append(gameConfiguration.getName());
    
stringBuffer.append(this->FROM);
    
stringBuffer.appendint(gameConfiguration.getValue().intValue());
    
stringBuffer.append(this->TO);
    
stringBuffer.appendint(value.intValue());
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.UPDATE);
    
gameConfiguration.setValue(value);
    
}


                //@Throws(Exception.constructor)
            
    public: void setDefault(GameConfigurationGauge gauge){

    GameConfigurationSingleton gameConfigurationSingleton = GameConfigurationSingleton::getInstance();;
    

    GameConfiguration gameConfiguration = gameConfigurationSingleton.getInstanceByName(gauge.getLabel());;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Gauge Default: ");
    
stringBuffer.append(gameConfiguration.getName());
    
stringBuffer.append(this->TO);
    
stringBuffer.appendint(gameConfiguration.getDefaultValue().intValue());
    
this->logUtil.putF(stringBuffer.toString(), this, "setDefault");
    
gauge.setValue(gameConfiguration.getDefaultValue().intValue() -gameConfiguration.getMinValue().intValue());
    
gameConfiguration.setValue(gameConfiguration.getDefaultValue());
    
}


                //@Throws(Exception.constructor)
            
    public: void updateChallange(GameOptionsForm gameOptionsForm, GameConfiguration gameConfiguration){

    GameConfigurationSingleton gameConfigurationSingleton = GameConfigurationSingleton::getInstance();;
    

    GameConfigurationCentral gameConfigurationCentral = GameConfigurationCentral::getInstance();;
    

                        if(gameConfiguration == gameConfigurationCentral.CHALLENGE_LEVEL)
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "updateChallange");
    
gameConfigurationCentral.COLLIDE_DAMAGE.setValue(gameConfiguration.getValue());
    
gameConfigurationCentral.ATTACK_CHALLENGE_LEVEL.setValue(gameConfiguration.getValue());
    
gameConfigurationCentral.DURABILITY_CHALLENGE_LEVEL.setValue(gameConfiguration.getValue());
    
gameConfigurationCentral.SPEED_CHALLENGE_LEVEL.setValue(gameConfiguration.getValue());
    

    int32_t size = gameOptionsForm.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item item = gameOptionsForm.get(index);;
    

                        if(item instanceof GameConfigurationGauge)
                        
                                    {
                                    
    GameConfigurationGauge gauge = item as GameConfigurationGauge;;
    

    std::string name = item.getLabel();;
    

    GameConfiguration nextGameConfiguration = gameConfigurationSingleton.getInstanceByName(name);;
    

                        if(nextGameConfiguration == gameConfigurationCentral.COLLIDE_DAMAGE)
                        
                                    {
                                    gauge.setValue(gameConfigurationCentral.COLLIDE_DAMAGE.getValue().intValue() -gameConfiguration.getMinValue().intValue());
    

                                    }
                                
                             else 
                        if(nextGameConfiguration == gameConfigurationCentral.DURABILITY_CHALLENGE_LEVEL)
                        
                                    {
                                    gauge.setValue(gameConfigurationCentral.DURABILITY_CHALLENGE_LEVEL.getValue().intValue() -gameConfiguration.getMinValue().intValue());
    

                                    }
                                
                             else 
                        if(nextGameConfiguration == gameConfigurationCentral.ATTACK_CHALLENGE_LEVEL)
                        
                                    {
                                    gauge.setValue(gameConfigurationCentral.ATTACK_CHALLENGE_LEVEL.getValue().intValue() -gameConfiguration.getMinValue().intValue());
    

                                    }
                                
                             else 
                        if(nextGameConfiguration == gameConfigurationCentral.SPEED_CHALLENGE_LEVEL)
                        
                                    {
                                    gauge.setValue(gameConfigurationCentral.SPEED_CHALLENGE_LEVEL.getValue().intValue() -gameConfiguration.getMinValue().intValue());
    

                                    }
                                

                                    }
                                
}


                                    }
                                
}


    private: int32_t COMPETITION_VALUE = 1;

    public: void updateCompetitionValue(){
this->logUtil.putF(this->commonStrings.START, this, "updateCompetitionValue");
    

    GameConfigurationCentral gameConfigurationCentral = GameConfigurationCentral::getInstance();;
    
this->COMPETITION_VALUE= gameConfigurationCentral.COLLIDE_DAMAGE.getValue().intValue() +gameConfigurationCentral.ATTACK_CHALLENGE_LEVEL.getValue().intValue() +gameConfigurationCentral.DURABILITY_CHALLENGE_LEVEL.getValue().intValue() +gameConfigurationCentral.SPEED_CHALLENGE_LEVEL.getValue().intValue();
    
this->COMPETITION_VALUE= (this->COMPETITION_VALUE>>2);
    
}


    public: int32_t getCompetitionValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->COMPETITION_VALUE;
    
}


};

            

