
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
        



            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommonSeps
            : public Object
         {
        

    private: static const instance: CommonSeps = new CommonSeps();

    public static CommonSeps getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonSeps.instance;
    
}


    public const NEW_LINE: string = "\n";

    public const SEMICOLON: string = ";";

    public const EQUALS: string = "=";

    public const SPACE: string = " ";

    public const COMMA: string = ",";

    public const COLON: string = ":";

    public const PERIOD: string = ".";

    public const UNDERSCORE: string = "_";

    public const COLON_SEP: string = new StringMaker().append(this.COLON)!.append(this.SPACE)!.toString()!;

    public const COMMA_SEP: string = new StringMaker().append(this.COMMA)!.append(this.SPACE)!.toString()!;

    public const PARENTHESIS_OPEN: string = "(";

    public const PARENTHESIS_CLOSE: string = ")";

    public const BRACE_OPEN: string = "{";

    public const BRACE_CLOSE: string = "}";

    public const BRACKET_OPEN: string = "[";

    public const BRACKET_CLOSE: string = "]";

    public const DASH: string = "-";

    public const PERCENT: string = "%";

    public const AMPERSAND: string = "&";

    public const FORWARD_SLASH: string = "/";

    public const BACK_SLASH: string = "\\";

    public const QUESTION: string = "?";

    public const QUOTE: string = "\"";

    public const QUOTE_END: string = "\",";

    public const COMMENT: string = "//";

    public const INDENT: string = "    ";

};

            

