
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TRANSACTIONTYPEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TRANSACTIONTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/types/TransactionTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/TransactionType.h"


TransactionTypeFactory::TransactionTypeFactory() : SALE(new TransactionType("Sale")), CREDIT(new TransactionType("Credit")), AUTHORIZATION(new TransactionType("Authorization")), DELAYEDCAPTURE(new TransactionType("Delayed Capture")), VOID(new TransactionType("Void")), INQUIRY(new TransactionType("Inquiry")) {
        }
        auto TransactionTypeFactory::instance_owner() -> TransactionTypeFactory* { static std::unique_ptr<TransactionTypeFactory> value(new TransactionTypeFactory()); return value.get(); }
TransactionTypeFactory* TransactionTypeFactory::instance = TransactionTypeFactory::instance_owner();

    auto TransactionTypeFactory::getInstance() -> TransactionTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransactionTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TRANSACTIONTYPEFACTORY_CPP
