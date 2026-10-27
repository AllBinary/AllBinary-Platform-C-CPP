
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
        



        #ifndef ADMIN_TAGHELPERS_TAGHELPER_H
        #define ADMIN_TAGHELPERS_TAGHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelperInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TagHelper
            : public virtual Object
        , public TagHelperInterface {


            
    public: TagHelper();
        
    /*protected*/ public: CommonStrings* commonStrings;

};

            


        #endif //ADMIN_TAGHELPERS_TAGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_TAGHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_TAGHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("admin/taghelpers/TagHelperInterface.h")
#include "admin/taghelpers/TagHelperInterface.h"
#endif

        #endif
    
