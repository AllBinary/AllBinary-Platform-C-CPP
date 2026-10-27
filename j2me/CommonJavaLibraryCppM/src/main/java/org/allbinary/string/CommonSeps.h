
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
        



        #ifndef ORG_ALLBINARY_STRING_COMMONSEPS_H
        #define ORG_ALLBINARY_STRING_COMMONSEPS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class StringMaker;
class JsMethod;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommonSeps
            : public virtual Object
         {

    private: static CommonSeps* instance_owner();
    private: static CommonSeps* instance;

    public: static CommonSeps* getInstance();


            
    public: CommonSeps();
        
    public: const std::string NEW_LINE = "\n";

    public: const std::string SEMICOLON = ";";

    public: const std::string EQUALS = "=";

    public: const std::string SPACE = " ";

    public: const std::string COMMA = ",";

    public: const std::string COLON = ":";

    public: const std::string PERIOD = ".";

    public: const std::string UNDERSCORE = "_";

    public: const std::string COLON_SEP;

    public: const std::string COMMA_SEP;

    public: const std::string PARENTHESIS_OPEN = "(";

    public: const std::string PARENTHESIS_CLOSE = ")";

    public: const std::string BRACE_OPEN = "{";

    public: const std::string BRACE_CLOSE = "}";

    public: const std::string BRACKET_OPEN = "[";

    public: const std::string BRACKET_CLOSE = "]";

    public: const std::string DASH = "-";

    public: const std::string PERCENT = "%";

    public: const std::string AMPERSAND = "&";

    public: const std::string FORWARD_SLASH = "/";

    public: const std::string BACK_SLASH = "\\";

    public: const std::string QUESTION = "?";

    public: const std::string QUOTE = "\"";

    public: const std::string QUOTE_END = "\",";

    public: const std::string COMMENT = "//";

    public: const std::string INDENT = "    ";

};

            


        #endif //ORG_ALLBINARY_STRING_COMMONSEPS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_STRING_COMMONSEPS_H_COMPLETE)
        #define ORG_ALLBINARY_STRING_COMMONSEPS_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif

        #endif
    
