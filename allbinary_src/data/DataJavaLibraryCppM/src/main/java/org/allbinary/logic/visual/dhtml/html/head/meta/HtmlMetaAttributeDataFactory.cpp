
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HtmlMetaAttributeData.h"

class HtmlMetaAttributeDataFactory
            : public Object
         {

    private: static HtmlMetaAttributeDataFactory instance() { return HtmlMetaAttributeDataFactory(); }

    public: static HtmlMetaAttributeDataFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HtmlMetaAttributeDataFactory::instance();
    
}


private: HtmlMetaAttributeDataFactory(){
}


    public: HtmlMetaAttributeData NAME = HtmlMetaAttributeData(0, "HTMLMETA_ATTRIBUTE_NAME");

    public: HtmlMetaAttributeData HTTP_EQUIV = HtmlMetaAttributeData(1, "HTMLMETA_ATTRIBUTE_HTTPEQUIV");

    public: HtmlMetaAttributeData CONTENT = HtmlMetaAttributeData(2, "HTMLMETA_ATTRIBUTE_CONTENT");

};

            

