
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlInput: public HtmlTag {

    private: const std::string END = ">";

    private: const std::string STARTINPUT = "<INPUT ";

    private: const std::string ENDINPUT = "</INPUT>";

    private: const std::string TYPE = "TYPE=\"";

    private: const std::string NAME = "NAME=\"";

    private: std::string before;

    private: std::string type;

    private: std::string name;

    private: std::string after;

public: HtmlInput(std::string before, std::string type, std::string name, std::string after){
this->before= before;
    
this->type= type;
    
this->name= name;
    
this->after= after;
    
}


    public: std::string toString(){

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil->EMPTY_STRING;;
    

    std::vector<Object*> attributeKeys = this->otherAttributes.keySet()->();;
    

    int32_t attributeSize = attributeKeys.size();;
    
result= this->before;
    
result += this->STARTINPUT;
    
result += this->TYPE;
    
result += this->type;
    
result += "\" ";
    
result += this->NAME;
    
result += this->name;
    
result += "\" ";
    




                        for (
    int32_t i = 0;i < attributeSize; i++)
        {

    std::string key = attributeKeys[i];;
    

    std::string value = otherAttributes.get(key);;
    

                        if(true && value.compare(stringUtil->EMPTY_STRING) != 0)
                        
                                    {
                                    result += key;
    
result += "=\"";
    
result += value;
    
result += "\" ";
    

                                    }
                                
}

result += this->END;
    
result += this->ENDINPUT;
    
result += this->after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

