
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

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentGatewayInterface: public TableMappingInterface {
        

    string getEnable();

    string getStoreName();

    string getName();

    string getPaymentMethod();

    string getMode();

    string getTestProtocol();

    string getTestServer();

    string getTestPort();

    string getTestPath();

    string getServerProtocol();

    string getServer();

    string getServerPort();

    string getServerPath();

    string getUserName();

    string getPassword();

    string getProxyProtocol();

    string getProxyServer();

    string getProxyPath();

    string getProxyPort();

    string getProxyUserName();

    string getProxyPassword();

    string getTimeout();

    string getProxyTimeout();

    string getSpecial1();

    string getSpecial2();

    string getSpecial3();

    string getSpecial4();

    string getSpecial5();

    string getSpecial6();

    string getSpecial7();

    string getSpecial8();

    string getSpecial9();

    string getLastModified();

    string getTimeEntered();

    setEnable(string value);

    setStoreName(string value);

    setName(string value);

    setPaymentMethod(string value);

    setMode(string value);

    setTestProtocol(string value);

    setTestServer(string value);

    setTestPort(string value);

    setTestPath(string value);

    setServerProtocol(string value);

    setServer(string value);

    setServerPort(string value);

    setServerPath(string value);

    setUserName(string value);

    setPassword(string value);

    setProxyProtocol(string value);

    setProxyServer(string value);

    setProxyPath(string value);

    setProxyPort(string value);

    setProxyUserName(string value);

    setProxyPassword(string value);

    setTimeout(string value);

    setProxyTimeout(string value);

    setSpecial1(string value);

    setSpecial2(string value);

    setSpecial3(string value);

    setSpecial4(string value);

    setSpecial5(string value);

    setSpecial6(string value);

    setSpecial7(string value);

    setSpecial8(string value);

    setSpecial9(string value);

    setLastModified(string value);

    setTimeEntered(string value);

                //@Throws(Exception.constructor)
            
    HashMap<any, any> toHashMap(bool isEncrypted);

    Vector toVector(bool isEncrypted);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYINTERFACE_H
