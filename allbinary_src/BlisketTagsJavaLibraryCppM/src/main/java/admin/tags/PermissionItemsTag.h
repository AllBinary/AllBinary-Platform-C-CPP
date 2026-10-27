
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
        



        #ifndef ADMIN_TAGS_PERMISSIONITEMSTAG_H
        #define ADMIN_TAGS_PERMISSIONITEMSTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class PermissionItemsHelperFactory;
class PermissionItemsRequestHelperFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PermissionItemsTag: public TableTag {

public: PermissionItemsTag();

};

            


        #endif //ADMIN_TAGS_PERMISSIONITEMSTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_PERMISSIONITEMSTAG_H_COMPLETE)
        #define ADMIN_TAGS_PERMISSIONITEMSTAG_H_COMPLETE
        #if __has_include(<admin/taghelpers/PermissionItemsHelperFactory.h>)
#include <admin/taghelpers/PermissionItemsHelperFactory.h>
#endif
#if __has_include(<admin/taghelpers/PermissionItemsRequestHelperFactory.h>)
#include <admin/taghelpers/PermissionItemsRequestHelperFactory.h>
#endif
#if __has_include("admin/tags/TableTag.h")
#include "admin/tags/TableTag.h"
#endif

        #endif
    
