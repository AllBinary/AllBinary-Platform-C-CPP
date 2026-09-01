
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
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlCell: public HtmlTag {

    private: const std::string END = ">";

    private: const std::string START = "<td ";

    private: const std::string ENDTAG = "</td>";

    private: const std::string HEIGHT = "height";

    private: const std::string WIDTH = "width";

    private: std::string height;

    private: std::string width;

    private: std::string before;

    private: std::string body;

    private: std::string after;

public: HtmlCell(std::string before, std::string width, std::string height, std::string after){
this->before= before.toCharArray().slice(0, ).join('');
    
this->after= after.toCharArray().slice(0, ).join('');
    
this->height= height.toCharArray().slice(0, ).join('');
    
this->width= width.toCharArray().slice(0, ).join('');
    
addAttribute(this->HEIGHT, this->height);
    
addAttribute(this->WIDTH, this->width);
    
}


    public: void addText(std::string body){
this->body= body;
    
}


    public: std::string toString(){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil.EMPTY_STRING;;
    

    std::vector<Object*> attributeKeys = this->otherAttributes.keySet().();;
    

    int32_t attributeSize = attributeKeys.size();;
    
result= this->before;
    
result += this->START;
    
result += " ";
    




                        for (
    int32_t i = 0;i < attributeSize; i++)
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
    
result += this->body;
    
result += this->ENDTAG;
    
result += this->after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

