
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/FormTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/FormType.h"


FormTypeFactory::FormTypeFactory() : NULL_FORM_TYPE(new FormType(StringUtil::getInstance()->NULL_STRING)), TEMP_HORIZONTAL_FORM(new FormType("TempHorizontal")), HORIZONTAL_FORM(new FormType("Horizontal")), VERTICAL_CENTER_FORM(new FormType("Vertical")) {
        }
        auto FormTypeFactory::instance_owner() -> FormTypeFactory* { static std::unique_ptr<FormTypeFactory> value(new FormTypeFactory()); return value.get(); }
FormTypeFactory* FormTypeFactory::instance = FormTypeFactory::instance_owner();

    auto FormTypeFactory::getInstance() -> FormTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FormTypeFactory::instance;
    
}


    auto FormTypeFactory::getFormType() -> FormType*{

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    FormType* formType;;
    

                        if(displayInfo->isPortrait())
                        
                                    {
                                    formType= this->VERTICAL_CENTER_FORM;
    

                                    }
                                
                        else {
                            formType= this->HORIZONTAL_FORM;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return formType;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPEFACTORY_CPP
