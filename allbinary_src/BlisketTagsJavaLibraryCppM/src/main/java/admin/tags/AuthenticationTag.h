
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
        



        #ifndef ADMIN_TAGS_AUTHENTICATIONTAG_H
        #define ADMIN_TAGS_AUTHENTICATIONTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
class BasicArrayList;

class HttpServletRequest;
class JspTagException;
class TagSupport;
class AuthenticationHelperFactory;
class AuthenticationRequestHelperFactory;
class StdUtil;
class AbResponseHandler;
class WeblisketSessionData;
class LogUtil;
class StringMaker;
class StringUtil;
class LicensingException;
#include <tags/CustomTagSupport.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AuthenticationTag: public CustomTagSupport {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string command;

    private: std::string userName;

    private: std::string password;

    private: std::string newPassword_;

    private: BasicArrayList* roles;

    private: HashMap<Object*, Object*>* propertiesHashMap;

public: AuthenticationTag();

    public: void setCommand(std::string command);

    public: void setUserName(std::string userName);

    public: void setPassword(std::string value);

    public: void setNewPassword(std::string value);

    public: void setRoles(BasicArrayList* values);

                //@Throws(LicensingException.constructor)
            
    private: bool changePassword();

                //@Throws(LicensingException.constructor)
            
    private: bool newPassword();

                //@Throws(LicensingException.constructor)
            
    private: int32_t invalidateSession();

                //@Throws(LicensingException.constructor)
            
    private: bool isSessionOld();

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

            


        #endif //ADMIN_TAGS_AUTHENTICATIONTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_AUTHENTICATIONTAG_H_COMPLETE)
        #define ADMIN_TAGS_AUTHENTICATIONTAG_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
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
#if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<javax/servlet/jsp/tagext/TagSupport.h>)
#include <javax/servlet/jsp/tagext/TagSupport.h>
#endif
#if __has_include(<admin/taghelpers/AuthenticationHelperFactory.h>)
#include <admin/taghelpers/AuthenticationHelperFactory.h>
#endif
#if __has_include(<admin/taghelpers/AuthenticationRequestHelperFactory.h>)
#include <admin/taghelpers/AuthenticationRequestHelperFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
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
    
