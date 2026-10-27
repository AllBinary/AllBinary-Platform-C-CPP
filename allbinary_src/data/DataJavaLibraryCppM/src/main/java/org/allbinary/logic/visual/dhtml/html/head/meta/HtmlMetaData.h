
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETADATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETADATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HtmlMetaData
            : public virtual Object
         {

    private: static HtmlMetaData* instance_owner();
    private: static HtmlMetaData* instance;

    public: static HtmlMetaData* getInstance();

private: HtmlMetaData();

    public: std::string NAME = "HTMLMETA_NAME";

    public: std::string LABEL = "HTMLMETA_LABEL";

    public: std::string VALUE = "meta";

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETADATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETADATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HEAD_META_HTMLMETADATA_H_COMPLETE
        
        #endif
    
