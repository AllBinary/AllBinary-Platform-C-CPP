
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAY_H

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentGatewayInterface.h"
#include "PaymentGatewayData.h"
#include "PaymentGatewayPrimaryKey.h"

class PaymentGateway
            : public Object
        : public PaymentGatewayInterface {
        

    private: storeName: string;

    private: name: string;

    private: enable: string;

    private: paymentMethod: string;

    private: mode: string;

    private: testProtocol: string;

    private: testServer: string;

    private: testPort: string;

    private: testPath: string;

    private: serverProtocol: string;

    private: server: string;

    private: serverPort: string;

    private: serverPath: string;

    private: timeout: string;

    private: userName: string;

    private: password: string;

    private: proxyProtocol: string;

    private: proxyServer: string;

    private: proxyPort: string;

    private: proxyPath: string;

    private: proxyUserName: string;

    private: proxyPassword: string;

    private: proxyTimeout: string;

    private: special1: string;

    private: special2: string;

    private: special3: string;

    private: special4: string;

    private: special5: string;

    private: special6: string;

    private: special7: string;

    private: special8: string;

    private: special9: string;

    private: lastModified: string;

    private: timeEntered: string;

public constructor (HashMap<any, any> hashMap);

    public getFormData(HashMap<any, any> hashMap);

    public string getStoreName();

    public string getName();

    public string getEnable();

    public string getPaymentMethod();

    public string getMode();

    public string getTestProtocol();

    public string getTestServer();

    public string getTestPort();

    public string getTestPath();

    public string getServerProtocol();

    public string getServer();

    public string getServerPort();

    public string getServerPath();

    public string getUserName();

    public string getPassword();

    public string getProxyProtocol();

    public string getProxyServer();

    public string getProxyPath();

    public string getProxyPort();

    public string getProxyUserName();

    public string getProxyPassword();

    public string getTimeout();

    public string getProxyTimeout();

    public string getSpecial1();

    public string getSpecial2();

    public string getSpecial3();

    public string getSpecial4();

    public string getSpecial5();

    public string getSpecial6();

    public string getSpecial7();

    public string getSpecial8();

    public string getSpecial9();

    public string getLastModified();

    public string getTimeEntered();

    public setEnable(string value);

    public setStoreName(string value);

    public setName(string value);

    public setPaymentMethod(string value);

    public setMode(string value);

    public setTestProtocol(string value);

    public setTestServer(string value);

    public setTestPort(string value);

    public setTestPath(string value);

    public setServerProtocol(string value);

    public setServer(string value);

    public setServerPort(string value);

    public setServerPath(string value);

    public setTimeout(string value);

    public setUserName(string value);

    public setPassword(string value);

    public setProxyProtocol(string value);

    public setProxyServer(string value);

    public setProxyPort(string value);

    public setProxyPath(string value);

    public setProxyUserName(string value);

    public setProxyPassword(string value);

    public setProxyTimeout(string value);

    public setSpecial1(string value);

    public setSpecial2(string value);

    public setSpecial3(string value);

    public setSpecial4(string value);

    public setSpecial5(string value);

    public setSpecial6(string value);

    public setSpecial7(string value);

    public setSpecial8(string value);

    public setSpecial9(string value);

    public setLastModified(string value);

    public setTimeEntered(string value);

                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(bool isEncrypted);

    public Vector toVector();

    public Vector toVector(bool isEncrypted);

                //@Throws(Exception.constructor)
            
    public any getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAY_H
