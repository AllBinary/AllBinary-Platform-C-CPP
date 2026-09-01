
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

            #include <vector>
        
            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleFactory.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/UserEntityInterface.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class AuthenticationHelper: public TagHelper {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: WeblisketSession weblisketSession;

    private: std::string authenticated;

    private: std::string sessionUserName;

    private: UserRole role;

    private: std::string timeout;

    private: Integer attemptsInteger;

public: AuthenticationHelper(HashMap<any, any> hashMap, PageContext pageContext);

public: AuthenticationHelper(HashMap<any, any> hashMap, HttpServletRequest httpServletRequest);

                //@Throws(Exception.constructor)
            
    private: void getFormData();

                //@Throws(Exception.constructor)
            
    public: Integer invalidateSession();

    public: Boolean isSessionOld();

    private: Boolean isRarelyUsedSession();

    public: std::string validRole();

    public: std::string invalidRole();

                //@Throws(Exception.constructor)
            
    public: bool isAuthenticated();

    public: Boolean isAuthenticationSessionValid(Vector roles);

    public: void nextAttempt();

    public: Boolean processIfNewLogin(std::string userName, std::string password);

    public: Boolean processInvalidation();

    public: std::string outputSessionInfo();

    public: UserRole getRole();

};

            


        #endif //ADMIN_TAGHELPERS_AUTHENTICATIONHELPER_H
