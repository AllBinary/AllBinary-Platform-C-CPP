
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/util/HashMap.h>

      
#include <admin/taghelpers/BasicGroupItemsHelperFactory.h>

      
#include <admin/taghelpers/BasicGroupItemsRequestHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"

class BasicGroupItemsTag: public TableTag {

    private: HashMap<Object*, Object*>* propertiesHashMap;

public: BasicGroupItemsTag(){
this->setTagHelperFactory(new BasicGroupItemsHelperFactory());
    
this->setTagRequestHelperFactory(new BasicGroupItemsRequestHelperFactory());
    
}


};

            

