
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_WEBLISKETSESSIONINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_WEBLISKETSESSIONINTERFACE_H

            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WeblisketSessionInterface {

    void clear();

    Integer getAttempts();

    std::string getAuthentication();

    int64_t getCreationTime();

    std::string getId();

    int64_t getLastAccessedTime();

                //@Throws(Exception.constructor)
            
    OrderInterface getOrder();

    std::string getPassword();

    std::string getPaymentMethod();

                //@Throws(Exception.constructor)
            
    UserRole getRole();

    std::string getStoreName();

    std::string getTimeout();

    std::string getUserName();

    std::string getWebAppPath();

    void removeBasket();

    void setAttempts(Integer value);

    void setAuthenticated();

    void setAuthenticated(bool value);

    void setPassword(std::string password);

    void setPaymentMethod(std::string value);

    void setRole(UserRole aRole);

    void setStoreName(std::string value);

    void setTimeout(std::string value);

    void setUserName(std::string userName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_WEBLISKETSESSIONINTERFACE_H
