
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

            #include <vector>
        
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

    public: static void main(std::vector<std::string> args);

    private: const LogUtil logUtil = LogUtil::getInstance();

    private: const J2SEUtil j2seUtil = J2SEUtil::getInstance();

    private: const std::string REPLACERS_ = "Replacers: ";

    private: const std::string ALL = "all";

    private: const std::string FOUND_KEY = "found key total: ";

    private: HashMap<any, any> hashMap;

public: Replace(std::string key, std::string value);

public: Replace(std::vector<std::string> keys, std::vector<std::string> values);

public: Replace(HashMap<any, any> hashMap);

    public: std::string all(std::string replace);

    public: std::string upTo(std::string replace, int32_t total);

    public: std::string line(std::string replace);

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_H
