
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLLENGTHINPUT_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLLENGTHINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/input/HtmlLengthInput.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/html/input/HtmlValueInput.h"


HtmlLengthInput::HtmlLengthInput(std::string before, std::string type, std::string name, std::string value, std::string after) : HtmlValueInput(before, type, name, value, after){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto HtmlLengthInput::setMaxLength(int32_t length) -> void{
this->length= length.toString();
    
addAttribute(this->MAXLENGTH, this->length);
    
}


    auto HtmlLengthInput::setSize(int32_t size) -> void{
this->size= size.toString();
    
addAttribute(this->MAXLENGTH, this->size);
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLLENGTHINPUT_CPP
