
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
        
            #include "../../../../../../java/lang/Object.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/input/HtmlInput.h>

      
#include <org/allbinary/logic/visual/dhtml/html/table/HtmlTable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlForm
            : public Object
         {

    private: const std::string FORMBEGIN = "<form ";

    private: const std::string END = ">";

    private: const std::string FORMEND = "</form>";

    private: const std::string ACTION = "ACTION=\"";

    private: const std::string GET = "GET\"";

    private: const std::string POST = "POST\"";

    private: const std::vector<std::string> METHODS = 
                                                        {
                                                            this->GET,this->POST
                                                        };

    private: const std::string METHOD = "METHOD=\"";

    private: std::string method;

    private: std::string action;

    Vector inputs;

public: HtmlForm(std::string action){
this->action= action;
    
this->inputs= Vector();
    
}


    public: void setPost(){
this->method= this->POST;
    
}


    public: void setGet(){
this->method= this->GET;
    
}


    public: void addInput(HtmlInput htmlInput){
this->inputs.add(htmlInput);
    
}


    public: void addTable(HtmlTable htmlTable){
this->inputs.add(htmlTable);
    
}


    public: std::string toString(){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil.EMPTY_STRING;;
    

    std::vector<Object*> inputArray = this->inputs.toArray();;
    

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
result += inputArray[i]!.toString();
    
result += " ";
    
}

result += this->FORMEND;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

