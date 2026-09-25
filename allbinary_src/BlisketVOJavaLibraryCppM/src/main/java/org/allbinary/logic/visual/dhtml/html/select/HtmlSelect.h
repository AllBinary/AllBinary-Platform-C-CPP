
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

            #include <vector>
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/LineReader.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/HtmlTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlSelect: public HtmlTag {

    private: const std::string END = ">";

    private: const std::string STARTSELECT = "<SELECT ";

    private: const std::string ENDSELECT = "</SELECT>";

    private: const std::string SIZE = "SIZE=\"";

    private: const std::string NAME = "NAME=\"";

    private: const std::string STARTOPTION = "<OPTION";

    private: const std::string SELETED = "SELECTED";

    private: const std::string ENDOPTION = "</OPTION>";

    private: std::string before;

    private: std::string name;

    private: std::string after;

    private: std::string size;

    private: std::string selected;

    private: BasicArrayList options;

    private: std::string multiple = "multiple";

    private: bool isMultipleSelect = false;

public: HtmlSelect(std::string before, std::string size, std::string name, std::string after);

    public: void addOption(std::string key);

    public: void addOptions(std::string fileName);

    public: void setSelected(std::string selected);

    public: bool isMultiple();

    public: void setMultiple(bool value);

    private: std::string getOptions();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_SELECT_HTMLSELECT_H
