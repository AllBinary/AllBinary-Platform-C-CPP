
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_PAYMENTENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_PAYMENTENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/money/payment/PaymentEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Random.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>

      
#include <org/allbinary/data/generator/PaymentIdGenerator.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityInterface.h"


PaymentEntity::PaymentEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto PaymentEntity::getLastId(std::string userName) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlBean::getLargestIntegerInColumnWhere(PaymentData::ID, UserData::USERNAME, userName);;
    
}


    auto PaymentEntity::setDefault(std::string userName, int32_t index) -> void{

        try {
            
    HashMap<Object*, Object*>* updateKeyAndValue = StdUtil::getInstance()->createHashMap();;
    

    HashMap<Object*, Object*>* whereKeyAndValue = StdUtil::getInstance()->createHashMap();;
    
whereKeyAndValue->put(UserData::USERNAME, userName);
    

    PaymentInterface* paymentInterface = this->getDefault(userName);;
    

                        if(paymentInterface != 
                                    nullptr
                                )
                        
                                    {
                                    updateKeyAndValue->put(EntryData::getInstance()->DEFAULT, StringUtil::getInstance()->EMPTY_STRING);
    
whereKeyAndValue->put(PaymentData::ID, paymentInterface->getId());
    
AbSqlBean::updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                                    }
                                
updateKeyAndValue->put(EntryData::getInstance()->DEFAULT, EntryData::getInstance()->DEFAULT);
    
whereKeyAndValue->put(PaymentData::ID, JavaString::valueOf(index));
    
AbSqlBean::updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "setDefault");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "setDefault", &e);
    

                                    }
                                
}

}


    auto PaymentEntity::get(std::string userName) -> BasicArrayList*{

        try {
            
    BasicArrayList* paymentVector = new BasicArrayListD();;
    

    HashMap<Object*, Object*>* keyAndValue = StdUtil::getInstance()->createHashMap();;
    
keyAndValue->put(UserData::USERNAME, userName);
    

    BasicArrayList* paymentList = AbSqlBean::getRows(keyAndValue);;
    

    int32_t size = paymentList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* paymentHashMap = dynamic_cast<HashMap*>(paymentList->get(index));;
    

    Payment* payment = new Payment(paymentHashMap);;
    

                        if(payment != 
                                    nullptr
                                )
                        
                                    {
                                    paymentVector->add(payment);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentVector;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    auto PaymentEntity::getDefault(std::string userName) -> PaymentInterface*{

        try {
            
    HashMap<Object*, Object*>* paymentHashMap = StdUtil::getInstance()->createHashMap();;
    

    HashMap<Object*, Object*>* updateKeyAndValue = StdUtil::getInstance()->createHashMap();;
    
updateKeyAndValue->put(EntryData::getInstance()->DEFAULT, EntryData::getInstance()->DEFAULT);
    
updateKeyAndValue->put(UserData::USERNAME, userName);
    
paymentHashMap= AbSqlBean::getRow(updateKeyAndValue);
    

                        if(paymentHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    Payment* payment = new Payment(paymentHashMap);;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "getDefault");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PaymentInterface*>(payment);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "getDefault", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    auto PaymentEntity::remove(std::string userName, int32_t index) -> void{

        try {
            
    HashMap<Object*, Object*>* whereHashMap = StdUtil::getInstance()->createHashMap();;
    
whereHashMap->put(UserData::USERNAME, userName);
    
whereHashMap->put(PaymentData::ID, JavaBoxes::unbox<std::string>(JavaString::valueOf(index)));
    
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


    auto PaymentEntity::add(std::string userName, PaymentInterface* paymentInterface) -> void{

        try {
            
    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add((new PaymentIdGenerator())->getNext());
    
vector->add(userName);
    
vector->add(StringUtil::getInstance()->EMPTY_STRING);
    
vector->add(paymentInterface->getName());
    
vector->add(paymentInterface->getType());
    
vector->add(paymentInterface->getExpiration());
    

    int32_t random = (new Random())->nextInt(SuperCrypt::KEYMAX);;
    
vector->add((new SuperCrypt(random))->encrypt(paymentInterface->getNumber()));
    
vector->add((int32_t(random)).toString());
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
vector->add(time);
    
AbSqlBean::insert(vector);
    

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


    auto PaymentEntity::createTableStatement() -> std::string{

    EntryData* entryData = EntryData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE)->append(tableName)->append(this->sqlStrings->START)->append(PaymentData::ID)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL)->append(UserData::USERNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(entryData->DEFAULT)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(PaymentData::NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(PaymentData::TYPE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(PaymentData::EXPIRATION)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(PaymentData::NUMBER)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(entryData->ENCRYPTION)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(entryData->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(PaymentData::ID)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto PaymentEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto PaymentEntity::drop() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_PAYMENTENTITY_CPP
