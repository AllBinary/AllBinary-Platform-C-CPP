
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEVALUESDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEVALUESDATA_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlMetaAttributeValuesData
            : public Object
         {

    private: static HtmlMetaAttributeValuesData* instance() { static std::unique_ptr<HtmlMetaAttributeValuesData> value(new HtmlMetaAttributeValuesData()); return value.get(); }

    public: static HtmlMetaAttributeValuesData* getInstance();

private: HtmlMetaAttributeValuesData();

    public: std::string ABSTRACT = "abstract";

    public: std::string DESCRIPTION = "description";

    public: std::string KEYWORDS = "keywords";

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEVALUESDATA_H
