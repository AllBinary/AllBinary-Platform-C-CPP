
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
        



            #include <vector>
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlCell.h"

class HtmlRow: public HtmlTag {

    private: const std::string END = ">";

    private: const std::string START = "<tr ";

    private: const std::string ENDTAG = "</tr>";

    private: int32_t numberOfColumns = 0;

    private: std::string before;

    private: std::string after;

    private: BasicArrayList htmlCellsVector;

public: HtmlRow(std::string before, std::string after){
this->before= std::string(before);
    
this->after= std::string(after);
    
this->htmlCellsVector= BasicArrayListD();
    
}


    public: void addCell(HtmlCell htmlCell){
this->htmlCellsVector.add(htmlCell);
    
this->numberOfColumns++;
    
}


    public: int32_t getNumberOfColumns(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->numberOfColumns;
    
}


    public: std::string toString(){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil.EMPTY_STRING;;
    

    std::vector<Object*> attributeKeys = this->otherAttributes.keySet().();;
    

    int32_t attributeSize = attributeKeys.size();;
    

    int32_t cellSize = this->htmlCellsVector.size();;
    
result= this->before;
    
result += this->START;
    
result += " ";
    




                        for (
    int32_t i = 0;i < attributeSize; i++)
        {

    std::string key = attributeKeys[i];;
    

    std::string value = otherAttributes.get(key);;
    

                        if(true && value.compare(stringUtil.EMPTY_STRING) != 0)
                        
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
result += this->htmlCellsVector.get(i).toString();
    
result += " ";
    
}

result += this->ENDTAG;
    
result += this->after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

