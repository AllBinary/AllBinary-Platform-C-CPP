
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_BASICWEBLISKETSESSION_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_BASICWEBLISKETSESSION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class HttpServletRequest;
class HttpSession;
class PageContext;
class StoreFrontData;
class UserData;
class PaymentGatewayData;
class BasicUserRole;
class BasicUserRoleData;
class BooleanFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class WeblisketSessionData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicWeblisketSession
            : public virtual Object
         {

    private: HttpSession* session;

    private: PageContext* pageContext;

public: BasicWeblisketSession(PageContext* pageContext);

    public: void setRole(BasicUserRole* aRole);

    public: BasicUserRole* getRole();

    public: void setPassword(std::string password);

    public: void setUserName(std::string userName);

    public: void setPaymentMethod(std::string value);

    public: void setAuthenticated();

    public: void setAttempts(int32_t value);

    public: void setTimeout(std::string value);

    public: void setStoreName(std::string value);

    public: std::string getWebAppPath();

    public: std::string getUserName();

    public: std::string getPassword();

    public: std::string getPaymentMethod();

    public: std::string getAuthentication();

    public: int32_t getAttempts();

    public: std::string getTimeout();

    public: std::string getStoreName();

    public: void setAuthenticated(bool value);

    public: void clear();

    public: int64_t getCreationTime();

    public: int64_t getLastAccessedTime();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_BASICWEBLISKETSESSION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_BASICWEBLISKETSESSION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_BASICWEBLISKETSESSION_H_COMPLETE
        #if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/http/HttpSession.h>)
#include <javax/servlet/http/HttpSession.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>
#endif
#if __has_include(<org/allbinary/business/user/role/BasicUserRole.h>)
#include <org/allbinary/business/user/role/BasicUserRole.h>
#endif
#if __has_include(<org/allbinary/business/user/role/BasicUserRoleData.h>)
#include <org/allbinary/business/user/role/BasicUserRoleData.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include("org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h")
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h"
#endif

        #endif
    
