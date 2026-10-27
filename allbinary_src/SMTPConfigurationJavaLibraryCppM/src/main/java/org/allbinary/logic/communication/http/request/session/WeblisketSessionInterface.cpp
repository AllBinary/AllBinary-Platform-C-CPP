
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WeblisketSessionInterface {

    public: virtual void clear() = 0;

    public: virtual int32_t getAttempts() = 0;

    public: virtual std::string getAuthentication() = 0;

    public: virtual int64_t getCreationTime() = 0;

    public: virtual std::string getId() = 0;

    public: virtual int64_t getLastAccessedTime() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual OrderInterface* getOrder() = 0;

    public: virtual std::string getPassword() = 0;

    public: virtual std::string getPaymentMethod() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual UserRole* getRole() = 0;

    public: virtual std::string getStoreName() = 0;

    public: virtual std::string getTimeout() = 0;

    public: virtual std::string getUserName() = 0;

    public: virtual std::string getWebAppPath() = 0;

    public: virtual void removeBasket() = 0;

    public: virtual void setAttempts(int32_t value) = 0;

    public: virtual void setAuthenticated() = 0;

    public: virtual void setAuthenticated(bool value) = 0;

    public: virtual void setPassword(std::string password) = 0;

    public: virtual void setPaymentMethod(std::string value) = 0;

    public: virtual void setRole(UserRole* aRole) = 0;

    public: virtual void setStoreName(std::string value) = 0;

    public: virtual void setTimeout(std::string value) = 0;

    public: virtual void setUserName(std::string userName) = 0;

};

            

