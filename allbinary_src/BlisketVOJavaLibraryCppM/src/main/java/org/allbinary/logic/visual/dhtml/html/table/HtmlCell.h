
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLCELL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLCELL_H

#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlCell: public HtmlTag {
        

    private: const END: string = ">";

    private: const START: string = "<td ";

    private: const ENDTAG: string = "</td>";

    private: const HEIGHT: string = "height";

    private: const WIDTH: string = "width";

    private: height: string;

    private: width: string;

    private: before: string;

    private: body: string;

    private: after: string;

public constructor (string before, string width, string height, string after);

    public addText(string body);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLCELL_H
