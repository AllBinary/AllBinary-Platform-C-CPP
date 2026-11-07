
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
        



        #ifndef ADMIN_TAGS_PARENTINVENTORYTAGHELPER_CPP
        #define ADMIN_TAGS_PARENTINVENTORYTAGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/ParentInventoryTagHelper.h"
        

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


ParentInventoryTagHelper::ParentInventoryTagHelper() {
        }
        auto ParentInventoryTagHelper::instance_owner() -> ParentInventoryTagHelper* { static std::unique_ptr<ParentInventoryTagHelper> value(new ParentInventoryTagHelper()); return value.get(); }
ParentInventoryTagHelper* ParentInventoryTagHelper::instance = ParentInventoryTagHelper::instance_owner();

    auto ParentInventoryTagHelper::getInstance() -> ParentInventoryTagHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ParentInventoryTagHelper::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto ParentInventoryTagHelper::isValid(Object* tagClass, Tag* parentTag) -> void{

                        if(parentTag == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Must have parent tag.");
                    

                                    }
                                
                             else 
                        if(!((dynamic_cast<const HelperTag*>(parentTag) != nullptr)))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Must have at least a ");
    
stringBuffer->append("tags.HelperTag");
    
stringBuffer->append(" as parent");
    
stringBuffer->append("and not: ");
    
stringBuffer->append(parentTag->getClass()->getName());
    



                            throw Exception(JavaString::valueOf(stringBuffer));
                    

                                    }
                                
}




        #endif //ADMIN_TAGS_PARENTINVENTORYTAGHELPER_CPP
