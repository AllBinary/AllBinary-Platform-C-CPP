
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

            #include <vector>
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <admin/taghelpers/AuthenticationHelperFactory.h>

      
#include <admin/taghelpers/AuthenticationRequestHelperFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AuthenticationTag: public CustomTagSupport {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string command;

    private: std::string userName;

    private: std::string password;

    private: std::string newPassword;

    private: BasicArrayList roles;

    private: HashMap<Object*, Object*> propertiesHashMap;

public: AuthenticationTag();

    public: void setCommand(std::string command);

    public: void setUserName(std::string userName);

    public: void setPassword(std::string value);

    public: void setNewPassword(std::string value);

    public: void setRoles(BasicArrayList values);

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
