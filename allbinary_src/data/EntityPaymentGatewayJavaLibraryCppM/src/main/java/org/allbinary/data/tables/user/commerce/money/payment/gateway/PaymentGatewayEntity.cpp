
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntity.h"
        

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

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayEncryptedMapping.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>

      
#include <org/allbinary/data/generator/PaymentGatewayIdGenerator.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
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
        #include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityInterface.h"


PaymentGatewayEntity::PaymentGatewayEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


    auto PaymentGatewayEntity::add(PaymentGatewayInterface* paymentGatewayInterface) -> void{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "add");
    

                                    }
                                

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add((new PaymentGatewayIdGenerator())->getNext());
    
vector->addAllList((new PaymentGatewayEncryptedMapping(paymentGatewayInterface))->toVector());
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = JavaString::valueOf((int64_t(calendar->getTimeInMillis())));;
    
vector->add(time);
    
vector->add(time);
    
AbSqlBean::insert(vector);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->END, this, "add");
    

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


    auto PaymentGatewayEntity::update(PaymentGatewayInterface* paymentGatewayInterface) -> void{

        try {
            
    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = JavaString::valueOf((int64_t(calendar->getTimeInMillis())));;
    
paymentGatewayInterface->setLastModified(time);
    

    HashMap<Object*, Object*>* whereKeyValuePairs = StdUtil::getInstance()->createHashMap();;
    
whereKeyValuePairs->put(JavaString::valueOf(StoreFrontData::getInstance()->NAME), paymentGatewayInterface->getStoreName());
    
whereKeyValuePairs->put(JavaString::valueOf(PaymentGatewayData::NAME), paymentGatewayInterface->getName());
    

                        if(whereKeyValuePairs->get(EntryData::getInstance()->TIMECREATED) != 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Don't update TimeCreated for update");
                    

                                    }
                                

    HashMap<Object*, Object*>* updateHashMap = (new PaymentGatewayEncryptedMapping(paymentGatewayInterface))->toHashMap();;
    
AbSqlBean::updateWhere(whereKeyValuePairs, updateHashMap);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "update");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "update", &e);
    

                                    }
                                
}

}


    auto PaymentGatewayEntity::getPaymentGatewayInterface(std::string storeName, BasicPaymentType* paymentType) -> PaymentGatewayInterface*{

        try {
            
    HashMap<Object*, Object*>* paymentGatewayHashMap = StdUtil::getInstance()->createHashMap();;
    

    HashMap<Object*, Object*>* whereKeyAndValue = StdUtil::getInstance()->createHashMap();;
    
whereKeyAndValue->put(JavaString::valueOf(StoreFrontData::getInstance()->NAME), storeName);
    
whereKeyAndValue->put(JavaString::valueOf(PaymentGatewayData::NAME), paymentType->getName());
    
paymentGatewayHashMap= AbSqlBean::getRow(whereKeyAndValue);
    

                        if(paymentGatewayHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string userName = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(UserData::USERNAME)));;
    

    std::string password = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(UserData::PASSWORD)));;
    

    std::string special1 = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(PaymentGatewayData::SPECIAL1)));;
    

    std::string special2 = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(PaymentGatewayData::SPECIAL2)));;
    

    std::string special3 = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(PaymentGatewayData::SPECIAL3)));;
    

    std::string special4 = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(PaymentGatewayData::SPECIAL4)));;
    

    std::string special5 = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(PaymentGatewayData::SPECIAL5)));;
    

    std::string special6 = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(PaymentGatewayData::SPECIAL6)));;
    

    std::string special7 = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(PaymentGatewayData::SPECIAL7)));;
    

    std::string special8 = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(PaymentGatewayData::SPECIAL8)));;
    

    std::string special9 = JavaBoxes::unbox<std::string>(paymentGatewayHashMap->get(JavaString::valueOf(PaymentGatewayData::SPECIAL9)));;
    

    SuperCrypt* superCrypt = new SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
paymentGatewayHashMap->put(JavaString::valueOf(UserData::USERNAME), superCrypt->decrypt(userName));
    
paymentGatewayHashMap->put(JavaString::valueOf(UserData::PASSWORD), superCrypt->decrypt(password));
    
paymentGatewayHashMap->put(JavaString::valueOf(PaymentGatewayData::SPECIAL1), superCrypt->decrypt(special1));
    
paymentGatewayHashMap->put(JavaString::valueOf(PaymentGatewayData::SPECIAL2), superCrypt->decrypt(special2));
    
paymentGatewayHashMap->put(JavaString::valueOf(PaymentGatewayData::SPECIAL3), superCrypt->decrypt(special3));
    
paymentGatewayHashMap->put(JavaString::valueOf(PaymentGatewayData::SPECIAL4), superCrypt->decrypt(special4));
    
paymentGatewayHashMap->put(JavaString::valueOf(PaymentGatewayData::SPECIAL5), superCrypt->decrypt(special5));
    
paymentGatewayHashMap->put(JavaString::valueOf(PaymentGatewayData::SPECIAL6), superCrypt->decrypt(special6));
    
paymentGatewayHashMap->put(JavaString::valueOf(PaymentGatewayData::SPECIAL7), superCrypt->decrypt(special7));
    
paymentGatewayHashMap->put(JavaString::valueOf(PaymentGatewayData::SPECIAL8), superCrypt->decrypt(special8));
    
paymentGatewayHashMap->put(JavaString::valueOf(PaymentGatewayData::SPECIAL9), superCrypt->decrypt(special9));
    

    PaymentGatewayInterface* paymentGatewayInterface = (new PaymentGatewayInterfaceFactory())->getInstance(paymentGatewayHashMap);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "getPaymentGatewayInterface()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return paymentGatewayInterface;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (new PaymentGatewayInterfaceFactory())->getInstance(paymentType);;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf("Command Failed for paymentType: ") +JavaString::valueOf(paymentType->getName()), this, "getPaymentGatewayInterface", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto PaymentGatewayEntity::findPaymentTypeVectorByStore(std::string storeName) -> BasicArrayList*{

        try {
            
    BasicArrayList* paymentGatewayNameVector = new BasicArrayListD();;
    
paymentGatewayNameVector= AbSqlBean::getColumnWhere(JavaString::valueOf(PaymentGatewayData::NAME), JavaString::valueOf(StoreFrontData::getInstance()->NAME), storeName);
    

                        if(paymentGatewayNameVector != 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicArrayList* paymentGatewayVector = new BasicArrayListD();;
    

    int32_t size = paymentGatewayNameVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string paymentTypeString = JavaBoxes::unbox<std::string>(paymentGatewayNameVector->get(i));;
    

    BasicPaymentType* paymentType = BasicPaymentTypeUtil::getInstance()->get(paymentTypeString);;
    
paymentGatewayVector->add(paymentType);
    
}


                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "findPaymentTypeVectorByStore()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return paymentGatewayVector;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new BasicArrayListD();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "findPaymentTypeVectorByStore", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto PaymentGatewayEntity::remove(std::string storeName, BasicPaymentType* paymentType) -> void{

        try {
            
    HashMap<Object*, Object*>* whereHashMap = StdUtil::getInstance()->createHashMap();;
    
whereHashMap->put(JavaString::valueOf(StoreFrontData::getInstance()->NAME), storeName);
    
whereHashMap->put(JavaString::valueOf(PaymentGatewayData::NAME), paymentType->getName());
    
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


    auto PaymentGatewayEntity::createTableStatement() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE);
    
stringBuffer->append(this->tableName);
    
stringBuffer->append(this->sqlStrings->START);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::ID));
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL);
    
stringBuffer->append(EntryData::getInstance()->ENABLE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(StoreFrontData::getInstance()->NAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::NAME));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(PaymentData::METHOD);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::MODE));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::TESTPROTOCOL));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::TESTSERVER));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::TESTPORT));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::TESTPATH));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SERVERPROTOCOL));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SERVER));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SERVERPORT));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SERVERPATH));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(UserData::USERNAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(UserData::PASSWORD);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::TIMEOUT));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::PROXYPROTOCOL));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::PROXYSERVER));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::PROXYPORT));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::PROXYPATH));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::PROXYUSERNAME));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::PROXYPASSWORD));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::PROXYTIMEOUT));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SPECIAL1));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SPECIAL2));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SPECIAL3));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SPECIAL4));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SPECIAL5));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SPECIAL6));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SPECIAL7));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SPECIAL8));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::SPECIAL9));
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(EntryData::getInstance()->LASTMODIFIED);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(EntryData::getInstance()->TIMECREATED);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(this->sqlStrings->PRIMARY_KEY);
    
stringBuffer->append(JavaString::valueOf(PaymentGatewayData::ID));
    
stringBuffer->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto PaymentGatewayEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto PaymentGatewayEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITY_CPP
