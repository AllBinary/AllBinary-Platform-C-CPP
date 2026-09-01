
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLEDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLEDATA_H

            #include <vector>
        
            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlTableData
            : public Object
         {

    private: static HtmlTableData instance() { return HtmlTableData(); }

    public: static HtmlTableData getInstance();

    public: const std::string LEFT = CommonStrings::getInstance().LEFT;

    public: const std::string RIGHT = CommonStrings::getInstance().RIGHT;

    public: const std::string NONE = "none";

    public: const std::string TOP = "top";

    public: const std::string BOTTOM = "bottom";

    public: const std::string TOPBOT = "topbot";

    public: const std::string SIDES = "sides";

    public: const std::string ALL = "all";

    public: const std::string BORDERED = "border";

    public: const std::string BASIC = "basic";

    public: const std::string ROWS = "rows";

    public: const std::vector<std::string> FRAMES = 
                                                        {
                                                            this->NONE,this->TOP,this->BOTTOM,this->TOPBOT,this->SIDES,this->ALL,this->BORDERED
                                                        };

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLEDATA_H
