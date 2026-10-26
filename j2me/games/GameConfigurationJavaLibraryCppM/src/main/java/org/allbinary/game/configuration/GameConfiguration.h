
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
        #include "GameConfigurationSingleton.h"

class GameConfiguration
            : public Object
         {

    private: static const Integer MIN_VALUE = Integer(Integer::MIN_VALUE);

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

    private: Integer defaultValue = SmallIntegerSingletonFactory::getInstance().getAt(0);

    private: Integer value = GameConfiguration::MIN_VALUE;

    private: Integer minValue = this->defaultValue;

    private: Integer maxValue = this->defaultValue;

    private: Boolean modifiable = BooleanFactory::getInstance().TRUE;

public: GameConfiguration(std::string name, Integer defaultValue, Integer minValue, Integer maxValue);

                //@Throws(Exception.constructor)
            
    public: void setValue(Integer value);

    public: Integer getValue();

    public: void setMaxValue(Integer maxValue);

    public: Integer getMaxValue();

    public: void setMinValue(Integer minValue);

    public: Integer getMinValue();

    public: void setName(std::string name);

    public: std::string getName();

    public: void setDefaultValue(Integer defaultValue);

    protected: Integer getDefaultValue();

                //@Throws(Exception.constructor)
            
    public: void setDefault();

    public: std::string toString();

    public: void setModifiable(Boolean modifiable);

    public: Boolean isModifiable();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_H
