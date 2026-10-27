
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

public: GameConfiguration(std::string name, int32_t defaultValue, int32_t minValue, int32_t maxValue){
this->setName(name);
    
this->setDefaultValue(defaultValue);
    
this->value= this->getDefaultValue();
    
this->setMinValue(minValue);
    
this->setMaxValue(maxValue);
    
GameConfigurationSingleton::getInstance()->getHashtable()->put(this->getName(), this);
    
}


                //@Throws(Exception.constructor)
            
    public: void setValue(int32_t value){

                        if(this->value != value)
                        
                                    {
                                    
    int32_t oldValue = this->value;;
    
this->value= value;
    
GameFeatureEventHandler::getInstance()->fireEvent(new GameFeatureEvent(this, (new StringMaker())->append(this->name)->append(" value: from: ")->appendint(oldValue.intValue())->append(" to ")->appendint(this->value.intValue())->toString()));
    

                                    }
                                
}


    public: int32_t getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


    public: void setMaxValue(int32_t maxValue){
this->maxValue= maxValue;
    
}


    public: int32_t getMaxValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxValue;
    
}


    public: void setMinValue(int32_t minValue){
this->minValue= minValue;
    
}


    public: int32_t getMinValue(){



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


    public: void setDefaultValue(int32_t defaultValue){
this->defaultValue= defaultValue;
    
}


    protected: int32_t getDefaultValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->defaultValue;
    
}


                //@Throws(Exception.constructor)
            
    public: void setDefault(){
this->setValue(this->getDefaultValue());
    
}


    public: std::string toString(){

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


    public: void setModifiable(bool modifiable){
this->modifiable= modifiable;
    
}


    public: bool isModifiable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->modifiable;
    
}


};

            

