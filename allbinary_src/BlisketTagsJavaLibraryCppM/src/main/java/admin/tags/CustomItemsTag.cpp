
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
        



        #ifndef ADMIN_TAGS_CUSTOMITEMSTAG_CPP
        #define ADMIN_TAGS_CUSTOMITEMSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/CustomItemsTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <admin/taghelpers/CustomItemsHelperFactory.h>

      
#include <admin/taghelpers/CustomItemsRequestHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"


CustomItemsTag::CustomItemsTag(){
this->setTagHelperFactory(new CustomItemsHelperFactory());
    
this->setTagRequestHelperFactory(new CustomItemsRequestHelperFactory());
    
}




        #endif //ADMIN_TAGS_CUSTOMITEMSTAG_CPP
