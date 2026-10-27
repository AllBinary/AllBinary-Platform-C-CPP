
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef TAGS_CUSTOMTAGSUPPORT_H
        #define TAGS_CUSTOMTAGSUPPORT_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/TagStrings.h"

class CustomTagSupport: public TagSupport {

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: TagStrings* tagStrings = TagStrings::getInstance();

};

            


        #endif //TAGS_CUSTOMTAGSUPPORT_H
