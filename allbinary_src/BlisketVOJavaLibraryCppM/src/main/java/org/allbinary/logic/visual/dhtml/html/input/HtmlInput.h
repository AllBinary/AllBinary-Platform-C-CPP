
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUT_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUT_H

#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlInput: public HtmlTag {
        

    private: const END: string = ">";

    private: const STARTINPUT: string = "<INPUT ";

    private: const ENDINPUT: string = "</INPUT>";

    private: const TYPE: string = "TYPE=\"";

    private: const NAME: string = "NAME=\"";

    private: before: string;

    private: type: string;

    private: name: string;

    private: after: string;

public constructor (string before, string type, string name, string after);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUT_H
