
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONRESULTENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONRESULTENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionResultEntity.h"
        

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

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeysFactory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResult.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResultInterface.h>

      
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

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionResultEntityInterface.h"


TransactionResultEntity::TransactionResultEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto TransactionResultEntity::remove(std::string userName, std::string orderNumber) -> void{

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


    auto TransactionResultEntity::add(std::string userName, std::string orderNumber, TransactionResultInterface* transactionResultInterface) -> void{

        try {
            
    BasicArrayList* values = new BasicArrayListD();;
    
values->add(orderNumber);
    
values->add(userName);
    
values->addAllList(transactionResultInterface->getValues());
    

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


    auto TransactionResultEntity::getTransactionResultInterface(std::string orderNumber) -> TransactionResultInterface*{

        try {
            
    HashMap<Object*, Object*>* resultHashMap = StdUtil::getInstance()->createHashMap();;
    

    HashMap<Object*, Object*>* updateKeyAndValue = StdUtil::getInstance()->createHashMap();;
    
updateKeyAndValue->put(OrderData::ID, orderNumber);
    
resultHashMap= AbSqlBean::getRow(updateKeyAndValue);
    

                        if(resultHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    TransactionResult* transactionResult = new TransactionResult(resultHashMap);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "getTransactionResultInterface");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TransactionResultInterface*>(transactionResult);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "getTransactionResultInterface", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto TransactionResultEntity::createTableStatement() -> std::string{

    PaymentTransactionKeysFactory* paymentTransactionKeysFactory = PaymentTransactionKeysFactory::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE)->append(tableName)->append(this->sqlStrings->START)->append(OrderData::ID)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(UserData::USERNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(paymentTransactionKeysFactory->RESULT))->append(this->sqlTypeStrings->MAX_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->PNREF))->append(this->sqlTypeStrings->TWELVE_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(paymentTransactionKeysFactory->RESPMSG))->append(this->sqlTypeStrings->BLOB_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->AUTHCODE))->append(this->sqlTypeStrings->SIX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->AVSADDR))->append(this->sqlTypeStrings->ONE_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(paymentTransactionKeysFactory->AVSZIP))->append(this->sqlTypeStrings->ONE_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->ORIGRESULT))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->STATUS))->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(paymentTransactionKeysFactory->FRAUDCODE))->append(this->sqlTypeStrings->TWO_INT_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(paymentTransactionKeysFactory->FRAUDMSG))->append(this->sqlTypeStrings->MAX_INT_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(paymentTransactionKeysFactory->ERRCODE))->append(this->sqlTypeStrings->MAX_INT_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(paymentTransactionKeysFactory->SCORE))->append(this->sqlTypeStrings->THREE_INT_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(paymentTransactionKeysFactory->REASON1))->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->REASON2))->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->REASON3));
    
stringBuffer->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION1))->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION2))->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION3))->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION4))->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION5))->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION6))->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION7))->append(this->sqlTypeStrings->FOUR_INT_NOT_NULL)->append(EntryData::getInstance()->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(OrderData::ID)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto TransactionResultEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto TransactionResultEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_TRANSACTION_TRANSACTIONRESULTENTITY_CPP
