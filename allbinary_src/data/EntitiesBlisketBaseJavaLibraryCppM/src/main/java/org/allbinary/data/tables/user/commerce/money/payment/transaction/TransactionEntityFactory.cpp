
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITYFACTORY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntityFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntity.h"

auto TransactionEntityFactory::instance_owner() -> TransactionEntityFactory* { static std::unique_ptr<TransactionEntityFactory> value(new TransactionEntityFactory()); return value.get(); }
TransactionEntityFactory* TransactionEntityFactory::instance = TransactionEntityFactory::instance_owner();

    auto TransactionEntityFactory::getInstance() -> TransactionEntityFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransactionEntityFactory::instance;
    
}


TransactionEntityFactory::TransactionEntityFactory() : logUtil(LogUtil::getInstance()){
}


    auto TransactionEntityFactory::getTransactionEntityInstance() -> TransactionEntity*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new org::allbinary::data::tables::user::commerce::money::payment::transaction::TransactionEntity();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITYFACTORY_CPP
