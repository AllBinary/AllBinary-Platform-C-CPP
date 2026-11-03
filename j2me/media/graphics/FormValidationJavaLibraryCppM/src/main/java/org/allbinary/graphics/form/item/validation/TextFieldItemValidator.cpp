
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/validation/TextFieldItemValidator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/form/item/ABTextFieldItem.h>

      
#include <org/allbinary/logic/control/validate/ValidatorBase.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TextFieldItemValidator::TextFieldItemValidator(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty){
this->textFieldItem= textFieldItem;
    
this->min= min;
    
this->max= max;
    
this->allowOnEmpty= allowOnEmpty;
    
}


    auto TextFieldItemValidator::isValid() -> bool{

    BooleanFactory* booleanFactory = BooleanFactory::getInstance();;
    

    bool result = booleanFactory->TRUE;;
    

    std::string string = this->textFieldItem->getString();;
    

    int32_t textLength = string.size();;
    

                        if((textLength == 0 && this->allowOnEmpty) || textLength > this->min && textLength < this->max)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        if(textLength < this->min)
                        
                                    {
                                    result= booleanFactory->FALSE;
    

                                    }
                                
                             else 
                        if(textLength > this->max)
                        
                                    {
                                    result= booleanFactory->FALSE;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    
}


    auto TextFieldItemValidator::toList() -> BasicArrayList*{

    BasicArrayList* list = new BasicArrayListD();;
    

    std::string string = this->textFieldItem->getString();;
    

    int32_t textLength = string.size();;
    

                        if(textLength > this->min && textLength < this->max)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    std::string label = this->textFieldItem->getLabel();;
    

    std::string name = JavaString::substring(label, 0, label.size() -2);;
    

                        if(textLength < this->min)
                        
                                    {
                                    list->add((new StringMaker())->append(name)->append(" is to short")->toString());
    

                                    }
                                
                             else 
                        if(textLength > this->max)
                        
                                    {
                                    list->add((new StringMaker())->append(name)->append(" is to long")->toString());
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return list;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_CPP
