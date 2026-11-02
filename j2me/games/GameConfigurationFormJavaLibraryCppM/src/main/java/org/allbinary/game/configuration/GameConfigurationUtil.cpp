
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/GameConfigurationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Item.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/GameConfigurationSingleton.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"


GameConfigurationUtil::GameConfigurationUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        auto GameConfigurationUtil::instance_owner() -> GameConfigurationUtil* { static std::unique_ptr<GameConfigurationUtil> value(new GameConfigurationUtil()); return value.get(); }
GameConfigurationUtil* GameConfigurationUtil::instance = GameConfigurationUtil::instance_owner();

    auto GameConfigurationUtil::getInstance() -> GameConfigurationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameConfigurationUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto GameConfigurationUtil::change(GameOptionsForm* gameOptionsForm, GameConfigurationGauge* gauge) -> void{
this->update(gauge);
    

    GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton::getInstance();;
    

    GameConfiguration* gameConfiguration = gameConfigurationSingleton->getInstanceByName(gauge->getLabel());;
    
this->updateChallange(gameOptionsForm, gameConfiguration);
    
}


                //@Throws(Exception.constructor)
            
    auto GameConfigurationUtil::update(GameConfigurationGauge* gauge) -> void{

    GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton::getInstance();;
    

    GameConfiguration* gameConfiguration = gameConfigurationSingleton->getInstanceByName(gauge->getLabel());;
    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    int32_t value = smallIntegerSingletonFactory->getAt(gauge->getValue() +JavaBoxes::value<int32_t>(gameConfiguration->getMinValue()));;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->GAUGE_UPDATE);
    
stringBuffer->append(gameConfiguration->getName());
    
stringBuffer->append(this->FROM);
    
stringBuffer->appendint(JavaBoxes::value<int32_t>(gameConfiguration->getValue()));
    
stringBuffer->append(this->TO);
    
stringBuffer->appendint(value);
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->UPDATE);
    
gameConfiguration->setValue(value);
    
}


                //@Throws(Exception.constructor)
            
    auto GameConfigurationUtil::setDefault(GameConfigurationGauge* gauge) -> void{

    GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton::getInstance();;
    

    GameConfiguration* gameConfiguration = gameConfigurationSingleton->getInstanceByName(gauge->getLabel());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Gauge Default: ");
    
stringBuffer->append(gameConfiguration->getName());
    
stringBuffer->append(this->TO);
    
stringBuffer->appendint(JavaBoxes::value<int32_t>(gameConfiguration->getDefaultValue()));
    
this->logUtil->putF(stringBuffer->toString(), this, "setDefault");
    
gauge->setValue(JavaBoxes::value<int32_t>(gameConfiguration->getDefaultValue()) -JavaBoxes::value<int32_t>(gameConfiguration->getMinValue()));
    
gameConfiguration->setValue(gameConfiguration->getDefaultValue());
    
}


                //@Throws(Exception.constructor)
            
    auto GameConfigurationUtil::updateChallange(GameOptionsForm* gameOptionsForm, GameConfiguration* gameConfiguration) -> void{

    GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton::getInstance();;
    

    GameConfigurationCentral* gameConfigurationCentral = GameConfigurationCentral::getInstance();;
    

                        if(gameConfiguration == gameConfigurationCentral->CHALLENGE_LEVEL)
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "updateChallange");
    
gameConfigurationCentral->COLLIDE_DAMAGE->setValue(gameConfiguration->getValue());
    
gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL->setValue(gameConfiguration->getValue());
    
gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL->setValue(gameConfiguration->getValue());
    
gameConfigurationCentral->SPEED_CHALLENGE_LEVEL->setValue(gameConfiguration->getValue());
    

    int32_t size = gameOptionsForm->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item* item = gameOptionsForm->get(index);;
    

                        if(
                                        (dynamic_cast<const GameConfigurationGauge*>(item) != nullptr)
                                    )
                        
                                    {
                                    
    GameConfigurationGauge* gauge = dynamic_cast<GameConfigurationGauge*>(item);;
    

    std::string name = item->getLabel();;
    

    GameConfiguration* nextGameConfiguration = gameConfigurationSingleton->getInstanceByName(name);;
    

                        if(nextGameConfiguration == gameConfigurationCentral->COLLIDE_DAMAGE)
                        
                                    {
                                    gauge->setValue(JavaBoxes::value<int32_t>(gameConfigurationCentral->COLLIDE_DAMAGE->getValue()) -JavaBoxes::value<int32_t>(gameConfiguration->getMinValue()));
    

                                    }
                                
                             else 
                        if(nextGameConfiguration == gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL)
                        
                                    {
                                    gauge->setValue(JavaBoxes::value<int32_t>(gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL->getValue()) -JavaBoxes::value<int32_t>(gameConfiguration->getMinValue()));
    

                                    }
                                
                             else 
                        if(nextGameConfiguration == gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL)
                        
                                    {
                                    gauge->setValue(JavaBoxes::value<int32_t>(gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL->getValue()) -JavaBoxes::value<int32_t>(gameConfiguration->getMinValue()));
    

                                    }
                                
                             else 
                        if(nextGameConfiguration == gameConfigurationCentral->SPEED_CHALLENGE_LEVEL)
                        
                                    {
                                    gauge->setValue(JavaBoxes::value<int32_t>(gameConfigurationCentral->SPEED_CHALLENGE_LEVEL->getValue()) -JavaBoxes::value<int32_t>(gameConfiguration->getMinValue()));
    

                                    }
                                

                                    }
                                
}


                                    }
                                
}


    auto GameConfigurationUtil::updateCompetitionValue() -> void{
this->logUtil->putF(this->commonStrings->START, this, "updateCompetitionValue");
    

    GameConfigurationCentral* gameConfigurationCentral = GameConfigurationCentral::getInstance();;
    
this->COMPETITION_VALUE= JavaBoxes::value<int32_t>(gameConfigurationCentral->COLLIDE_DAMAGE->getValue()) +JavaBoxes::value<int32_t>(gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL->getValue()) +JavaBoxes::value<int32_t>(gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL->getValue()) +JavaBoxes::value<int32_t>(gameConfigurationCentral->SPEED_CHALLENGE_LEVEL->getValue());
    
this->COMPETITION_VALUE= (this->COMPETITION_VALUE>>2);
    
}


    auto GameConfigurationUtil::getCompetitionValue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->COMPETITION_VALUE;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_CPP
