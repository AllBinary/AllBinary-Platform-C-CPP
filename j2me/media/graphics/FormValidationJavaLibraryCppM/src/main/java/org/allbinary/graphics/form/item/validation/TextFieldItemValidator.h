
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Boolean.h"
        
class ABTextFieldItem;
#include <org/allbinary/logic/control/validate/ValidatorBase.h>
class BooleanFactory;
class StringMaker;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TextFieldItemValidator: public ValidatorBase {

    private: ABTextFieldItem* textFieldItem;

    private: int32_t min;

    private: int32_t max;

    private: bool allowOnEmpty;

public: TextFieldItemValidator(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);

    public: bool isValid();

    public: BasicArrayList* toList();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/form/item/ABTextFieldItem.h>)
#include <org/allbinary/graphics/form/item/ABTextFieldItem.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidatorBase.h>)
#include <org/allbinary/logic/control/validate/ValidatorBase.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
