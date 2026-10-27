
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLEDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/table/HtmlTableData.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HtmlTableData::HtmlTableData() : LEFT(CommonStrings::getInstance()->LEFT), RIGHT(CommonStrings::getInstance()->RIGHT), FRAMES(
                                                        {
                                                            this->NONE,this->TOP,this->BOTTOM,this->TOPBOT,this->SIDES,this->ALL,this->BORDERED
                                                        }) {
        }
        auto HtmlTableData::instance_owner() -> HtmlTableData* { static std::unique_ptr<HtmlTableData> value(new HtmlTableData()); return value.get(); }
HtmlTableData* HtmlTableData::instance = HtmlTableData::instance_owner();

    auto HtmlTableData::getInstance() -> HtmlTableData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HtmlTableData::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_TABLE_HTMLTABLEDATA_CPP
