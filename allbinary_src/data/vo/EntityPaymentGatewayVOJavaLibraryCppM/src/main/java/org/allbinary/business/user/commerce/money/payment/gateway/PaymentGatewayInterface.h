
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

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentGatewayInterface: public TableMappingInterface {

    std::string getEnable();

    std::string getStoreName();

    std::string getName();

    std::string getPaymentMethod();

    std::string getMode();

    std::string getTestProtocol();

    std::string getTestServer();

    std::string getTestPort();

    std::string getTestPath();

    std::string getServerProtocol();

    std::string getServer();

    std::string getServerPort();

    std::string getServerPath();

    std::string getUserName();

    std::string getPassword();

    std::string getProxyProtocol();

    std::string getProxyServer();

    std::string getProxyPath();

    std::string getProxyPort();

    std::string getProxyUserName();

    std::string getProxyPassword();

    std::string getTimeout();

    std::string getProxyTimeout();

    std::string getSpecial1();

    std::string getSpecial2();

    std::string getSpecial3();

    std::string getSpecial4();

    std::string getSpecial5();

    std::string getSpecial6();

    std::string getSpecial7();

    std::string getSpecial8();

    std::string getSpecial9();

    std::string getLastModified();

    std::string getTimeEntered();

    void setEnable(std::string value);

    void setStoreName(std::string value);

    void setName(std::string value);

    void setPaymentMethod(std::string value);

    void setMode(std::string value);

    void setTestProtocol(std::string value);

    void setTestServer(std::string value);

    void setTestPort(std::string value);

    void setTestPath(std::string value);

    void setServerProtocol(std::string value);

    void setServer(std::string value);

    void setServerPort(std::string value);

    void setServerPath(std::string value);

    void setUserName(std::string value);

    void setPassword(std::string value);

    void setProxyProtocol(std::string value);

    void setProxyServer(std::string value);

    void setProxyPath(std::string value);

    void setProxyPort(std::string value);

    void setProxyUserName(std::string value);

    void setProxyPassword(std::string value);

    void setTimeout(std::string value);

    void setProxyTimeout(std::string value);

    void setSpecial1(std::string value);

    void setSpecial2(std::string value);

    void setSpecial3(std::string value);

    void setSpecial4(std::string value);

    void setSpecial5(std::string value);

    void setSpecial6(std::string value);

    void setSpecial7(std::string value);

    void setSpecial8(std::string value);

    void setSpecial9(std::string value);

    void setLastModified(std::string value);

    void setTimeEntered(std::string value);

                //@Throws(Exception.constructor)
            
    HashMap<Object*, Object*> toHashMap(bool isEncrypted);

    BasicArrayList toVector(bool isEncrypted);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACE_H
