
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
        



        #ifndef ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_H
        #define ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

class BasicUserRole;
class UserRole;
class URLGLOBALS;
class HttpFilePermissions;
class HttpRequestUtil;
class LogUtil;
class AbPath;
class StringUtil;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AuthenticationHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AuthenticationHelperUtil
            : public virtual Object
         {

    private: static AuthenticationHelperUtil* instance_owner();
    private: static AuthenticationHelperUtil* instance;

    public: static AuthenticationHelperUtil* getInstance();


            
    public: AuthenticationHelperUtil();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(Exception.constructor)
            
    public: bool isAuthorized(AuthenticationHelper* authenticationHelper, std::string filePath);

};

            


        #endif //ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_H_COMPLETE)
        #define ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/user/role/BasicUserRole.h>)
#include <org/allbinary/business/user/role/BasicUserRole.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRole.h>)
#include <org/allbinary/business/user/role/UserRole.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/file/upload/HttpFilePermissions.h>)
#include <org/allbinary/logic/communication/http/file/upload/HttpFilePermissions.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/HttpRequestUtil.h>)
#include <org/allbinary/logic/communication/http/request/HttpRequestUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include("admin/taghelpers/AuthenticationHelper.h")
#include "admin/taghelpers/AuthenticationHelper.h"
#endif

        #endif
    
