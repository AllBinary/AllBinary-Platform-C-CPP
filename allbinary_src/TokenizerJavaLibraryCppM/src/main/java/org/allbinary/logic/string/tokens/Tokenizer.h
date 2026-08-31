
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

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Tokenizer
            : public Object
         {
        

    private: sep: string;

    private: endSep: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (string sep);

    public setSep(string sep);

    public setEndSep(string endSep);

    public BasicArrayList getInsideSep(string string);

    public BasicArrayList getTokensFromString(string string, BasicArrayList tokenVector);

    public Hashtable<any, any> getTokens(BasicArrayList stringVector);

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H
