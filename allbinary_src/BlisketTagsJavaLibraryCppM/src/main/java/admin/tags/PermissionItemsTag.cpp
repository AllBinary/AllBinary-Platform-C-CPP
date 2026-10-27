
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
        



        #ifndef ADMIN_TAGS_PERMISSIONITEMSTAG_CPP
        #define ADMIN_TAGS_PERMISSIONITEMSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/PermissionItemsTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <admin/taghelpers/PermissionItemsHelperFactory.h>

      
#include <admin/taghelpers/PermissionItemsRequestHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"


PermissionItemsTag::PermissionItemsTag(){
this->setTagHelperFactory(new PermissionItemsHelperFactory());
    
this->setTagRequestHelperFactory(new PermissionItemsRequestHelperFactory());
    
}




        #endif //ADMIN_TAGS_PERMISSIONITEMSTAG_CPP
