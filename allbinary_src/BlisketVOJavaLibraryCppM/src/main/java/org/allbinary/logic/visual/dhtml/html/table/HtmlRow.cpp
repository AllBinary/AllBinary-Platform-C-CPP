
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLROW_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLROW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/table/HtmlRow.h"
        

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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/html/table/HtmlCell.h"


HtmlRow::HtmlRow(std::string before, std::string after){
this->before= std::string(before);
    
this->after= std::string(after);
    
this->htmlCellsVector= new BasicArrayListD();
    
}


    auto HtmlRow::addCell(HtmlCell* htmlCell) -> void{
this->htmlCellsVector->add(htmlCell);
    
this->numberOfColumns++;
    
}


    auto HtmlRow::getNumberOfColumns() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->numberOfColumns;
    
}


    auto HtmlRow::toString() -> std::string{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil->EMPTY_STRING;;
    

    std::vector<Object*> attributeKeys = this->otherAttributes->keySet()->();;
    

    int32_t attributeSize = attributeKeys.size();;
    

    int32_t cellSize = this->htmlCellsVector->size();;
    
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
    




                        for (
    int32_t i = 0;i < cellSize; i++)
        {
result += this->htmlCellsVector->get(i)->toString();
    
result += " ";
    
}

result += this->ENDTAG;
    
result += this->after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLROW_CPP
