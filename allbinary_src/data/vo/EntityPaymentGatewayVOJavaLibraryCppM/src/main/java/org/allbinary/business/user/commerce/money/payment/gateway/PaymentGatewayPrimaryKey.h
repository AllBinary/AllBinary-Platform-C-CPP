
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_H

            #include "../../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Serializable.h"
#include "PaymentGateway.h"

class PaymentGatewayPrimaryKey
            : public Object
        : public java.io.Serializable {
        

    private: storeName: string;

    private: name: string;

public constructor (string storeName, string gatewayName);

    public string getStoreName();

    public setStoreName(string storeName);

    public string getName();

    public setName(string name);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_H
