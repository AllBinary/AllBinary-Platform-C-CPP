
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FormType.h"

class FormTypeFactory
            : public Object
         {
        

    private: static const instance: FormTypeFactory = new FormTypeFactory();

    public static FormTypeFactory getInstance();

    public const UNK: string = "Unknown FormType";

    public const NULL_FORM_TYPE: FormType = new FormType(StringUtil.getInstance()!.NULL_STRING);

    public const TEMP_HORIZONTAL_FORM: FormType = new FormType("TempHorizontal");

    public const HORIZONTAL_FORM: FormType = new FormType("Horizontal");

    public const VERTICAL_CENTER_FORM: FormType = new FormType("Vertical");

    public FormType getFormType();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_H
