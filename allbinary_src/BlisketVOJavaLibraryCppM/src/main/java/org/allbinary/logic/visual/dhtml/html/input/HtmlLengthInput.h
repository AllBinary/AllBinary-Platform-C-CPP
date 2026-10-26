
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLLENGTHINPUT_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLLENGTHINPUT_H

            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlValueInput.h"

class HtmlLengthInput: public HtmlValueInput {

    private: const std::string MAXLENGTH = "MAXLENGTH";

    private: const std::string SIZE = "SIZE";

    private: std::string length;

    private: std::string size;

public: HtmlLengthInput(std::string before, std::string type, std::string name, std::string value, std::string after);

    public: void setMaxLength(Integer length);

    public: void setSize(Integer size);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLLENGTHINPUT_H
