
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
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/FormType.h"

class FormTypeFactory
            : public Object
         {

    private: static FormTypeFactory* instance() { static std::unique_ptr<FormTypeFactory> value(new FormTypeFactory()); return value.get(); }

    public: static FormTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FormTypeFactory::instance();
    
}


    public: const std::string UNK = "Unknown FormType";

    public: FormType* NULL_FORM_TYPE = new FormType(StringUtil::getInstance()->NULL_STRING);

    public: FormType* TEMP_HORIZONTAL_FORM = new FormType("TempHorizontal");

    public: FormType* HORIZONTAL_FORM = new FormType("Horizontal");

    public: FormType* VERTICAL_CENTER_FORM = new FormType("Vertical");

    public: FormType* getFormType(){

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


};

            

