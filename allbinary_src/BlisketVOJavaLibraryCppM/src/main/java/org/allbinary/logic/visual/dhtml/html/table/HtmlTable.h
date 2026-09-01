
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

            #include <vector>
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlRow.h"

class HtmlTable: public HtmlTag {

    private: const std::string END = ">";

    private: const std::string START = "<table ";

    private: const std::string ENDTAG = "</table>";

    private: const std::string CLASS = "class";

    private: const std::string DIRECTION = "dir";

    private: const std::string ID = "id";

    private: const std::string LANG = "lang";

    private: const std::string UNITS = "units";

    private: const std::string BORDER = "border";

    private: const std::string CELLPADDING = "cellpadding";

    private: const std::string CELLSPACING = "cellspacing";

    private: const std::string COLS = "cols";

    private: const std::string FLOAT = "float";

    private: const std::string FRAME = "frame";

    private: const std::string RULES = "rules";

    private: const std::string WIDTH = "width";

    private: const std::string STYLE = "style";

    public: const std::string BORDERCOLLAPSE = "border-collapse: collapse";

    private: int32_t numberOfColumns = 0;

    private: std::string before;

    private: std::string border;

    private: std::string cellpadding;

    private: std::string cellspacing;

    private: std::string style;

    private: std::string name;

    private: std::string after;

    private: Vector htmlRowsVector;

public: HtmlTable(std::string before, std::string cellpadding, std::string cellspacing, std::string after);

    public: void addRow(HtmlRow htmlRow);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLE_H
