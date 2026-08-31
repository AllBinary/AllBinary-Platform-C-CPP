
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
        #include "TransactionType.h"

class TransactionTypeFactory
            : public Object
         {
        

    private: static const instance: TransactionTypeFactory = new TransactionTypeFactory();

    public static TransactionTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransactionTypeFactory.instance;
    
}


    public const SALE: TransactionType = new TransactionType("Sale");

    public const CREDIT: TransactionType = new TransactionType("Credit");

    public const AUTHORIZATION: TransactionType = new TransactionType("Authorization");

    public const DELAYEDCAPTURE: TransactionType = new TransactionType("Delayed Capture");

    public const VOID: TransactionType = new TransactionType("Void");

    public const INQUIRY: TransactionType = new TransactionType("Inquiry");

};

            

