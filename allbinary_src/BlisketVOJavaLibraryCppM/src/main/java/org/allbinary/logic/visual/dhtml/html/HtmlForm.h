
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/html/input/HtmlInput.h>

      
#include <org/allbinary/logic/visual/dhtml/html/table/HtmlTable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlForm
            : public Object
         {

    private: const std::string FORMBEGIN = "<form ";

    private: const std::string END = ">";

    private: const std::string FORMEND = "</form>";

    private: const std::string ACTION = "ACTION=\"";

    private: const std::string GET = "GET\"";

    private: const std::string POST = "POST\"";

    private: const std::vector<std::string> METHODS = 
                                                        {
                                                            this->GET,this->POST
                                                        };

    private: const std::string METHOD = "METHOD=\"";

    private: std::string method;

    private: std::string action;

    BasicArrayList* inputs;

public: HtmlForm(std::string action);

    public: void setPost();

    public: void setGet();

    public: void addInput(HtmlInput* htmlInput);

    public: void addTable(HtmlTable* htmlTable);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_H
