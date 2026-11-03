
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYDATA_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto PaymentGatewayData::ID_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PAYMENTGATEWAY_ID")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::ID = PaymentGatewayData::ID_owner();
auto PaymentGatewayData::NAME_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PAYMENTGATEWAY_NAME")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::NAME = PaymentGatewayData::NAME_owner();
auto PaymentGatewayData::VALUE_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PAYMENTGATEWAY_VALUE")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::VALUE = PaymentGatewayData::VALUE_owner();
auto PaymentGatewayData::PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PAYMENTGATEWAY_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE = PaymentGatewayData::PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE_owner();
auto PaymentGatewayData::PAYMENTPROCESSORINTERFACEFACTORYINTERFACE_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PAYMENTGATEWAY_PAYMENTPROCESSORINTERFACEFACTORYINTERFACE")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::PAYMENTPROCESSORINTERFACEFACTORYINTERFACE = PaymentGatewayData::PAYMENTPROCESSORINTERFACEFACTORYINTERFACE_owner();
auto PaymentGatewayData::MODE_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("MODE")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::MODE = PaymentGatewayData::MODE_owner();
auto PaymentGatewayData::SERVERPROTOCOL_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SERVERPROTOCOL")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SERVERPROTOCOL = PaymentGatewayData::SERVERPROTOCOL_owner();
auto PaymentGatewayData::SERVER_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SERVER")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SERVER = PaymentGatewayData::SERVER_owner();
auto PaymentGatewayData::SERVERPORT_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SERVERPORT")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SERVERPORT = PaymentGatewayData::SERVERPORT_owner();
auto PaymentGatewayData::SERVERPATH_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SERVERPATH")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SERVERPATH = PaymentGatewayData::SERVERPATH_owner();
auto PaymentGatewayData::TESTPROTOCOL_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("TESTSERVERPROTOCOL")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::TESTPROTOCOL = PaymentGatewayData::TESTPROTOCOL_owner();
auto PaymentGatewayData::TESTSERVER_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("TESTSERVER")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::TESTSERVER = PaymentGatewayData::TESTSERVER_owner();
auto PaymentGatewayData::TESTPORT_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("TESTPORT")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::TESTPORT = PaymentGatewayData::TESTPORT_owner();
auto PaymentGatewayData::TESTPATH_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("TESTSERVERPATH")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::TESTPATH = PaymentGatewayData::TESTPATH_owner();
auto PaymentGatewayData::TIMEOUT_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("TIMEOUT")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::TIMEOUT = PaymentGatewayData::TIMEOUT_owner();
auto PaymentGatewayData::PROXYPROTOCOL_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PROXYPROTOCOL")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::PROXYPROTOCOL = PaymentGatewayData::PROXYPROTOCOL_owner();
auto PaymentGatewayData::PROXYSERVER_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PROXYSERVER")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::PROXYSERVER = PaymentGatewayData::PROXYSERVER_owner();
auto PaymentGatewayData::PROXYPATH_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PROXYPATH")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::PROXYPATH = PaymentGatewayData::PROXYPATH_owner();
auto PaymentGatewayData::PROXYUSERNAME_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PROXYUSERNAME")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::PROXYUSERNAME = PaymentGatewayData::PROXYUSERNAME_owner();
auto PaymentGatewayData::PROXYPASSWORD_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PROXYPASSWORD")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::PROXYPASSWORD = PaymentGatewayData::PROXYPASSWORD_owner();
auto PaymentGatewayData::PROXYPORT_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PROXYPORT")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::PROXYPORT = PaymentGatewayData::PROXYPORT_owner();
auto PaymentGatewayData::PROXYTIMEOUT_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("PROXYTIMEOUT")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::PROXYTIMEOUT = PaymentGatewayData::PROXYTIMEOUT_owner();
auto PaymentGatewayData::SPECIAL1_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SPECIAL1")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SPECIAL1 = PaymentGatewayData::SPECIAL1_owner();
auto PaymentGatewayData::SPECIAL2_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SPECIAL2")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SPECIAL2 = PaymentGatewayData::SPECIAL2_owner();
auto PaymentGatewayData::SPECIAL3_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SPECIAL3")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SPECIAL3 = PaymentGatewayData::SPECIAL3_owner();
auto PaymentGatewayData::SPECIAL4_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SPECIAL4")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SPECIAL4 = PaymentGatewayData::SPECIAL4_owner();
auto PaymentGatewayData::SPECIAL5_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SPECIAL5")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SPECIAL5 = PaymentGatewayData::SPECIAL5_owner();
auto PaymentGatewayData::SPECIAL6_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SPECIAL6")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SPECIAL6 = PaymentGatewayData::SPECIAL6_owner();
auto PaymentGatewayData::SPECIAL7_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SPECIAL7")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SPECIAL7 = PaymentGatewayData::SPECIAL7_owner();
auto PaymentGatewayData::SPECIAL8_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SPECIAL8")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SPECIAL8 = PaymentGatewayData::SPECIAL8_owner();
auto PaymentGatewayData::SPECIAL9_owner() -> PaymentGatewayData* { static std::unique_ptr<PaymentGatewayData> value(new PaymentGatewayData("SPECIAL9")); return value.get(); }
PaymentGatewayData* PaymentGatewayData::SPECIAL9 = PaymentGatewayData::SPECIAL9_owner();

PaymentGatewayData::PaymentGatewayData(std::string value){
this->key= value;
    
}


    auto PaymentGatewayData::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->key;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYDATA_CPP
