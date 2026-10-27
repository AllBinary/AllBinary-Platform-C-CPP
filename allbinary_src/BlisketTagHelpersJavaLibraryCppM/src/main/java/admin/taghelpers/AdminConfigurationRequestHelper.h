
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
        



        #ifndef ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class PageContext;
class AdminConfiguration;
class AdminConfigurationInterface;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdminConfigurationRequestHelper: public ModifyTable {

    /*protected*/ public: LogUtil* logUtil;

    private: HttpServletRequest* request;

public: AdminConfigurationRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: std::string insert();

    public: std::string delete_();

    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h>)
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h>)
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("admin/taghelpers/ModifyTable.h")
#include "admin/taghelpers/ModifyTable.h"
#endif

        #endif
    
