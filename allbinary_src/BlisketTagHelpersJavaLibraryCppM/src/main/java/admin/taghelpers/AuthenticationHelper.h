
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
        



        #ifndef ADMIN_TAGHELPERS_AUTHENTICATIONHELPER_H
        #define ADMIN_TAGHELPERS_AUTHENTICATIONHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/Calendar.h>
#include <java/util/HashMap.h>
class BasicArrayList;

class HttpServletRequest;
class PageContext;
class TagSupport;
class UserInterface;
class BasicUserRole;
class UserRole;
class UserRoleFactory;
class UserEntityFactory;
class UserEntityInterface;
class GLOBALS2;
class WeblisketSession;
class LogUtil;
class BooleanFactory;
class BooleanUtil;
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AuthenticationHelper: public TagHelper {

    /*protected*/ public: LogUtil* logUtil;

    private: WeblisketSession* weblisketSession;

    private: std::string authenticated;

    private: std::string sessionUserName;

    private: UserRole* role;

    private: std::string timeout;

    private: int32_t attemptsInteger;

public: AuthenticationHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

public: AuthenticationHelper(HashMap<Object*, Object*>* hashMap, HttpServletRequest* httpServletRequest);

                //@Throws(Exception.constructor)
            
    private: void getFormData();

                //@Throws(Exception.constructor)
            
    public: int32_t invalidateSession();

    public: bool isSessionOld();

    private: bool isRarelyUsedSession();

    public: std::string validRole();

    public: std::string invalidRole();

                //@Throws(Exception.constructor)
            
    public: bool isAuthenticated();

    public: bool isAuthenticationSessionValid(BasicArrayList* roles);

    public: void nextAttempt();

    public: bool processIfNewLogin(std::string userName, std::string password);

    public: bool processInvalidation();

    public: std::string outputSessionInfo();

    public: UserRole* getRole();

};

            


        #endif //ADMIN_TAGHELPERS_AUTHENTICATIONHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_AUTHENTICATIONHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_AUTHENTICATIONHELPER_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<javax/servlet/jsp/tagext/TagSupport.h>)
#include <javax/servlet/jsp/tagext/TagSupport.h>
#endif
#if __has_include(<org/allbinary/business/user/UserInterface.h>)
#include <org/allbinary/business/user/UserInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/role/BasicUserRole.h>)
#include <org/allbinary/business/user/role/BasicUserRole.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRole.h>)
#include <org/allbinary/business/user/role/UserRole.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRoleFactory.h>)
#include <org/allbinary/business/user/role/UserRoleFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/UserEntityFactory.h>)
#include <org/allbinary/data/tables/user/UserEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/UserEntityInterface.h>)
#include <org/allbinary/data/tables/user/UserEntityInterface.h>
#endif
#if __has_include(<org/allbinary/globals/GLOBALS2.h>)
#include <org/allbinary/globals/GLOBALS2.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanUtil.h>)
#include <org/allbinary/logic/java/bool/BooleanUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("admin/taghelpers/TagHelper.h")
#include "admin/taghelpers/TagHelper.h"
#endif

        #endif
    
