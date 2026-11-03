
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLCELL_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLCELL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/table/HtmlCell.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HtmlCell::HtmlCell(std::string before, std::string width, std::string height, std::string after){
this->before= std::string(before);
    
this->after= std::string(after);
    
this->height= std::string(height);
    
this->width= std::string(width);
    
addAttribute(this->HEIGHT, this->height);
    
addAttribute(this->WIDTH, this->width);
    
}


    auto HtmlCell::addText(std::string body) -> void{
this->body= body;
    
}


    auto HtmlCell::toString() -> std::string{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil->EMPTY_STRING;;
    

    std::vector<Object*> attributeKeys = this->otherAttributes->keySet()->toArray();;
    

    int32_t attributeSize = attributeKeys.size();;
    
result= this->before;
    
result += this->START;
    
result += " ";
    




                        for (
    int32_t i = 0;i < attributeSize; i++)
        {

    std::string key = JavaBoxes::unbox<std::string>(attributeKeys[i]);;
    

    std::string value = JavaBoxes::unbox<std::string>(otherAttributes.get(key));;
    

                        if(true && value.compare(stringUtil->EMPTY_STRING) != 0)
                        
                                    {
                                    result += key;
    
result += "=\"";
    
result += value;
    
result += "\" ";
    

                                    }
                                
}

result += this->END;
    
result += this->body;
    
result += this->ENDTAG;
    
result += this->after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLCELL_CPP
