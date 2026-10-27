
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListD;

class StringUtil;
class HtmlInput;
class HtmlTable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HtmlForm
            : public virtual Object
         {

    private: const std::string FORMBEGIN = "<form ";

    private: const std::string END = ">";

    private: const std::string FORMEND = "</form>";

    private: const std::string ACTION = "ACTION=\"";

    private: const std::string GET = "GET\"";

    private: const std::string POST = "POST\"";

    private: std::vector<std::string> METHODS;

    private: const std::string METHOD = "METHOD=\"";

    private: std::string method;

    private: std::string action;

    public: BasicArrayList* inputs;

public: HtmlForm(std::string action);

    public: void setPost();

    public: void setGet();

    public: void addInput(HtmlInput* htmlInput);

    public: void addTable(HtmlTable* htmlTable);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLFORM_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/dhtml/html/input/HtmlInput.h>)
#include <org/allbinary/logic/visual/dhtml/html/input/HtmlInput.h>
#endif
#if __has_include(<org/allbinary/logic/visual/dhtml/html/table/HtmlTable.h>)
#include <org/allbinary/logic/visual/dhtml/html/table/HtmlTable.h>
#endif

        #endif
    
