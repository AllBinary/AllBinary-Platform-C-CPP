
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_TOKENS_UNIQUETOKENS_CPP
        #define ORG_ALLBINARY_LOGIC_STRING_TOKENS_UNIQUETOKENS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/string/tokens/UniqueTokens.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/NumberFormatException.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashSet.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/string/tokens/Tokenizer.h"


UniqueTokens::UniqueTokens() : specialCharacters(new BasicArrayListD()){
this->specialCharacters->add("!");
    
this->specialCharacters->add("@");
    
this->specialCharacters->add(CommonPhoneStrings::getInstance()->POUND);
    
this->specialCharacters->add("$");
    
this->specialCharacters->add("%");
    
this->specialCharacters->add("^");
    
this->specialCharacters->add(CommonSeps::getInstance()->AMPERSAND);
    
this->specialCharacters->add(CommonPhoneStrings::getInstance()->STAR);
    
this->specialCharacters->add("(");
    
this->specialCharacters->add(")");
    
this->specialCharacters->add("-");
    
this->specialCharacters->add("_");
    
this->specialCharacters->add("+");
    
this->specialCharacters->add("=");
    
this->specialCharacters->add("\\");
    
this->specialCharacters->add("|");
    
this->specialCharacters->add(AbPathData::getInstance()->EXTENSION_SEP);
    
this->specialCharacters->add(",");
    
this->specialCharacters->add("<");
    
this->specialCharacters->add(">");
    
this->specialCharacters->add("?");
    
this->specialCharacters->add("/");
    
this->specialCharacters->add("~");
    
this->specialCharacters->add("`");
    
}


                //@Throws(Exception.constructor)
            
    auto UniqueTokens::getWhithoutDashesAndSkipNumberOnlyTokens(BasicArrayList* stringVector) -> HashSet*{

        try {
            
    HashSet* hashSet = new HashSet();;
    

    int32_t index = 0;;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

        while(index < stringVector->size())
        {

    std::string keywords = stringVector->get(index);;
    

    Tokenizer* tokenizer = new Tokenizer(commonSeps->COMMA);;
    

    BasicArrayList* keywordVector = tokenizer->getTokensFromString(keywords, new BasicArrayListD());;
    




                        for (
    int32_t forIndex = 0;forIndex < keywordVector->size(); forIndex++)
        {

    std::string cleanString = keywordVector->get(forIndex);;
    
cleanString= JavaString::trim(cleanString);
    

                        if(JavaString::indexOf(cleanString, '-') !=  -1)
                        cleanString= (new Replace("-", commonSeps->SPACE))->all(cleanString);
                                
hashSet->add(cleanString);
    

                        if(JavaString::indexOf(cleanString, ' ') !=  -1)
                        
                                    {
                                    
    Tokenizer* spaceTokenizer = new Tokenizer(commonSeps->SPACE);;
    

    BasicArrayList* subKeywordVector = spaceTokenizer->getTokensFromString(cleanString, new BasicArrayListD());;
    




                        for (
    int32_t spaceIndex = 0;spaceIndex < subKeywordVector->size(); spaceIndex++)
        {

    std::string subCleanString = subKeywordVector->get(spaceIndex);;
    

                        if(!isSpecialCharacter(subCleanString) && !numberOnly(subCleanString))
                        
                                    {
                                    hashSet->add(subCleanString);
    

                                    }
                                
}


                                    }
                                
}

index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashSet;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


    auto UniqueTokens::numberOnly(std::string subCleaningString) -> bool{

        try {
            Integer.parseInt(subCleaningString);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(NumberFormatException& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto UniqueTokens::isSpecialCharacter(std::string subCleaningString) -> bool{




                        for (
    int32_t index = 0;index < this->specialCharacters->size(); index++)
        {

                        if(subCleaningString.compare(this->specialCharacters->get(index)) == 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_LOGIC_STRING_TOKENS_UNIQUETOKENS_CPP
