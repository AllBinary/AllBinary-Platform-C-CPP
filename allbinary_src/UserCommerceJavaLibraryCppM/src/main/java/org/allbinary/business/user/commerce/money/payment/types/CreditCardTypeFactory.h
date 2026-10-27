
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_CREDITCARDTYPEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_CREDITCARDTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CreditCardType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CreditCardTypeFactory
            : public virtual Object
         {

    private: static CreditCardTypeFactory* instance_owner();
    private: static CreditCardTypeFactory* instance;

    public: static CreditCardTypeFactory* getInstance();


            
    public: CreditCardTypeFactory();
        
    public: CreditCardType* VISA;

    public: CreditCardType* MASTERCARD;

    public: CreditCardType* DISCOVER;

    public: CreditCardType* AMERICANEXPRESS;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_CREDITCARDTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_CREDITCARDTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_CREDITCARDTYPEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/business/user/commerce/money/payment/types/CreditCardType.h")
#include "org/allbinary/business/user/commerce/money/payment/types/CreditCardType.h"
#endif

        #endif
    
