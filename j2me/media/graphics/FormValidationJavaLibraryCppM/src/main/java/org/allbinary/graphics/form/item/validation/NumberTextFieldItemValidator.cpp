
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
        



            #include "../../../../../../java/lang/NumberFormatException.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/graphics/form/item/ABTextFieldItem.h>

      
#include <org/allbinary/logic/control/validate/ValidatorBase.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NumberTextFieldItemValidator: public ValidatorBase {

    private: ABTextFieldItem textFieldItem;

    private: int32_t min;

    private: int32_t max;

    private: int32_t maxChars;

public: NumberTextFieldItemValidator(ABTextFieldItem textFieldItem, int32_t maxChars, int32_t min, int32_t max){
this->textFieldItem= textFieldItem;
    
this->min= min;
    
this->max= max;
    
this->maxChars= maxChars;
    
}


    protected: Boolean isNumberValid(Integer value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance().TRUE;
    
}


    protected: Vector<any> toNumberVector(Integer value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<any>();
    
}


    public: Boolean isValid(){

    Boolean result = BooleanFactory::getInstance().TRUE;;
    

    std::string string = this->textFieldItem.getString();;
    

    int32_t textLength = string.size();;
    

                        if(textLength > 0 && textLength < this->maxChars)
                        
                                    {
                                    
        try {
            Integer::parseInt(this->textFieldItem.getString());
    

                //: 
} catch(e) 
            {
result= BooleanFactory::getInstance().FALSE;
    
}


                                    }
                                
                        else {
                            
                        if(textLength < 1)
                        
                                    {
                                    result= BooleanFactory::getInstance().FALSE;
    

                                    }
                                
                             else 
                        if(textLength > this->maxChars)
                        
                                    {
                                    result= BooleanFactory::getInstance().FALSE;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public: BasicArrayList toList(){

    BasicArrayList list = BasicArrayListD();;
    

    std::string string = this->textFieldItem.getString();;
    

    int32_t textLength = string.size();;
    

    std::string label = this->textFieldItem.getLabel();;
    

    std::string name = label.substring(0, label.size() -2);;
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    StringMaker stringMaker = StringMaker();;
    

                        if(textLength > 0 && textLength < this->maxChars)
                        
                                    {
                                    
        try {
            
    Integer number = smallIntegerSingletonFactory.createInstance(Integer::parseInt(this->textFieldItem.getString()));;
    

                        if(number.intValue() > this->min)
                        
                                    {
                                    stringMaker.delete(0, stringMaker.length());
    
list.add(stringMaker.append(name).append(" is to small").toString());
    

                                    }
                                
                             else 
                        if(number.intValue() > this->max)
                        
                                    {
                                    stringMaker.delete(0, stringMaker.length());
    
list.add(stringMaker.append(name).append(" is to large").toString());
    

                                    }
                                

                //: 
} catch(e) 
            {
stringMaker.delete(0, stringMaker.length());
    
list.add(stringMaker.append(name).append(" is not a number").toString());
    
}


                                    }
                                
                        else {
                            
                        if(textLength < 1)
                        
                                    {
                                    stringMaker.delete(0, stringMaker.length());
    
list.add(stringMaker.append(name).append(" is to short").toString());
    

                                    }
                                
                             else 
                        if(textLength > this->maxChars)
                        
                                    {
                                    stringMaker.delete(0, stringMaker.length());
    
list.add(stringMaker.append(name).append(" is to long").toString());
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


};

            

