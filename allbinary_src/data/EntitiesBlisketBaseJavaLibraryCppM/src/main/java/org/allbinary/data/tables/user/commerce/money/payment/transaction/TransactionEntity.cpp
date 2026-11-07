
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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
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
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "remove");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
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
    

    std::string time = JavaString::valueOf((int64_t(calendar->getTimeInMillis())));;
    
values->add(time);
    
values->add(time);
    
AbSqlBean::insert(values);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "add");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
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
    
stringBuffer->append(OrderData::ID)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(UserData::USERNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->TRXTYPE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->TENDER))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->ACCT))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->EXPDATE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->AMT))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->AUTHCODE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->MICR))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->CHECKNUM))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->NAME))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->STREET))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->CITY))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->STATE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->ZIP))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->DL))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->EMAIL))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->COMMENT1))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->COMMENT2))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->ORIGID))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->PONUM))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->DESC))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->DESC1TO4))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->INVNUM))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SHIPTOZIP))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SWIPE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->TAXAMT))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->COMMCARD))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->DUTYAMT))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->FREIGHTAMT))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->ORDERDATE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->TAXEXEMPT))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->COUNTRYCODE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->CUSTCODE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->CVV2))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->ABA))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->ACCTTYPE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->DISCOUNT))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->FIRSTNAME))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->LASTNAME))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SHIPFROMZIP))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->PRENOTE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->CHKTYPE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->DOB))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->PHONENUM))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SS))->append(" VARCHAR(30) NOT NULL,")->append(JavaString::valueOf(paymentTransactionKeysFactory->COMPANYNAME))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->COUNTRY))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SHIPTOCITY))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SHIPTOFIRSTNAME))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SHIPTOLASTNAME))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SHIPTOSTATE))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SHIPTOSTREET))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SPECIAL1))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SPECIAL2))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->SPECIAL3))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(EntryData::getInstance()->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(OrderData::ID)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
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
