
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

public: GameConfiguration(std::string name, Integer defaultValue, Integer minValue, Integer maxValue){
this->setName(name);
    
this->setDefaultValue(defaultValue);
    
this->value= this->getDefaultValue();
    
this->setMinValue(minValue);
    
this->setMaxValue(maxValue);
    
GameConfigurationSingleton::getInstance().getHashtable().put(this->getName(), this);
    
}


                //@Throws(Exception.constructor)
            
    public: void setValue(Integer value){

                        if(this->value != value)
                        
                                    {
                                    
    Integer oldValue = this->value;;
    
this->value= value;
    
GameFeatureEventHandler::getInstance().fireEvent(GameFeatureEvent(this, StringMaker().append(this->name).append(" value: from: ").appendint(oldValue.intValue()).append(" to ").appendint(this->value.intValue()).toString()));
    

                                    }
                                
}


    public: Integer getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


    public: void setMaxValue(Integer maxValue){
this->maxValue= maxValue;
    
}


    public: Integer getMaxValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxValue;
    
}


    public: void setMinValue(Integer minValue){
this->minValue= minValue;
    
}


    public: Integer getMinValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minValue;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setDefaultValue(Integer defaultValue){
this->defaultValue= defaultValue;
    
}


    protected: Integer getDefaultValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->defaultValue;
    
}


                //@Throws(Exception.constructor)
            
    public: void setDefault(){
this->setValue(this->getDefaultValue());
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Name: ");
    
stringBuffer.append(this->name);
    
stringBuffer.append(" Min: ");
    
stringBuffer.appendint(this->getMinValue().intValue());
    
stringBuffer.append(" Max: ");
    
stringBuffer.appendint(this->getMaxValue().intValue());
    
stringBuffer.append(" Value: ");
    
stringBuffer.appendint(this->getValue().intValue());
    
stringBuffer.append(" Default: ");
    
stringBuffer.appendint(this->getDefaultValue().intValue());
    
stringBuffer.append(" Modifiable: ");
    
stringBuffer.appendboolean(this->isModifiable().valueOf());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: void setModifiable(Boolean modifiable){
this->modifiable= modifiable;
    
}


    public: Boolean isModifiable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->modifiable;
    
}


};

            

