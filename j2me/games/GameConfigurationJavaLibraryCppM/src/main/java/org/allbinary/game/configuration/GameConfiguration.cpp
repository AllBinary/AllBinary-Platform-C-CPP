
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

public constructor (string name, Integer defaultValue, Integer minValue, Integer maxValue){

            super();
        this.setName(name);
    
this.setDefaultValue(defaultValue);
    
this.value= this.getDefaultValue();
    
this.setMinValue(minValue);
    
this.setMaxValue(maxValue);
    
GameConfigurationSingleton.getInstance()!.getHashtable()!.put(this.getName(), this);
    
}


                //@Throws(Exception.constructor)
            
    public setValue(Integer value){

                        if(this.value != value)
                        
                                    {
                                    
    oldValue: Integer = this.value;;
    
this.value= value;
    
GameFeatureEventHandler.getInstance()!.fireEvent(new GameFeatureEvent(this, new StringMaker().append(this.name)!.append(" value: from: ")!.appendint(oldValue!.intValue())!.append(" to ")!.appendint(this.value.intValue())!.toString()));
    

                                    }
                                
}


    public Integer getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.value;
    
}


    public setMaxValue(Integer maxValue){
this.maxValue= maxValue;
    
}


    public Integer getMaxValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxValue;
    
}


    public setMinValue(Integer minValue){
this.minValue= minValue;
    
}


    public Integer getMinValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minValue;
    
}


    public setName(string name){
this.name= name;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setDefaultValue(Integer defaultValue){
this.defaultValue= defaultValue;
    
}


    Integer getDefaultValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.defaultValue;
    
}


                //@Throws(Exception.constructor)
            
    public setDefault(){
this.setValue(this.getDefaultValue());
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Name: ");
    
stringBuffer!.append(this.name);
    
stringBuffer!.append(" Min: ");
    
stringBuffer!.appendint(this.getMinValue()!.intValue());
    
stringBuffer!.append(" Max: ");
    
stringBuffer!.appendint(this.getMaxValue()!.intValue());
    
stringBuffer!.append(" Value: ");
    
stringBuffer!.appendint(this.getValue()!.intValue());
    
stringBuffer!.append(" Default: ");
    
stringBuffer!.appendint(this.getDefaultValue()!.intValue());
    
stringBuffer!.append(" Modifiable: ");
    
stringBuffer!.appendboolean(this.isModifiable().valueOf());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public setModifiable(Boolean modifiable){
this.modifiable= modifiable;
    
}


    public Boolean isModifiable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.modifiable;
    
}


};

            

