
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

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentInterface {

    void setName(std::string value);

    void setType(std::string value);

    void setExpiration(std::string value);

    void setNumber(std::string value);

    std::string getId();

    std::string getName();

    std::string getType();

    std::string getExpiration();

    std::string getEncryption();

    std::string getNumber();

    std::string getLastFour();

    bool isDefault();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENTINTERFACE_H
