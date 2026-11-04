
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
        



        #ifndef ADMIN_TAGS_FILEAUTHENTICATIONTAG_H
        #define ADMIN_TAGS_FILEAUTHENTICATIONTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/Calendar.h>
class BasicArrayList;

class HttpServletRequest;
class JspTagException;
class TagSupport;
class InstallerInfo;
class BasicUserRole;
class BasicUserRoleFactory;
class AbResponseHandler;
class BasicWeblisketSession;
class WeblisketSessionData;
class LogUtil;
class BooleanFactory;
class BooleanUtil;
class StringMaker;
class StringUtil;
class LicensingException;
#include <tags/CustomTagSupport.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileAuthenticationTag: public CustomTagSupport {

    /*protected*/ public: LogUtil* logUtil;

    private: int32_t attemptsInteger;

    private: BasicWeblisketSession* weblisketSession;

    private: HttpServletRequest* request;

    private: std::string command;

    private: std::string userName;

    private: std::string password;

    private: std::string newPassword;

    private: std::string authenticated;

    private: std::string sessionUserName;

    private: BasicUserRole* role;

    private: std::string timeout;

    private: BasicArrayList* roles;

public: FileAuthenticationTag();

    public: void setCommand(std::string command);

    public: void setUserName(std::string userName);

    public: void setPassword(std::string value);

    public: void setNewPassword(std::string value);

    public: void setRoles(BasicArrayList* values);

    private: void makeSessionValid(BasicUserRole* storedRole, std::string userName);

    private: void getFormData();

    public: void nextAttempt();

                //@Throws(LicensingException.constructor)
            
    private: bool changePassword();

    private: int32_t invalidateSession();

                //@Throws(LicensingException.constructor)
            
    private: bool isSessionOld();

    private: bool isRarelyUsedSession();

                //@Throws(LicensingException.constructor)
            
    private: bool isRoleValid();

                //@Throws(LicensingException.constructor)
            
    private: std::string validRole();

                //@Throws(LicensingException.constructor)
            
    private: std::string invalidRole();

                //@Throws(LicensingException.constructor)
            
    private: bool isAuthenticationSessionValid();

                //@Throws(LicensingException.constructor)
            
    private: bool processIfNewLogin();

                //@Throws(LicensingException.constructor)
            
    private: bool processInvalidation();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_FILEAUTHENTICATIONTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_FILEAUTHENTICATIONTAG_H_COMPLETE)
        #define ADMIN_TAGS_FILEAUTHENTICATIONTAG_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<javax/servlet/jsp/tagext/TagSupport.h>)
#include <javax/servlet/jsp/tagext/TagSupport.h>
#endif
#if __has_include(<org/allbinary/business/init/InstallerInfo.h>)
#include <org/allbinary/business/init/InstallerInfo.h>
#endif
#if __has_include(<org/allbinary/business/user/role/BasicUserRole.h>)
#include <org/allbinary/business/user/role/BasicUserRole.h>
#endif
#if __has_include(<org/allbinary/business/user/role/BasicUserRoleFactory.h>)
#include <org/allbinary/business/user/role/BasicUserRoleFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/BasicWeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/BasicWeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>
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
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<tags/CustomTagSupport.h>)
#include <tags/CustomTagSupport.h>
#endif

        #endif
    
