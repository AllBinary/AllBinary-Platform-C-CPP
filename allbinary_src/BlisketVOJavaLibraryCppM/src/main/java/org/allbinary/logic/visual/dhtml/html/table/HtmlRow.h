
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLROW_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLROW_H

#include <java/util/Vector.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlCell.h"

class HtmlRow: public HtmlTag {
        

    private: const END: string = ">";

    private: const START: string = "<tr ";

    private: const ENDTAG: string = "</tr>";

    private: numberOfColumns: int32_t = 0;

    private: before: string;

    private: after: string;

    private: htmlCellsVector: Vector;

public constructor (string before, string after);

    public addCell(HtmlCell htmlCell);

    public int32_t getNumberOfColumns();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLROW_H
