
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

            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <org/allbinary/business/init/InstallerInfo.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/business/user/role/BasicUserRoleFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/http/request/session/BasicWeblisketSession.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FileAuthenticationTag: public CustomTagSupport {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Integer attemptsInteger;

    private: BasicWeblisketSession weblisketSession;

    private: HttpServletRequest request;

    private: std::string command;

    private: std::string userName;

    private: std::string password;

    private: std::string newPassword;

    private: std::string authenticated;

    private: std::string sessionUserName;

    private: BasicUserRole role;

    private: std::string timeout;

    private: BasicArrayList roles;

public: FileAuthenticationTag();

    public: void setCommand(std::string command);

    public: void setUserName(std::string userName);

    public: void setPassword(std::string value);

    public: void setNewPassword(std::string value);

    public: void setRoles(BasicArrayList values);

    private: void makeSessionValid(BasicUserRole storedRole, std::string userName);

    private: void getFormData();

    public: void nextAttempt();

                //@Throws(LicensingException.constructor)
            
    private: bool changePassword();

    private: int32_t invalidateSession();

                //@Throws(LicensingException.constructor)
            
    private: bool isSessionOld();

    private: Boolean isRarelyUsedSession();

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
