
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

            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/Vector.h>

      
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: attemptsInteger: Integer;

    private: weblisketSession: BasicWeblisketSession;

    private: request: HttpServletRequest;

    private: command: string;

    private: userName: string;

    private: password: string;

    private: newPassword: string;

    private: authenticated: string;

    private: sessionUserName: string;

    private: role: BasicUserRole;

    private: timeout: string;

    private: roles: Vector;

public constructor ();

    public setCommand(string command);

    public setUserName(string userName);

    public setPassword(string value);

    public setNewPassword(string value);

    public setRoles(Vector values);

    makeSessionValid(BasicUserRole storedRole, string userName);

    getFormData();

    public nextAttempt();

                //@Throws(LicensingException.constructor)
            
    bool changePassword();

    int32_t invalidateSession();

                //@Throws(LicensingException.constructor)
            
    bool isSessionOld();

    Boolean isRarelyUsedSession();

                //@Throws(LicensingException.constructor)
            
    bool isRoleValid();

                //@Throws(LicensingException.constructor)
            
    string validRole();

                //@Throws(LicensingException.constructor)
            
    string invalidRole();

                //@Throws(LicensingException.constructor)
            
    bool isAuthenticationSessionValid();

                //@Throws(LicensingException.constructor)
            
    bool processIfNewLogin();

                //@Throws(LicensingException.constructor)
            
    bool processInvalidation();

                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_FILEAUTHENTICATIONTAG_H
