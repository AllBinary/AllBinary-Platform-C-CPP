
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_H

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

class GameConfiguration
            : public Object
         {

    private: static inline int32_t MIN_VALUE = int32_t(Integer.MIN_VALUE());

    private: std::string name = StringUtil::getInstance()->EMPTY_STRING;

    private: int32_t defaultValue = SmallIntegerSingletonFactory::getInstance()->getAt(0);

    private: int32_t value = GameConfiguration::MIN_VALUE();

    private: int32_t minValue = this->defaultValue;

    private: int32_t maxValue = this->defaultValue;

    private: bool modifiable = BooleanFactory::getInstance()->TRUE;

public: GameConfiguration(std::string name, int32_t defaultValue, int32_t minValue, int32_t maxValue);

                //@Throws(Exception.constructor)
            
    public: void setValue(int32_t value);

    public: int32_t getValue();

    public: void setMaxValue(int32_t maxValue);

    public: int32_t getMaxValue();

    public: void setMinValue(int32_t minValue);

    public: int32_t getMinValue();

    public: void setName(std::string name);

    public: std::string getName();

    public: void setDefaultValue(int32_t defaultValue);

    protected: int32_t getDefaultValue();

                //@Throws(Exception.constructor)
            
    public: void setDefault();

    public: std::string toString();

    public: void setModifiable(bool modifiable);

    public: bool isModifiable();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_H
