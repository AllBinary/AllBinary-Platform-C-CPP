
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
        



        #ifndef ORG_ALLBINARY_DATA_CAMELCASEUTIL_CPP
        #define ORG_ALLBINARY_DATA_CAMELCASEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/CamelCaseUtil.h"
        

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
        

CamelCaseUtil::CamelCaseUtil() : commonSeps(CommonSeps::getInstance()) {
        }
        auto CamelCaseUtil::instance_owner() -> CamelCaseUtil* { static std::unique_ptr<CamelCaseUtil> value(new CamelCaseUtil()); return value.get(); }
CamelCaseUtil* CamelCaseUtil::instance = CamelCaseUtil::instance_owner();

    auto CamelCaseUtil::getInstance() -> CamelCaseUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CamelCaseUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto CamelCaseUtil::getAsCamelCase(std::string string, StringMaker* stringBuilder) -> std::string{

                        if(false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    
stringBuilder->delete_(0, stringBuilder->length());
    

    BasicArrayList* list = new BasicArrayListD();;
    

    Tokenizer* tokenizer = new Tokenizer(this->commonSeps->UNDERSCORE);;
    
tokenizer->getTokensFromString(string, list);
    

    int32_t size = list->size();;
    

    std::string word;;
    




                        for (
    int32_t i = 0;i < size; i++)
        {
word= JavaBoxes::unbox<std::string>(list->get(i));
    
word= stringValidationUtil->isEmpty(word)
                        ?       
                                word
                                :

                            (new StringMaker())->appendchar(Character::toUpperCase(word[0]))->append(JavaString::toLowerCase(word.substring(1)))->toString();;
    
stringBuilder->append(word);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuilder->toString();;
    
}




        #endif //ORG_ALLBINARY_DATA_CAMELCASEUTIL_CPP
