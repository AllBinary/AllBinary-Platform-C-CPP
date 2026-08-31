
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

            #include "../../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlMetaAttributeData.h"

class HtmlMetaAttributeDataFactory
            : public Object
         {
        

    private: static const instance: HtmlMetaAttributeDataFactory = new HtmlMetaAttributeDataFactory();

    public static HtmlMetaAttributeDataFactory getInstance();

private constructor ();

    public NAME: HtmlMetaAttributeData = new HtmlMetaAttributeData(0, "HTMLMETA_ATTRIBUTE_NAME");

    public HTTP_EQUIV: HtmlMetaAttributeData = new HtmlMetaAttributeData(1, "HTMLMETA_ATTRIBUTE_HTTPEQUIV");

    public CONTENT: HtmlMetaAttributeData = new HtmlMetaAttributeData(2, "HTMLMETA_ATTRIBUTE_CONTENT");

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETAATTRIBUTEDATAFACTORY_H
