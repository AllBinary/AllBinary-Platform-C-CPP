
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H
        #define ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Tokenizer
            : public Object
         {

    private: std::string sep;

    private: std::string endSep = StringUtil::getInstance().EMPTY_STRING;

public: Tokenizer(std::string sep);

    public: void setSep(std::string sep);

    public: void setEndSep(std::string endSep);

    public: BasicArrayList getInsideSep(std::string string);

    public: BasicArrayList getTokensFromString(std::string string, BasicArrayList tokenVector);

    public: Hashtable<any, any> getTokens(BasicArrayList stringVector);

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H
