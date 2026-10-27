
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HtmlInputData
            : public virtual Object
         {

    private: static HtmlInputData* instance_owner();
    private: static HtmlInputData* instance;

    public: static HtmlInputData* getInstance();


            
    public: HtmlInputData();
        
    public: const std::string TEXT = "text";

    public: const std::string RADIO = "radio";

    public: const std::string CHECKBOX = "checkbox";

    public: const std::string HIDDEN = "hidden";

    public: const std::string IMAGE = "image";

    public: const std::string PASSWORD = "password";

    public: const std::string RESET = "reset";

    public: const std::string SUBMIT = "submit";

    public: std::vector<std::string> TYPES;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_H_COMPLETE
        
        #endif
    
