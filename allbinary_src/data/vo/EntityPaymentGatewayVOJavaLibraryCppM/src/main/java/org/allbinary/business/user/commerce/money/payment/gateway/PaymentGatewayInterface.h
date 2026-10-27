
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentGatewayInterface: public TableMappingInterface {

    public: virtual std::string getEnable() = 0;

    public: virtual std::string getStoreName() = 0;

    public: virtual std::string getName() = 0;

    public: virtual std::string getPaymentMethod() = 0;

    public: virtual std::string getMode() = 0;

    public: virtual std::string getTestProtocol() = 0;

    public: virtual std::string getTestServer() = 0;

    public: virtual std::string getTestPort() = 0;

    public: virtual std::string getTestPath() = 0;

    public: virtual std::string getServerProtocol() = 0;

    public: virtual std::string getServer() = 0;

    public: virtual std::string getServerPort() = 0;

    public: virtual std::string getServerPath() = 0;

    public: virtual std::string getUserName() = 0;

    public: virtual std::string getPassword() = 0;

    public: virtual std::string getProxyProtocol() = 0;

    public: virtual std::string getProxyServer() = 0;

    public: virtual std::string getProxyPath() = 0;

    public: virtual std::string getProxyPort() = 0;

    public: virtual std::string getProxyUserName() = 0;

    public: virtual std::string getProxyPassword() = 0;

    public: virtual std::string getTimeout() = 0;

    public: virtual std::string getProxyTimeout() = 0;

    public: virtual std::string getSpecial1() = 0;

    public: virtual std::string getSpecial2() = 0;

    public: virtual std::string getSpecial3() = 0;

    public: virtual std::string getSpecial4() = 0;

    public: virtual std::string getSpecial5() = 0;

    public: virtual std::string getSpecial6() = 0;

    public: virtual std::string getSpecial7() = 0;

    public: virtual std::string getSpecial8() = 0;

    public: virtual std::string getSpecial9() = 0;

    public: virtual std::string getLastModified() = 0;

    public: virtual std::string getTimeEntered() = 0;

    public: virtual void setEnable(std::string value) = 0;

    public: virtual void setStoreName(std::string value) = 0;

    public: virtual void setName(std::string value) = 0;

    public: virtual void setPaymentMethod(std::string value) = 0;

    public: virtual void setMode(std::string value) = 0;

    public: virtual void setTestProtocol(std::string value) = 0;

    public: virtual void setTestServer(std::string value) = 0;

    public: virtual void setTestPort(std::string value) = 0;

    public: virtual void setTestPath(std::string value) = 0;

    public: virtual void setServerProtocol(std::string value) = 0;

    public: virtual void setServer(std::string value) = 0;

    public: virtual void setServerPort(std::string value) = 0;

    public: virtual void setServerPath(std::string value) = 0;

    public: virtual void setUserName(std::string value) = 0;

    public: virtual void setPassword(std::string value) = 0;

    public: virtual void setProxyProtocol(std::string value) = 0;

    public: virtual void setProxyServer(std::string value) = 0;

    public: virtual void setProxyPath(std::string value) = 0;

    public: virtual void setProxyPort(std::string value) = 0;

    public: virtual void setProxyUserName(std::string value) = 0;

    public: virtual void setProxyPassword(std::string value) = 0;

    public: virtual void setTimeout(std::string value) = 0;

    public: virtual void setProxyTimeout(std::string value) = 0;

    public: virtual void setSpecial1(std::string value) = 0;

    public: virtual void setSpecial2(std::string value) = 0;

    public: virtual void setSpecial3(std::string value) = 0;

    public: virtual void setSpecial4(std::string value) = 0;

    public: virtual void setSpecial5(std::string value) = 0;

    public: virtual void setSpecial6(std::string value) = 0;

    public: virtual void setSpecial7(std::string value) = 0;

    public: virtual void setSpecial8(std::string value) = 0;

    public: virtual void setSpecial9(std::string value) = 0;

    public: virtual void setLastModified(std::string value) = 0;

    public: virtual void setTimeEntered(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual HashMap<Object*, Object*>* toHashMap(bool isEncrypted) = 0;

    public: virtual BasicArrayList* toVector(bool isEncrypted) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACE_H
