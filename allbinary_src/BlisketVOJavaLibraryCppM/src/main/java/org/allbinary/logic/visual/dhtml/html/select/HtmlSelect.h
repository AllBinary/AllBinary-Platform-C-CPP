
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_SELECT_HTMLSELECT_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_SELECT_HTMLSELECT_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/io/LineReader.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlSelect: public HtmlTag {
        

    private: const END: string = ">";

    private: const STARTSELECT: string = "<SELECT ";

    private: const ENDSELECT: string = "</SELECT>";

    private: const SIZE: string = "SIZE=\"";

    private: const NAME: string = "NAME=\"";

    private: const STARTOPTION: string = "<OPTION";

    private: const SELETED: string = "SELECTED";

    private: const ENDOPTION: string = "</OPTION>";

    private: before: string;

    private: name: string;

    private: after: string;

    private: size: string;

    private: selected: string;

    private: options: Vector;

    private: multiple: string = "multiple";

    private: isMultipleSelect: bool = false;

public constructor (string before, string size, string name, string after);

    public addOption(string key);

    public addOptions(string fileName);

    public setSelected(string selected);

    public bool isMultiple();

    public setMultiple(bool value);

    string getOptions();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_SELECT_HTMLSELECT_H
