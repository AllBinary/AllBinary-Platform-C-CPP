
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_SELECT_HTMLSELECT_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_SELECT_HTMLSELECT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/select/HtmlSelect.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/LineReader.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HtmlSelect::HtmlSelect(std::string before, std::string size, std::string name, std::string after){
this->before= before;
    
this->size= size;
    
this->name= name;
    
this->after= after;
    
this->options= new BasicArrayListD();
    
}


    auto HtmlSelect::addOption(std::string key) -> void{
this->options->add(key);
    
}


    auto HtmlSelect::addOptions(std::string fileName) -> void{

        try {
            
    LineReader* lineReader = new LineReader(fileName);;
    

        while(lineReader->hasNext())
        {

    std::string option = lineReader->next();;
    
this->addOption(option);
    
}


                //: 
} catch(Exception& e) 
            {
this->addOption("Error");
    
}

}


    auto HtmlSelect::setSelected(std::string selected) -> void{
this->selected= selected;
    
}


    auto HtmlSelect::isMultiple() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isMultipleSelect;
    
}


    auto HtmlSelect::setMultiple(bool value) -> void{
this->isMultipleSelect= value;
    
}


    auto HtmlSelect::getOptions() -> std::string{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil->EMPTY_STRING;;
    

    std::vector<Object*> optionsArray = this->options->toArray();;
    

    int32_t optionsSize = optionsArray.size();;
    




                        for (
    int32_t i = 0;i < optionsSize; i++)
        {

    std::string value = optionsArray[i];;
    

                        if(true && value.compare(stringUtil->EMPTY_STRING) != 0)
                        
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


    auto HtmlSelect::toString() -> std::string{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string result = stringUtil->EMPTY_STRING;;
    

    std::vector<Object*> attributeKeys = this->otherAttributes->keySet()->();;
    

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


                        if(this->isMultiple())
                        result += JavaString::valueOf(JavaString::valueOf(" ") +JavaString::valueOf(this->multiple)) +JavaString::valueOf(" ");
                                
result += this->END;
    
result += this->getOptions();
    
result += this->ENDSELECT;
    
result += this->after;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_SELECT_HTMLSELECT_CPP
