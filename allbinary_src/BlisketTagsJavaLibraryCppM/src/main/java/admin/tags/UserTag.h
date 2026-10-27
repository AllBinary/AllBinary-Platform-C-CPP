
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
        



        #ifndef ADMIN_TAGS_USERTAG_H
        #define ADMIN_TAGS_USERTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class JspTagException;
class UserHelperFactory;
class EntryData;
class UserRoleData;
class AbResponseHandler;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserTag: public TableTag {

    private: std::string role;

    private: std::string enable;

public: UserTag();

    public: void setRole(std::string value);

    public: void setEnable(std::string value);

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_USERTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_USERTAG_H_COMPLETE)
        #define ADMIN_TAGS_USERTAG_H_COMPLETE
        #if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<admin/taghelpers/UserHelperFactory.h>)
#include <admin/taghelpers/UserHelperFactory.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRoleData.h>)
#include <org/allbinary/business/user/role/UserRoleData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include("admin/tags/TableTag.h")
#include "admin/tags/TableTag.h"
#endif

        #endif
    
