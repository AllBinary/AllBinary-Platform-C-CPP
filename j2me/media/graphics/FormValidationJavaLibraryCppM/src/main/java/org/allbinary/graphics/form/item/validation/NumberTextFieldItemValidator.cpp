
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_NUMBERTEXTFIELDITEMVALIDATOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_NUMBERTEXTFIELDITEMVALIDATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/validation/NumberTextFieldItemValidator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/NumberFormatException.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/form/item/ABTextFieldItem.h>

      
#include <org/allbinary/logic/control/validate/ValidatorBase.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NumberTextFieldItemValidator::NumberTextFieldItemValidator(ABTextFieldItem* textFieldItem, int32_t maxChars, int32_t min, int32_t max){
this->textFieldItem= textFieldItem;
    
this->min= min;
    
this->max= max;
    
this->maxChars= maxChars;
    
}


    auto NumberTextFieldItemValidator::isNumberValid(int32_t value) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance()->TRUE;
    
}


    auto NumberTextFieldItemValidator::toNumberVector(int32_t value) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicArrayListD();
    
}


    auto NumberTextFieldItemValidator::isValid() -> bool{

    bool result = BooleanFactory::getInstance()->TRUE;;
    

    std::string string = this->textFieldItem->getString();;
    

    int32_t textLength = string.size();;
    

                        if(textLength > 0 && textLength < this->maxChars)
                        
                                    {
                                    
        try {
            Integer.parseInt(this->textFieldItem->getString());
    

                //: 
} catch(NumberFormatException& e) 
            {
result= BooleanFactory::getInstance()->FALSE;
    
}


                                    }
                                
                        else {
                            
                        if(textLength < 1)
                        
                                    {
                                    result= BooleanFactory::getInstance()->FALSE;
    

                                    }
                                
                             else 
                        if(textLength > this->maxChars)
                        
                                    {
                                    result= BooleanFactory::getInstance()->FALSE;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    auto NumberTextFieldItemValidator::toList() -> BasicArrayList*{

    BasicArrayList* list = new BasicArrayListD();;
    

    std::string string = this->textFieldItem->getString();;
    

    int32_t textLength = string.size();;
    

    std::string label = this->textFieldItem->getLabel();;
    

    std::string name = JavaString::substring(label, 0, label.size() -2);;
    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    StringMaker* stringMaker = new StringMaker();;
    

                        if(textLength > 0 && textLength < this->maxChars)
                        
                                    {
                                    
        try {
            
    int32_t number = smallIntegerSingletonFactory->createInstance(Integer.parseInt(this->textFieldItem->getString()));;
    

                        if(number.intValue() > this->min)
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
list->add(stringMaker->append(name)->append(" is to small")->toString());
    

                                    }
                                
                             else 
                        if(number.intValue() > this->max)
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
list->add(stringMaker->append(name)->append(" is to large")->toString());
    

                                    }
                                

                //: 
} catch(NumberFormatException& e) 
            {
stringMaker->delete_(0, stringMaker->length());
    
list->add(stringMaker->append(name)->append(" is not a number")->toString());
    
}


                                    }
                                
                        else {
                            
                        if(textLength < 1)
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
list->add(stringMaker->append(name)->append(" is to short")->toString());
    

                                    }
                                
                             else 
                        if(textLength > this->maxChars)
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
list->add(stringMaker->append(name)->append(" is to long")->toString());
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_NUMBERTEXTFIELDITEMVALIDATOR_CPP
