
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

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlRow.h"

class HtmlTable: public HtmlTag {

    private: const std::string END = ">";

    private: const std::string START = "<table ";

    private: const std::string ENDTAG = "</table>";

    private: const std::string CLASS = "class";

    private: const std::string DIRECTION = "dir";

    private: const std::string ID = "id";

    private: const std::string LANG = "lang";

    private: const std::string UNITS = "units";

    private: const std::string BORDER = "border";

    private: const std::string CELLPADDING = "cellpadding";

    private: const std::string CELLSPACING = "cellspacing";

    private: const std::string COLS = "cols";

    private: const std::string FLOAT = "float";

    private: const std::string FRAME = "frame";

    private: const std::string RULES = "rules";

    private: const std::string WIDTH = "width";

    private: const std::string STYLE = "style";

    public: const std::string BORDERCOLLAPSE = "border-collapse: collapse";

    private: int32_t numberOfColumns = 0;

    private: std::string before;

    private: std::string border;

    private: std::string cellpadding;

    private: std::string cellspacing;

    private: std::string style;

    private: std::string name;

    private: std::string after;

    private: BasicArrayList htmlRowsVector;

public: HtmlTable(std::string before, std::string cellpadding, std::string cellspacing, std::string after){
this->before= before;
    
this->cellpadding= cellpadding;
    
this->cellspacing= cellspacing;
    
this->after= after;
    
this->htmlRowsVector= BasicArrayListD();
    
addAttribute(this->BORDER, CommonPhoneStrings::getInstance().ZERO);
    
addAttribute(this->CELLPADDING, this->cellpadding);
    
addAttribute(this->CELLSPACING, this->cellspacing);
    
addAttribute(this->STYLE, this->BORDERCOLLAPSE);
    
}


    public: void addRow(HtmlRow htmlRow){

                        if(this->numberOfColumns < htmlRow.getNumberOfColumns())
                        this->numberOfColumns= htmlRow.getNumberOfColumns();
                                
this->htmlRowsVector.add(htmlRow);
    
}


    public: std::string toString(){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil.EMPTY_STRING;;
    

    std::vector<Object*> attributeKeys = this->otherAttributes.keySet().();;
    
result= this->before;
    
result += this->START;
    
result += " ";
    




                        for (
    int32_t i = 0;i < attributeKeys.size(); i++)
        {

    std::string key = attributeKeys[i]! as string;;
    

    std::string value = otherAttributes.get(key) as string;;
    

                        if(true && value.compareTo(stringUtil.EMPTY_STRING) != 0)
                        
                                    {
                                    result += key;
    
result += "=\"";
    
result += value;
    
result += "\" ";
    

                                    }
                                
}

result += this->END;
    

    int32_t size = this->htmlRowsVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {
result += this->htmlRowsVector.get(i).toString();
    
result += " ";
    
}

result += this->ENDTAG;
    
result += this->after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

