
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
        



#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlValueInput.h"
#include "HtmlInputData.h"

class HtmlRadioInput: public HtmlValueInput {

    private: const std::string CHECKED = "checked";

public: HtmlRadioInput(std::string before, std::string name, std::string value, std::string after) : HtmlValueInput(before, HtmlInputData::getInstance().RADIO, name, value, after){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void setSelected(){
super.addAttribute(this->CHECKED, BooleanFactory::getInstance().TRUE_STRING);
    
}


};

            

