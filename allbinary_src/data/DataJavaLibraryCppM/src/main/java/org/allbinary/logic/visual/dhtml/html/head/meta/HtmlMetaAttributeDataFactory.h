
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEDATAFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEDATAFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeData.h"

class HtmlMetaAttributeDataFactory
            : public Object
         {

    private: static HtmlMetaAttributeDataFactory* instance() { static std::unique_ptr<HtmlMetaAttributeDataFactory> value(new HtmlMetaAttributeDataFactory()); return value.get(); }

    public: static HtmlMetaAttributeDataFactory* getInstance();

private: HtmlMetaAttributeDataFactory();

    public: HtmlMetaAttributeData* NAME = new HtmlMetaAttributeData(0, "HTMLMETA_ATTRIBUTE_NAME");

    public: HtmlMetaAttributeData* HTTP_EQUIV = new HtmlMetaAttributeData(1, "HTMLMETA_ATTRIBUTE_HTTPEQUIV");

    public: HtmlMetaAttributeData* CONTENT = new HtmlMetaAttributeData(2, "HTMLMETA_ATTRIBUTE_CONTENT");

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEDATAFACTORY_H
