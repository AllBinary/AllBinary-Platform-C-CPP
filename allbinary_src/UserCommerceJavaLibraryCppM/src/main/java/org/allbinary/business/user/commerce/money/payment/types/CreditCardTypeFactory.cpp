
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_CREDITCARDTYPEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_CREDITCARDTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/types/CreditCardTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/CreditCardType.h"


CreditCardTypeFactory::CreditCardTypeFactory() : VISA(new CreditCardType("Visa")), MASTERCARD(new CreditCardType("MasterCard")), DISCOVER(new CreditCardType("Discover")), AMERICANEXPRESS(new CreditCardType("AMX")) {
        }
        auto CreditCardTypeFactory::instance_owner() -> CreditCardTypeFactory* { static std::unique_ptr<CreditCardTypeFactory> value(new CreditCardTypeFactory()); return value.get(); }
CreditCardTypeFactory* CreditCardTypeFactory::instance = CreditCardTypeFactory::instance_owner();

    auto CreditCardTypeFactory::getInstance() -> CreditCardTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CreditCardTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_CREDITCARDTYPEFACTORY_CPP
