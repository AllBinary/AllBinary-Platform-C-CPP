
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

        
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResultInterface.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransactionResultEntityInterface: public BasicDataTableInterface {

    public: virtual TransactionResultInterface* getTransactionResultInterface(std::string orderNumber) = 0;

    public: virtual void remove(std::string userName, std::string orderNumber) = 0;

    public: virtual void add(std::string userName, std::string orderNumber, TransactionResultInterface* resultInterface) = 0;

};

            

