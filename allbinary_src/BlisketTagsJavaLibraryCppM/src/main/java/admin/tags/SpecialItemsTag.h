
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
        



        #ifndef ADMIN_TAGS_SPECIALITEMSTAG_H
        #define ADMIN_TAGS_SPECIALITEMSTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class SpecialItemsHelperFactory;
class SpecialItemsRequestHelperFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpecialItemsTag: public TableTag {

public: SpecialItemsTag();

};

            


        #endif //ADMIN_TAGS_SPECIALITEMSTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_SPECIALITEMSTAG_H_COMPLETE)
        #define ADMIN_TAGS_SPECIALITEMSTAG_H_COMPLETE
        #if __has_include(<admin/taghelpers/SpecialItemsHelperFactory.h>)
#include <admin/taghelpers/SpecialItemsHelperFactory.h>
#endif
#if __has_include(<admin/taghelpers/SpecialItemsRequestHelperFactory.h>)
#include <admin/taghelpers/SpecialItemsRequestHelperFactory.h>
#endif
#if __has_include("admin/tags/TableTag.h")
#include "admin/tags/TableTag.h"
#endif

        #endif
    
