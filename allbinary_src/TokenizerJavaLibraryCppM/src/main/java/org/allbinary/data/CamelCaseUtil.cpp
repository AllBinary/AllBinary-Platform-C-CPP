
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Character.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CamelCaseUtil
            : public Object
         {

    private: static CamelCaseUtil* instance() { static std::unique_ptr<CamelCaseUtil> value(new CamelCaseUtil()); return value.get(); }

    public: static CamelCaseUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CamelCaseUtil::instance();
    
}


    private: CommonSeps* commonSeps = CommonSeps::getInstance();

                //@Throws(Exception.constructor)
            
    public: std::string getAsCamelCase(std::string string, StringMaker* stringBuilder){

                        if(false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    
stringBuilder->delete(0, stringBuilder->length());
    

    BasicArrayList* list = new BasicArrayListD();;
    

    Tokenizer* tokenizer = new Tokenizer(this->commonSeps->UNDERSCORE);;
    
tokenizer->getTokensFromString(string, list);
    

    int32_t size = list->size();;
    

    std::string word;;
    




                        for (
    int32_t i = 0;i < size; i++)
        {
word= list->get(i);
    
word= stringValidationUtil->isEmpty(word)
                        ?       
                                word
                                :

                            (new StringMaker())->appendchar(Character::toUpperCase(word[0]))->append(word.substring(1).toLowerCase())->toString();

    ;
    
stringBuilder->append(word);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuilder->toString();;
    
}


};

            

