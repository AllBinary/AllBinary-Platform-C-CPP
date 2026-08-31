
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLE_H

#include <java/util/Vector.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlRow.h"

class HtmlTable: public HtmlTag {
        

    private: const END: string = ">";

    private: const START: string = "<table ";

    private: const ENDTAG: string = "</table>";

    private: const CLASS: string = "class";

    private: const DIRECTION: string = "dir";

    private: const ID: string = "id";

    private: const LANG: string = "lang";

    private: const UNITS: string = "units";

    private: const BORDER: string = "border";

    private: const CELLPADDING: string = "cellpadding";

    private: const CELLSPACING: string = "cellspacing";

    private: const COLS: string = "cols";

    private: const FLOAT: string = "float";

    private: const FRAME: string = "frame";

    private: const RULES: string = "rules";

    private: const WIDTH: string = "width";

    private: const STYLE: string = "style";

    public const BORDERCOLLAPSE: string = "border-collapse: collapse";

    private: numberOfColumns: int32_t = 0;

    private: before: string;

    private: border: string;

    private: cellpadding: string;

    private: cellspacing: string;

    private: style: string;

    private: name: string;

    private: after: string;

    private: htmlRowsVector: Vector;

public constructor (string before, string cellpadding, string cellspacing, string after);

    public addRow(HtmlRow htmlRow);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLE_H
