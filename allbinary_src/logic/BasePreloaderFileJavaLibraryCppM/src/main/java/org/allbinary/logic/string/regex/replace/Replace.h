
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
class J2SEUtil;
class AppUrlGlobals;
class URLGLOBALS;
class StdUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class LogConfigTypes;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Replace
            : public virtual Object
         {

    public: static void main(std::vector<std::string> args);

    private: LogUtil* logUtil;

    private: J2SEUtil* j2seUtil;

    private: const std::string REPLACERS_ = "Replacers: ";

    private: const std::string ALL = "all";

    private: const std::string FOUND_KEY = "found key total: ";

    private: HashMap<Object*, Object*>* hashMap;

public: Replace(std::string key, std::string value);

public: Replace(std::vector<std::string> keys, std::vector<std::string> values);

public: Replace(HashMap<Object*, Object*>* hashMap);

    public: std::string all(std::string replace);

    public: std::string upTo(std::string replace, int32_t total);

    public: std::string line(std::string replace);

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/J2SEUtil.h>)
#include <org/allbinary/J2SEUtil.h>
#endif
#if __has_include(<org/allbinary/globals/AppUrlGlobals.h>)
#include <org/allbinary/globals/AppUrlGlobals.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif

        #endif
    
