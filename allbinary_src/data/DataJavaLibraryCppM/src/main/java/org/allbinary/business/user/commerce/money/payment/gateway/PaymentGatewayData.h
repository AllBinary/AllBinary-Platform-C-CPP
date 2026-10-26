
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYDATA_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYDATA_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentGatewayData
            : public Object
         {

    public: static const int32_t CRYPTNUM = 5;

    public: static const PaymentGatewayData ID = PaymentGatewayData("PAYMENTGATEWAY_ID");

    public: static const PaymentGatewayData NAME = PaymentGatewayData("PAYMENTGATEWAY_NAME");

    public: static const PaymentGatewayData VALUE = PaymentGatewayData("PAYMENTGATEWAY_VALUE");

    public: static const PaymentGatewayData PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE = PaymentGatewayData("PAYMENTGATEWAY_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE");

    public: static const PaymentGatewayData PAYMENTPROCESSORINTERFACEFACTORYINTERFACE = PaymentGatewayData("PAYMENTGATEWAY_PAYMENTPROCESSORINTERFACEFACTORYINTERFACE");

    public: static const PaymentGatewayData MODE = PaymentGatewayData("MODE");

    public: static const PaymentGatewayData SERVERPROTOCOL = PaymentGatewayData("SERVERPROTOCOL");

    public: static const PaymentGatewayData SERVER = PaymentGatewayData("SERVER");

    public: static const PaymentGatewayData SERVERPORT = PaymentGatewayData("SERVERPORT");

    public: static const PaymentGatewayData SERVERPATH = PaymentGatewayData("SERVERPATH");

    public: static const PaymentGatewayData TESTPROTOCOL = PaymentGatewayData("TESTSERVERPROTOCOL");

    public: static const PaymentGatewayData TESTSERVER = PaymentGatewayData("TESTSERVER");

    public: static const PaymentGatewayData TESTPORT = PaymentGatewayData("TESTPORT");

    public: static const PaymentGatewayData TESTPATH = PaymentGatewayData("TESTSERVERPATH");

    public: static const PaymentGatewayData TIMEOUT = PaymentGatewayData("TIMEOUT");

    public: static const PaymentGatewayData PROXYPROTOCOL = PaymentGatewayData("PROXYPROTOCOL");

    public: static const PaymentGatewayData PROXYSERVER = PaymentGatewayData("PROXYSERVER");

    public: static const PaymentGatewayData PROXYPATH = PaymentGatewayData("PROXYPATH");

    public: static const PaymentGatewayData PROXYUSERNAME = PaymentGatewayData("PROXYUSERNAME");

    public: static const PaymentGatewayData PROXYPASSWORD = PaymentGatewayData("PROXYPASSWORD");

    public: static const PaymentGatewayData PROXYPORT = PaymentGatewayData("PROXYPORT");

    public: static const PaymentGatewayData PROXYTIMEOUT = PaymentGatewayData("PROXYTIMEOUT");

    public: static const PaymentGatewayData SPECIAL1 = PaymentGatewayData("SPECIAL1");

    public: static const PaymentGatewayData SPECIAL2 = PaymentGatewayData("SPECIAL2");

    public: static const PaymentGatewayData SPECIAL3 = PaymentGatewayData("SPECIAL3");

    public: static const PaymentGatewayData SPECIAL4 = PaymentGatewayData("SPECIAL4");

    public: static const PaymentGatewayData SPECIAL5 = PaymentGatewayData("SPECIAL5");

    public: static const PaymentGatewayData SPECIAL6 = PaymentGatewayData("SPECIAL6");

    public: static const PaymentGatewayData SPECIAL7 = PaymentGatewayData("SPECIAL7");

    public: static const PaymentGatewayData SPECIAL8 = PaymentGatewayData("SPECIAL8");

    public: static const PaymentGatewayData SPECIAL9 = PaymentGatewayData("SPECIAL9");

    private: std::string key;

private: PaymentGatewayData(std::string value);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYDATA_H
