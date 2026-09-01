
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLVALUEINPUT_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLVALUEINPUT_H

#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlInput.h"

class HtmlValueInput: public HtmlInput {

    private: std::string value;

    private: const std::string VALUE = "VALUE";

public: HtmlValueInput(std::string before, std::string type, std::string name, std::string value, std::string after);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLVALUEINPUT_H
