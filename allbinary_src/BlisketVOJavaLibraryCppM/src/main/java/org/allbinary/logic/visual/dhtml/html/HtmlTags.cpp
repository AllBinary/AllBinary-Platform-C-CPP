
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAGS_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/html/HtmlTags.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/html/HtmlTag.h"


HtmlTags::HtmlTags(){
this->htmlTagVector= new BasicArrayListD();
    
}


    auto HtmlTags::get(int32_t index) -> HtmlTag*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HtmlTag*>(this->htmlTagVector->get(index));
    
}


    auto HtmlTags::add(HtmlTag* htmlTag) -> void{
this->htmlTagVector->add(htmlTag);
    
}


    auto HtmlTags::size() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->htmlTagVector->size();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAGS_CPP
