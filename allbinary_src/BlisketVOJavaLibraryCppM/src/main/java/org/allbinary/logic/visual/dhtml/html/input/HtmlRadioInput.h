
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLRADIOINPUT_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLRADIOINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class BooleanFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/html/input/HtmlValueInput.h"
class HtmlInputData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HtmlRadioInput: public HtmlValueInput {

    private: const std::string CHECKED = "checked";

public: HtmlRadioInput(std::string before, std::string name, std::string value, std::string after);

    public: void setSelected();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLRADIOINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLRADIOINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLRADIOINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include("org/allbinary/logic/visual/dhtml/html/input/HtmlValueInput.h")
#include "org/allbinary/logic/visual/dhtml/html/input/HtmlValueInput.h"
#endif
#if __has_include("org/allbinary/logic/visual/dhtml/html/input/HtmlInputData.h")
#include "org/allbinary/logic/visual/dhtml/html/input/HtmlInputData.h"
#endif

        #endif
    
