
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeysFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntityInterface.h"


TransactionEntity::TransactionEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto TransactionEntity::remove(std::string userName, std::string orderNumber) -> void{

        try {
            
    HashMap<Object*, Object*>* whereHashMap = StdUtil::getInstance()->createHashMap();;
    
whereHashMap->put(OrderData::ID, JavaBoxes::unbox<std::string>(orderNumber));
    
whereHashMap->put(UserData::USERNAME, userName);
    
AbSqlBean::deleteWhere(whereHashMap);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "remove");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "remove", &e);
    

                                    }
                                
}

}


    auto TransactionEntity::add(std::string userName, std::string orderNumber, PaymentTransactionInterface* paymentTransactionInterface) -> void{

        try {
            
    BasicArrayList* values = new BasicArrayListD();;
    
values->add(orderNumber);
    
values->add(userName);
    
values->addAllList(paymentTransactionInterface->toVector());
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->add(time);
    
values->add(time);
    
AbSqlBean::insert(values);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "add");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "add", &e);
    

                                    }
                                
}

}


    auto TransactionEntity::createTableStatement() -> std::string{

    PaymentTransactionKeysFactory* paymentTransactionKeysFactory = PaymentTransactionKeysFactory::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE);
    
stringBuffer->append(this->tableName);
    
stringBuffer->append(this->sqlStrings->START);
    
stringBuffer->append(OrderData::ID)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(UserData::USERNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->TRXTYPE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->TENDER->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->ACCT->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->EXPDATE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->AMT->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->AUTHCODE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->MICR->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->CHECKNUM->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->NAME->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->STREET->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->CITY->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->STATE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->ZIP->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->DL->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->EMAIL->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->COMMENT1->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->COMMENT2->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->ORIGID->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->PONUM->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->DESC->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->DESC1TO4->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->INVNUM->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SHIPTOZIP->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SWIPE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->TAXAMT->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->COMMCARD->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->DUTYAMT->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->FREIGHTAMT->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->ORDERDATE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->TAXEXEMPT->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->COUNTRYCODE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->CUSTCODE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->CVV2->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->ABA->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->ACCTTYPE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->DISCOUNT->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->FIRSTNAME->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->LASTNAME->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SHIPFROMZIP->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->PRENOTE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->CHKTYPE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->DOB->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->PHONENUM->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SS->toString())->append(" VARCHAR(30) NOT NULL,")->append(paymentTransactionKeysFactory->COMPANYNAME->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->COUNTRY->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SHIPTOCITY->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SHIPTOFIRSTNAME->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SHIPTOLASTNAME->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SHIPTOSTATE->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SHIPTOSTREET->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SPECIAL1->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SPECIAL2->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(paymentTransactionKeysFactory->SPECIAL3->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(EntryData::getInstance()->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(OrderData::ID)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto TransactionEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto TransactionEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONENTITY_CPP
