
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Tag;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class HelperTag;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ParentInventoryTagHelper
            : public virtual Object
         {

    private: static ParentInventoryTagHelper* instance_owner();
    private: static ParentInventoryTagHelper* instance;

    public: static ParentInventoryTagHelper* getInstance();


            
    public: ParentInventoryTagHelper();
        
                //@Throws(Exception.constructor)
            
    public: void isValid(Object* tagClass, Tag* parentTag);
    public: void isValid(const std::string& tagClass, Tag* parentTag) { return isValid(JavaString::box(tagClass), parentTag); }

};

            


        #endif //ADMIN_TAGS_PARENTINVENTORYTAGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_PARENTINVENTORYTAGHELPER_H_COMPLETE)
        #define ADMIN_TAGS_PARENTINVENTORYTAGHELPER_H_COMPLETE
        #if __has_include(<javax/servlet/jsp/tagext/Tag.h>)
#include <javax/servlet/jsp/tagext/Tag.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("admin/tags/HelperTag.h")
#include "admin/tags/HelperTag.h"
#endif

        #endif
    
