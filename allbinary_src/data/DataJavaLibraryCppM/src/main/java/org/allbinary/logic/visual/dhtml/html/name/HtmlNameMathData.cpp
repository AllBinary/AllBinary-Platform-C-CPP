
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_NAME_HTMLNAMEMATHDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_NAME_HTMLNAMEMATHDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/name/HtmlNameMathData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto HtmlNameMathData::instance_owner() -> HtmlNameMathData* { static std::unique_ptr<HtmlNameMathData> value(new HtmlNameMathData()); return value.get(); }
HtmlNameMathData* HtmlNameMathData::instance = HtmlNameMathData::instance_owner();

    auto HtmlNameMathData::getInstance() -> HtmlNameMathData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HtmlNameMathData::instance;
    
}


HtmlNameMathData::HtmlNameMathData(){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_NAME_HTMLNAMEMATHDATA_CPP
