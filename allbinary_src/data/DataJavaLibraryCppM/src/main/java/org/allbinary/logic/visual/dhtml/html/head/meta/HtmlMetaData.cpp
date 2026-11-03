
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETADATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETADATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto HtmlMetaData::instance_owner() -> HtmlMetaData* { static std::unique_ptr<HtmlMetaData> value(new HtmlMetaData()); return value.get(); }
HtmlMetaData* HtmlMetaData::instance = HtmlMetaData::instance_owner();

HtmlMetaData::HtmlMetaData(){
}


    auto HtmlMetaData::getInstance() -> HtmlMetaData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HtmlMetaData::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETADATA_CPP
