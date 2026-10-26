
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlInputData
            : public Object
         {

    private: static HtmlInputData instance() { return HtmlInputData(); }

    public: static HtmlInputData getInstance();

    public: const std::string TEXT = "text";

    public: const std::string RADIO = "radio";

    public: const std::string CHECKBOX = "checkbox";

    public: const std::string HIDDEN = "hidden";

    public: const std::string IMAGE = "image";

    public: const std::string PASSWORD = "password";

    public: const std::string RESET = "reset";

    public: const std::string SUBMIT = "submit";

    public: const std::vector<std::string> TYPES = 
                                                        {
                                                            this->TEXT,this->RADIO,this->CHECKBOX,this->HIDDEN,this->IMAGE,this->PASSWORD,this->RADIO,this->RESET,this->SUBMIT
                                                        };

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_H
