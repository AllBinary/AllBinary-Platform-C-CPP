
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class TsUtil;
class StdUtil;
class StringUtil;
#include <org/allbinary/util/ABHashtable.h>
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Tokenizer
            : public virtual Object
         {

    private: std::string sep;

    private: std::string endSep;

public: Tokenizer(std::string sep);

    public: void setSep(std::string sep);

    public: void setEndSep(std::string endSep);

    public: BasicArrayList* getInsideSep(std::string string);

    public: BasicArrayList* getTokensFromString(std::string string, BasicArrayList* tokenVector);

    public: ABHashtable<Object*, Object*>* getTokens(BasicArrayList* stringVector);

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
