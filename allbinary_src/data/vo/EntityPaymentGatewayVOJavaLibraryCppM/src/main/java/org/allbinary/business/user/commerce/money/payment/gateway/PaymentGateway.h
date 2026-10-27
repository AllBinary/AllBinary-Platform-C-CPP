
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class StoreFrontData;
class EntryData;
class UserData;
class PaymentData;
class StdUtil;
class SuperCrypt;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
class PaymentGatewayData;
class PaymentGatewayPrimaryKey;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentGateway
            : public virtual Object
        , public PaymentGatewayInterface {

    private: std::string storeName;

    private: std::string name;

    private: std::string enable;

    private: std::string paymentMethod;

    private: std::string mode;

    private: std::string testProtocol;

    private: std::string testServer;

    private: std::string testPort;

    private: std::string testPath;

    private: std::string serverProtocol;

    private: std::string server;

    private: std::string serverPort;

    private: std::string serverPath;

    private: std::string timeout;

    private: std::string userName;

    private: std::string password;

    private: std::string proxyProtocol;

    private: std::string proxyServer;

    private: std::string proxyPort;

    private: std::string proxyPath;

    private: std::string proxyUserName;

    private: std::string proxyPassword;

    private: std::string proxyTimeout;

    private: std::string special1;

    private: std::string special2;

    private: std::string special3;

    private: std::string special4;

    private: std::string special5;

    private: std::string special6;

    private: std::string special7;

    private: std::string special8;

    private: std::string special9;

    private: std::string lastModified;

    private: std::string timeEntered;

public: PaymentGateway(HashMap<Object*, Object*>* hashMap);

    public: void getFormData(HashMap<Object*, Object*>* hashMap);

    public: std::string getStoreName();

    public: std::string getName();

    public: std::string getEnable();

    public: std::string getPaymentMethod();

    public: std::string getMode();

    public: std::string getTestProtocol();

    public: std::string getTestServer();

    public: std::string getTestPort();

    public: std::string getTestPath();

    public: std::string getServerProtocol();

    public: std::string getServer();

    public: std::string getServerPort();

    public: std::string getServerPath();

    public: std::string getUserName();

    public: std::string getPassword();

    public: std::string getProxyProtocol();

    public: std::string getProxyServer();

    public: std::string getProxyPath();

    public: std::string getProxyPort();

    public: std::string getProxyUserName();

    public: std::string getProxyPassword();

    public: std::string getTimeout();

    public: std::string getProxyTimeout();

    public: std::string getSpecial1();

    public: std::string getSpecial2();

    public: std::string getSpecial3();

    public: std::string getSpecial4();

    public: std::string getSpecial5();

    public: std::string getSpecial6();

    public: std::string getSpecial7();

    public: std::string getSpecial8();

    public: std::string getSpecial9();

    public: std::string getLastModified();

    public: std::string getTimeEntered();

    public: void setEnable(std::string value);

    public: void setStoreName(std::string value);

    public: void setName(std::string value);

    public: void setPaymentMethod(std::string value);

    public: void setMode(std::string value);

    public: void setTestProtocol(std::string value);

    public: void setTestServer(std::string value);

    public: void setTestPort(std::string value);

    public: void setTestPath(std::string value);

    public: void setServerProtocol(std::string value);

    public: void setServer(std::string value);

    public: void setServerPort(std::string value);

    public: void setServerPath(std::string value);

    public: void setTimeout(std::string value);

    public: void setUserName(std::string value);

    public: void setPassword(std::string value);

    public: void setProxyProtocol(std::string value);

    public: void setProxyServer(std::string value);

    public: void setProxyPort(std::string value);

    public: void setProxyPath(std::string value);

    public: void setProxyUserName(std::string value);

    public: void setProxyPassword(std::string value);

    public: void setProxyTimeout(std::string value);

    public: void setSpecial1(std::string value);

    public: void setSpecial2(std::string value);

    public: void setSpecial3(std::string value);

    public: void setSpecial4(std::string value);

    public: void setSpecial5(std::string value);

    public: void setSpecial6(std::string value);

    public: void setSpecial7(std::string value);

    public: void setSpecial8(std::string value);

    public: void setSpecial9(std::string value);

    public: void setLastModified(std::string value);

    public: void setTimeEntered(std::string value);

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap(bool isEncrypted);

    public: BasicArrayList* toVector();

    public: BasicArrayList* toVector(bool isEncrypted);

                //@Throws(Exception.constructor)
            
    public: Object* getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/PaymentData.h>)
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/SuperCrypt.h>)
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h"
#endif

        #endif
    
