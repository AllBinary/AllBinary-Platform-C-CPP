
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommonSeps
            : public Object
         {

    private: static CommonSeps* instance() { static std::unique_ptr<CommonSeps> value(new CommonSeps()); return value.get(); }

    public: static CommonSeps* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonSeps::instance();
    
}


    public: const std::string NEW_LINE = "\n";

    public: const std::string SEMICOLON = ";";

    public: const std::string EQUALS = "=";

    public: const std::string SPACE = " ";

    public: const std::string COMMA = ",";

    public: const std::string COLON = ":";

    public: const std::string PERIOD = ".";

    public: const std::string UNDERSCORE = "_";

    public: const std::string COLON_SEP = (new StringMaker())->append(this->COLON)->append(this->SPACE)->toString();

    public: const std::string COMMA_SEP = (new StringMaker())->append(this->COMMA)->append(this->SPACE)->toString();

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

            

