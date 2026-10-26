
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CreditCardType.h"

class CreditCardTypeFactory
            : public Object
         {

    private: static CreditCardTypeFactory instance() { return CreditCardTypeFactory(); }

    public: static CreditCardTypeFactory getInstance();

    public: const CreditCardType VISA = CreditCardType("Visa");

    public: const CreditCardType MASTERCARD = CreditCardType("MasterCard");

    public: const CreditCardType DISCOVER = CreditCardType("Discover");

    public: const CreditCardType AMERICANEXPRESS = CreditCardType("AMX");

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_CREDITCARDTYPEFACTORY_H
