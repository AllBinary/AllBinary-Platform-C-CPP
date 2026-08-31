
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CreditCardType.h"

class CreditCardTypeFactory
            : public Object
         {
        

    private: static const instance: CreditCardTypeFactory = new CreditCardTypeFactory();

    public static CreditCardTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CreditCardTypeFactory.instance;
    
}


    public const VISA: CreditCardType = new CreditCardType("Visa");

    public const MASTERCARD: CreditCardType = new CreditCardType("MasterCard");

    public const DISCOVER: CreditCardType = new CreditCardType("Discover");

    public const AMERICANEXPRESS: CreditCardType = new CreditCardType("AMX");

};

            

