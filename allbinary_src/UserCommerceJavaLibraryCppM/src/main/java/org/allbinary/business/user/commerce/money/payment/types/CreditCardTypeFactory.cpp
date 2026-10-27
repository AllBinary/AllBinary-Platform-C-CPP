
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/CreditCardType.h"

class CreditCardTypeFactory
            : public Object
         {

    private: static CreditCardTypeFactory* instance() { static std::unique_ptr<CreditCardTypeFactory> value(new CreditCardTypeFactory()); return value.get(); }

    public: static CreditCardTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CreditCardTypeFactory::instance();
    
}


    public: CreditCardType* VISA = new CreditCardType("Visa");

    public: CreditCardType* MASTERCARD = new CreditCardType("MasterCard");

    public: CreditCardType* DISCOVER = new CreditCardType("Discover");

    public: CreditCardType* AMERICANEXPRESS = new CreditCardType("AMX");

};

            

