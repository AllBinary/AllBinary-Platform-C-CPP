
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENTINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENTINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentInterface {

    public: virtual void setName(std::string value) = 0;

    public: virtual void setType(std::string value) = 0;

    public: virtual void setExpiration(std::string value) = 0;

    public: virtual void setNumber(std::string value) = 0;

    public: virtual std::string getId() = 0;

    public: virtual std::string getName() = 0;

    public: virtual std::string getType() = 0;

    public: virtual std::string getExpiration() = 0;

    public: virtual std::string getEncryption() = 0;

    public: virtual std::string getNumber() = 0;

    public: virtual std::string getLastFour() = 0;

    public: virtual bool isDefault() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENTINTERFACE_H
