
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_WEBLISKETSESSION_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_WEBLISKETSESSION_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpSession.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/Basket.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleB.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WeblisketSessionInterface.h"
#include "WeblisketSessionData.h"

class WeblisketSession
            : public Object
        : public WeblisketSessionInterface {
        

    private: session: HttpSession;

public constructor (HashMap<any, any> hashMap, PageContext pageContext);

public constructor (HashMap<any, any> hashMap, HttpServletRequest httpServletRequest);

    public string getId();

    public setPassword(string password);

    public setUserName(string userName);

    public setPaymentMethod(string value);

    public setAuthenticated();

    public setRole(UserRole aRole);

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

                //@Throws(Exception.constructor)
            
    public UserRole getRole();

                //@Throws(Exception.constructor)
            
    public OrderInterface getOrder();

    public setAuthenticated(bool value);

    public clear();

    public int64_t getCreationTime();

    public int64_t getLastAccessedTime();

    public removeBasket();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_WEBLISKETSESSION_H
