
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEvent.h>

      
#include <org/allbinary/game/configuration/event/GameFeatureEventHandler.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfigurationSingleton.h"

class GameConfiguration
            : public Object
         {
        

    private: static const MIN_VALUE: Integer = new Integer(Integer.MIN_VALUE);

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: defaultValue: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

    private: value: Integer = GameConfiguration.MIN_VALUE;

    private: minValue: Integer = this.defaultValue;

    private: maxValue: Integer = this.defaultValue;

    private: modifiable: Boolean = BooleanFactory.getInstance()!.TRUE;

public constructor (string name, Integer defaultValue, Integer minValue, Integer maxValue);

                //@Throws(Exception.constructor)
            
    public setValue(Integer value);

    public Integer getValue();

    public setMaxValue(Integer maxValue);

    public Integer getMaxValue();

    public setMinValue(Integer minValue);

    public Integer getMinValue();

    public setName(string name);

    public string getName();

    public setDefaultValue(Integer defaultValue);

    Integer getDefaultValue();

                //@Throws(Exception.constructor)
            
    public setDefault();

    public string toString();

    public setModifiable(Boolean modifiable);

    public Boolean isModifiable();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_H
