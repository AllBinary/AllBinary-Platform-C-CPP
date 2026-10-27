
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
        



        #ifndef ADMIN_TAGS_ADMINCONFIGURATIONTAG_CPP
        #define ADMIN_TAGS_ADMINCONFIGURATIONTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/AdminConfigurationTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <admin/taghelpers/AdminConfigurationHelperFactory.h>

      
#include <admin/taghelpers/AdminConfigurationRequestHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"


AdminConfigurationTag::AdminConfigurationTag(){
this->setTagHelperFactory(new AdminConfigurationHelperFactory());
    
this->setTagRequestHelperFactory(new AdminConfigurationRequestHelperFactory());
    
}




        #endif //ADMIN_TAGS_ADMINCONFIGURATIONTAG_CPP
