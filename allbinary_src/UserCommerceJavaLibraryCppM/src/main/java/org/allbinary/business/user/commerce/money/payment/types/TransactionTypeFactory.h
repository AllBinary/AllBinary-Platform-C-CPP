
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TRANSACTIONTYPEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TRANSACTIONTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TransactionType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransactionTypeFactory
            : public virtual Object
         {

    private: static TransactionTypeFactory* instance_owner();
    private: static TransactionTypeFactory* instance;

    public: static TransactionTypeFactory* getInstance();


            
    public: TransactionTypeFactory();
        
    public: TransactionType* SALE;

    public: TransactionType* CREDIT;

    public: TransactionType* AUTHORIZATION;

    public: TransactionType* DELAYEDCAPTURE;

    public: TransactionType* VOID;

    public: TransactionType* INQUIRY;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TRANSACTIONTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TRANSACTIONTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TRANSACTIONTYPEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/business/user/commerce/money/payment/types/TransactionType.h")
#include "org/allbinary/business/user/commerce/money/payment/types/TransactionType.h"
#endif

        #endif
    
