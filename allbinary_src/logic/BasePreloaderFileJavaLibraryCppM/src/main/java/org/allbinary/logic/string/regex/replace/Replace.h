
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_H
        #define ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/System.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/J2SEUtil.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Replace
            : public Object
         {
        

    public static main(std::vector<string> args);

    private: const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const j2seUtil: J2SEUtil = J2SEUtil.getInstance()!;

    private: const REPLACERS_: string = "Replacers: ";

    private: const ALL: string = "all";

    private: const FOUND_KEY: string = "found key total: ";

    private: const hashMap: HashMap<any, any>;

public constructor (string key, string value);

public constructor (std::vector<string> keys, std::vector<string> values);

public constructor (HashMap<any, any> hashMap);

    public string all(string replace);

    public string upTo(string replace, int32_t total);

    public string line(string replace);

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_H
