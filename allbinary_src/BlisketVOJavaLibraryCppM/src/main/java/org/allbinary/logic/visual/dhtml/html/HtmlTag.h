
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAG_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAG_H

            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlTag
            : public Object
         {

    protected: HashMap<Object*, Object*> otherAttributes;

public: HtmlTag();

    public: void addAttribute(std::string key, std::string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_HTMLTAG_H
