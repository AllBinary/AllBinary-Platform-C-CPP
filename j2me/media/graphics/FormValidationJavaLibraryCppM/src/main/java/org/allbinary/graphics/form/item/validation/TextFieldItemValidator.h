
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/form/item/ABTextFieldItem.h>

      
#include <org/allbinary/logic/control/validate/ValidatorBase.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TextFieldItemValidator: public ValidatorBase {
        

    private: const textFieldItem: ABTextFieldItem;

    private: min: int32_t;

    private: max: int32_t;

    private: allowOnEmpty: bool;

public constructor (ABTextFieldItem textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);

    public Boolean isValid();

    public BasicArrayList toList();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_H
