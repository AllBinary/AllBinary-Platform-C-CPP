
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAGS_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListD;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class HtmlTag;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HtmlTags
            : public virtual Object
         {

    private: BasicArrayList* htmlTagVector;

public: HtmlTags();

    public: HtmlTag* get(int32_t index);

    public: void add(HtmlTag* htmlTag);

    public: int32_t size();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAGS_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAGS_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include("org/allbinary/logic/visual/dhtml/html/HtmlTag.h")
#include "org/allbinary/logic/visual/dhtml/html/HtmlTag.h"
#endif

        #endif
    
