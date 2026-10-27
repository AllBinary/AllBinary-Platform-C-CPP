
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/servlet/jsp/tagext/TagSupport.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TagStrings;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomTagSupport: public TagSupport {


            
    public: CustomTagSupport();
        
    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: TagStrings* tagStrings;

};

            


        #endif //TAGS_CUSTOMTAGSUPPORT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGS_CUSTOMTAGSUPPORT_H_COMPLETE)
        #define TAGS_CUSTOMTAGSUPPORT_H_COMPLETE
        #if __has_include(<javax/servlet/jsp/tagext/TagSupport.h>)
#include <javax/servlet/jsp/tagext/TagSupport.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("tags/TagStrings.h")
#include "tags/TagStrings.h"
#endif

        #endif
    
