
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpSession.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/business/user/role/BasicUserRoleData.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WeblisketSessionData.h"

class BasicWeblisketSession
            : public Object
         {
        

    private: session: HttpSession;

    private: pageContext: PageContext;

public constructor (PageContext pageContext);

    public setRole(BasicUserRole aRole);

    public BasicUserRole getRole();

    public setPassword(string password);

    public setUserName(string userName);

    public setPaymentMethod(string value);

    public setAuthenticated();

    public setAttempts(Integer value);

    public setTimeout(string value);

    public setStoreName(string value);

    public string getWebAppPath();

    public string getUserName();

    public string getPassword();

    public string getPaymentMethod();

    public string getAuthentication();

    public Integer getAttempts();

    public string getTimeout();

    public string getStoreName();

    public setAuthenticated(bool value);

    public clear();

    public int64_t getCreationTime();

    public int64_t getLastAccessedTime();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_BASICWEBLISKETSESSION_H
