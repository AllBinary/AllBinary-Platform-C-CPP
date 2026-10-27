
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/HtmlForm.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/input/HtmlInput.h>

      
#include <org/allbinary/logic/visual/dhtml/html/table/HtmlTable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HtmlForm::HtmlForm(std::string action) : METHODS(
                                                        {
                                                            this->GET,this->POST
                                                        }){
this->action= action;
    
this->inputs= new BasicArrayListD();
    
}


    auto HtmlForm::setPost() -> void{
this->method= this->POST;
    
}


    auto HtmlForm::setGet() -> void{
this->method= this->GET;
    
}


    auto HtmlForm::addInput(HtmlInput* htmlInput) -> void{
this->inputs->add(htmlInput);
    
}


    auto HtmlForm::addTable(HtmlTable* htmlTable) -> void{
this->inputs->add(htmlTable);
    
}


    auto HtmlForm::toString() -> std::string{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil->EMPTY_STRING;;
    

    std::vector<Object*> inputArray = this->inputs->toArray();;
    

    int32_t inputSize = inputArray.size();;
    
result= this->FORMBEGIN;
    
result += this->METHOD;
    
result += this->method;
    
result += "\" ";
    
result += this->ACTION;
    
result += this->action;
    
result += "\" ";
    
result += this->END;
    




                        for (
    int32_t i = 0;i < inputSize; i++)
        {
result += inputArray[i]->toString();
    
result += " ";
    
}

result += this->FORMEND;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_CPP
