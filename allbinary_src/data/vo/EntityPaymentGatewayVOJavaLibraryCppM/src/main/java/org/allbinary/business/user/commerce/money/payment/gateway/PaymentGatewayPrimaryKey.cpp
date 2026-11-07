
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/Serializable.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGateway.h"


PaymentGatewayPrimaryKey::PaymentGatewayPrimaryKey(std::string storeName, std::string gatewayName){
this->setStoreName(storeName);
    
this->setName(gatewayName);
    
}


    auto PaymentGatewayPrimaryKey::getStoreName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->storeName;
    
}


    auto PaymentGatewayPrimaryKey::setStoreName(std::string storeName) -> void{
this->storeName= storeName;
    
}


    auto PaymentGatewayPrimaryKey::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto PaymentGatewayPrimaryKey::setName(std::string name) -> void{
this->name= name;
    
}


    auto PaymentGatewayPrimaryKey::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(Class::forType(typeid(PaymentGatewayPrimaryKey))->getName());
    
stringBuffer->append(Class::forType(typeid(StoreFront))->getName());
    
stringBuffer->append(" =");
    
stringBuffer->append(this->getStoreName());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(Class::forType(typeid(PaymentGateway))->getName());
    
stringBuffer->append("=");
    
stringBuffer->append(this->getName());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_CPP
