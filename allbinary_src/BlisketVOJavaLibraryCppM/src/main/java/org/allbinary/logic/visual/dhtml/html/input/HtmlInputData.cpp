
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/input/HtmlInputData.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HtmlInputData::HtmlInputData() : TYPES(
                                                        {
                                                            this->TEXT,this->RADIO,this->CHECKBOX,this->HIDDEN,this->IMAGE,this->PASSWORD,this->RADIO,this->RESET,this->SUBMIT
                                                        }) {
        }
        auto HtmlInputData::instance_owner() -> HtmlInputData* { static std::unique_ptr<HtmlInputData> value(new HtmlInputData()); return value.get(); }
HtmlInputData* HtmlInputData::instance = HtmlInputData::instance_owner();

    auto HtmlInputData::getInstance() -> HtmlInputData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HtmlInputData::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_CPP
