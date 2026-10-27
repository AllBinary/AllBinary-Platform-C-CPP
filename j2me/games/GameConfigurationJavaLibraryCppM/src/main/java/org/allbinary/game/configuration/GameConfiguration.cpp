
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/GameConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/configuration/event/GameFeatureEvent.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEventHandler.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/GameConfigurationSingleton.h"

int32_t GameConfiguration::MIN_VALUE = int32_t(Integer.MIN_VALUE);

GameConfiguration::GameConfiguration(std::string name, int32_t defaultValue, int32_t minValue, int32_t maxValue) : name(StringUtil::getInstance()->EMPTY_STRING), defaultValue(SmallIntegerSingletonFactory::getInstance()->getAt(0)), value(GameConfiguration::MIN_VALUE), minValue(this->defaultValue), maxValue(this->defaultValue), modifiable(BooleanFactory::getInstance()->TRUE){
this->setName(name);
    
this->setDefaultValue(defaultValue);
    
this->value= this->getDefaultValue();
    
this->setMinValue(minValue);
    
this->setMaxValue(maxValue);
    
GameConfigurationSingleton::getInstance()->getHashtable()->put(this->getName(), this);
    
}


                //@Throws(Exception.constructor)
            
    auto GameConfiguration::setValue(int32_t value) -> void{

                        if(this->value != value)
                        
                                    {
                                    
    int32_t oldValue = this->value;;
    
this->value= value;
    
GameFeatureEventHandler::getInstance()->fireEvent(new GameFeatureEvent(this, (new StringMaker())->append(this->name)->append(" value: from: ")->appendint(oldValue.intValue())->append(" to ")->appendint(this->value.intValue())->toString()));
    

                                    }
                                
}


    auto GameConfiguration::getValue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


    auto GameConfiguration::setMaxValue(int32_t maxValue) -> void{
this->maxValue= maxValue;
    
}


    auto GameConfiguration::getMaxValue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxValue;
    
}


    auto GameConfiguration::setMinValue(int32_t minValue) -> void{
this->minValue= minValue;
    
}


    auto GameConfiguration::getMinValue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minValue;
    
}


    auto GameConfiguration::setName(std::string name) -> void{
this->name= name;
    
}


    auto GameConfiguration::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto GameConfiguration::setDefaultValue(int32_t defaultValue) -> void{
this->defaultValue= defaultValue;
    
}


    auto GameConfiguration::getDefaultValue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->defaultValue;
    
}


                //@Throws(Exception.constructor)
            
    auto GameConfiguration::setDefault() -> void{
this->setValue(this->getDefaultValue());
    
}


    auto GameConfiguration::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Name: ");
    
stringBuffer->append(this->name);
    
stringBuffer->append(" Min: ");
    
stringBuffer->appendint(this->getMinValue().intValue());
    
stringBuffer->append(" Max: ");
    
stringBuffer->appendint(this->getMaxValue().intValue());
    
stringBuffer->append(" Value: ");
    
stringBuffer->appendint(this->getValue().intValue());
    
stringBuffer->append(" Default: ");
    
stringBuffer->appendint(this->getDefaultValue().intValue());
    
stringBuffer->append(" Modifiable: ");
    
stringBuffer->appendboolean(this->isModifiable().valueOf());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto GameConfiguration::setModifiable(bool modifiable) -> void{
this->modifiable= modifiable;
    
}


    auto GameConfiguration::isModifiable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->modifiable;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_CPP
