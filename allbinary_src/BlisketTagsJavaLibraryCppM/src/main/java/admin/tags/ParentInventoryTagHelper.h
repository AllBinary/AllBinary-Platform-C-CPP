
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
        



        #ifndef ADMIN_TAGS_PARENTINVENTORYTAGHELPER_H
        #define ADMIN_TAGS_PARENTINVENTORYTAGHELPER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/tagext/Tag.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/HelperTag.h"

class ParentInventoryTagHelper
            : public Object
         {

    private: static ParentInventoryTagHelper* instance() { static std::unique_ptr<ParentInventoryTagHelper> value(new ParentInventoryTagHelper()); return value.get(); }

    public: static ParentInventoryTagHelper* getInstance();

                //@Throws(Exception.constructor)
            
    public: void isValid(Object* tagClass, Tag* parentTag);

};

            


        #endif //ADMIN_TAGS_PARENTINVENTORYTAGHELPER_H
