
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_TOKENS_UNIQUETOKENS_H
        #define ORG_ALLBINARY_LOGIC_STRING_TOKENS_UNIQUETOKENS_H

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

class UniqueTokens
            : public Object
         {

    private: BasicArrayList* specialCharacters = new BasicArrayListD();

public: UniqueTokens();

                //@Throws(Exception.constructor)
            
    public: HashSet* getWhithoutDashesAndSkipNumberOnlyTokens(BasicArrayList* stringVector);

    private: bool numberOnly(std::string subCleaningString);

    private: bool isSpecialCharacter(std::string subCleaningString);

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_TOKENS_UNIQUETOKENS_H
