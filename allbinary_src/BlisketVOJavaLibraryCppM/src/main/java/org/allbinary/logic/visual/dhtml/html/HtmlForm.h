
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_H

            #include "../../../../../../java/lang/Object.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/input/HtmlInput.h>

      
#include <org/allbinary/logic/visual/dhtml/html/table/HtmlTable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlForm
            : public Object
         {
        

    private: const FORMBEGIN: string = "<form ";

    private: const END: string = ">";

    private: const FORMEND: string = "</form>";

    private: const ACTION: string = "ACTION=\"";

    private: const GET: string = "GET\"";

    private: const POST: string = "POST\"";

    private: const METHODS: std::vector<string> = 
                                                        [
                                                            this.GET,this.POST
                                                        ];

    private: const METHOD: string = "METHOD=\"";

    private: method: string;

    private: action: string;

    inputs: Vector;

public constructor (string action);

    public setPost();

    public setGet();

    public addInput(HtmlInput htmlInput);

    public addTable(HtmlTable htmlTable);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_H
