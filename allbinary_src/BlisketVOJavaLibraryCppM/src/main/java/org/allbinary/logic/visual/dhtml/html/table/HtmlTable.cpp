
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLE_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/table/HtmlTable.h"
        

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

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/html/table/HtmlRow.h"


HtmlTable::HtmlTable(std::string before, std::string cellpadding, std::string cellspacing, std::string after){
this->before= before;
    
this->cellpadding= cellpadding;
    
this->cellspacing= cellspacing;
    
this->after= after;
    
this->htmlRowsVector= new BasicArrayListD();
    
addAttribute(this->BORDER, CommonPhoneStrings::getInstance()->ZERO);
    
addAttribute(this->CELLPADDING, this->cellpadding);
    
addAttribute(this->CELLSPACING, this->cellspacing);
    
addAttribute(this->STYLE, this->BORDERCOLLAPSE);
    
}


    auto HtmlTable::addRow(HtmlRow* htmlRow) -> void{

                        if(this->numberOfColumns < htmlRow->getNumberOfColumns())
                        this->numberOfColumns= htmlRow->getNumberOfColumns();
                                
this->htmlRowsVector->add(htmlRow);
    
}


    auto HtmlTable::toString() -> std::string{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil->EMPTY_STRING;;
    

    std::vector<Object*> attributeKeys = this->otherAttributes->keySet()->toArray();;
    
result= this->before;
    
result += this->START;
    
result += " ";
    




                        for (
    int32_t i = 0;i < attributeKeys.size(); i++)
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
    

    int32_t size = this->htmlRowsVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {
result += this->htmlRowsVector->get(i)->toString();
    
result += " ";
    
}

result += this->ENDTAG;
    
result += this->after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLE_CPP
