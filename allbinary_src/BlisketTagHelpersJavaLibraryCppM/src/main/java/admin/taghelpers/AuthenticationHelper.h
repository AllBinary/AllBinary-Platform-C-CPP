
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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
        #include "admin/taghelpers/TagHelper.h"

class AuthenticationHelper: public TagHelper {

    protected: LogUtil* logUtil = LogUtil::getInstance();

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
