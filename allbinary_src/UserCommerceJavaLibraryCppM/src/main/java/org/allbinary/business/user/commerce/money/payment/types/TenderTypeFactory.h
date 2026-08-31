
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TENDERTYPEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TENDERTYPEFACTORY_H

            #include "../../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TenderType.h"

class TenderTypeFactory
            : public Object
         {
        

    private: static const instance: TenderTypeFactory = new TenderTypeFactory();

    public static TenderTypeFactory getInstance();

    public const CREDITCARD: TenderType = new TenderType("Credit Card");

    public const CHECK: TenderType = new TenderType("Check");

    public const ACH: TenderType = new TenderType("Ach");

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_TENDERTYPEFACTORY_H
