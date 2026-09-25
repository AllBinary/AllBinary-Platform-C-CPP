
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
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/LineReader.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlSelect: public HtmlTag {

    private: const std::string END = ">";

    private: const std::string STARTSELECT = "<SELECT ";

    private: const std::string ENDSELECT = "</SELECT>";

    private: const std::string SIZE = "SIZE=\"";

    private: const std::string NAME = "NAME=\"";

    private: const std::string STARTOPTION = "<OPTION";

    private: const std::string SELETED = "SELECTED";

    private: const std::string ENDOPTION = "</OPTION>";

    private: std::string before;

    private: std::string name;

    private: std::string after;

    private: std::string size;

    private: std::string selected;

    private: BasicArrayList options;

    private: std::string multiple = "multiple";

    private: bool isMultipleSelect = false;

public: HtmlSelect(std::string before, std::string size, std::string name, std::string after){
this->before= before;
    
this->size= size;
    
this->name= name;
    
this->after= after;
    
this->options= BasicArrayListD();
    
}


    public: void addOption(std::string key){
this->options.add(key);
    
}


    public: void addOptions(std::string fileName){

        try {
            
    LineReader lineReader = LineReader(fileName);;
    

        while(lineReader.hasNext())
        {

    std::string option = lineReader.next();;
    
this->addOption(option);
    
}


                //: 
} catch(e) 
            {
this->addOption("Error");
    
}

}


    public: void setSelected(std::string selected){
this->selected= selected;
    
}


    public: bool isMultiple(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isMultipleSelect;
    
}


    public: void setMultiple(bool value){
this->isMultipleSelect= value;
    
}


    private: std::string getOptions(){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil.EMPTY_STRING;;
    

    std::vector<Object*> optionsArray = this->options.toArray();;
    

    int32_t optionsSize = optionsArray.size();;
    




                        for (
    int32_t i = 0;i < optionsSize; i++)
        {

    std::string value = optionsArray[i]! as string;;
    

                        if(true && value.compareTo(stringUtil.EMPTY_STRING) != 0)
                        
                                    {
                                    result += this->STARTOPTION;
    
result += this->END;
    
result += value;
    
result += this->ENDOPTION;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public: std::string toString(){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil.EMPTY_STRING;;
    

    std::vector<Object*> attributeKeys = this->otherAttributes.keySet().();;
    

    int32_t attributeSize = attributeKeys.size();;
    
result= this->before;
    
result += this->STARTSELECT;
    
result += this->NAME;
    
result += this->name;
    
result += "\" ";
    
result += this->SIZE;
    
result += this->size;
    
result += "\" ";
    




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


                        if(this->isMultiple())
                        result += " " +this->multiple +" ";
                                
result += this->END;
    
result += this->getOptions();
    
result += this->ENDSELECT;
    
result += this->after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


};

            

