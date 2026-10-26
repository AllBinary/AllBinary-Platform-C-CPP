
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentGatewayEntityInterface.h"

class PaymentGatewayEntity: public AbSqlBean, public PaymentGatewayEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string tableName = "paymentgateways";

public: PaymentGatewayEntity() : AbSqlBean(UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.CONSTRUCTOR, this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


    public: void add(PaymentGatewayInterface paymentGatewayInterface){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "add");
    

                                    }
                                

    BasicArrayList vector = BasicArrayListD();;
    
vector.add(PaymentGatewayIdGenerator().getNext());
    
vector.addAllList(PaymentGatewayEncryptedMapping(paymentGatewayInterface).toVector());
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
vector.add(time);
    
vector.add(time);
    
super.insert(vector);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.END, this, "add");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "add", e);
    

                                    }
                                
}

}


    public: void update(PaymentGatewayInterface paymentGatewayInterface){

        try {
            
    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
paymentGatewayInterface.setLastModified(time);
    

    HashMap<Object*, Object*> whereKeyValuePairs = StdUtil::getInstance().createHashMap();;
    
whereKeyValuePairs.put(StoreFrontData::getInstance().NAME.toString(), paymentGatewayInterface.getStoreName());
    
whereKeyValuePairs.put(PaymentGatewayData::NAME.toString(), paymentGatewayInterface.getName());
    

                        if(whereKeyValuePairs.get(EntryData::getInstance().TIMECREATED) != 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Don't update TimeCreated for update");
                    

                                    }
                                

    HashMap<Object*, Object*> updateHashMap = PaymentGatewayEncryptedMapping(paymentGatewayInterface).toHashMap();;
    
super.updateWhere(whereKeyValuePairs, updateHashMap);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "update");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "update", e);
    

                                    }
                                
}

}


    public: PaymentGatewayInterface getPaymentGatewayInterface(std::string storeName, BasicPaymentType paymentType){

        try {
            
    HashMap<Object*, Object*> paymentGatewayHashMap = StdUtil::getInstance().createHashMap();;
    

    HashMap<Object*, Object*> whereKeyAndValue = StdUtil::getInstance().createHashMap();;
    
whereKeyAndValue.put(StoreFrontData::getInstance().NAME.toString(), storeName);
    
whereKeyAndValue.put(PaymentGatewayData::NAME.toString(), paymentType.getName());
    
paymentGatewayHashMap= super.getRow(whereKeyAndValue);
    

                        if(paymentGatewayHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string userName = paymentGatewayHashMap.get(UserData::USERNAME.toString());;
    

    std::string password = paymentGatewayHashMap.get(UserData::PASSWORD.toString());;
    

    std::string special1 = paymentGatewayHashMap.get(PaymentGatewayData::SPECIAL1.toString());;
    

    std::string special2 = paymentGatewayHashMap.get(PaymentGatewayData::SPECIAL2.toString());;
    

    std::string special3 = paymentGatewayHashMap.get(PaymentGatewayData::SPECIAL3.toString());;
    

    std::string special4 = paymentGatewayHashMap.get(PaymentGatewayData::SPECIAL4.toString());;
    

    std::string special5 = paymentGatewayHashMap.get(PaymentGatewayData::SPECIAL5.toString());;
    

    std::string special6 = paymentGatewayHashMap.get(PaymentGatewayData::SPECIAL6.toString());;
    

    std::string special7 = paymentGatewayHashMap.get(PaymentGatewayData::SPECIAL7.toString());;
    

    std::string special8 = paymentGatewayHashMap.get(PaymentGatewayData::SPECIAL8.toString());;
    

    std::string special9 = paymentGatewayHashMap.get(PaymentGatewayData::SPECIAL9.toString());;
    

    SuperCrypt superCrypt = SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
paymentGatewayHashMap.put(UserData::USERNAME.toString(), superCrypt.decrypt(userName));
    
paymentGatewayHashMap.put(UserData::PASSWORD.toString(), superCrypt.decrypt(password));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL1.toString(), superCrypt.decrypt(special1));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL2.toString(), superCrypt.decrypt(special2));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL3.toString(), superCrypt.decrypt(special3));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL4.toString(), superCrypt.decrypt(special4));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL5.toString(), superCrypt.decrypt(special5));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL6.toString(), superCrypt.decrypt(special6));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL7.toString(), superCrypt.decrypt(special7));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL8.toString(), superCrypt.decrypt(special8));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL9.toString(), superCrypt.decrypt(special9));
    

    PaymentGatewayInterface paymentGatewayInterface = PaymentGatewayInterfaceFactory().getInstance(paymentGatewayHashMap);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "getPaymentGatewayInterface()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentGatewayInterface;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentGatewayInterfaceFactory().getInstance(paymentType);;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put("Command Failed for paymentType: " +paymentType.getName(), this, "getPaymentGatewayInterface", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: BasicArrayList findPaymentTypeVectorByStore(std::string storeName){

        try {
            
    BasicArrayList paymentGatewayNameVector = BasicArrayListD();;
    
paymentGatewayNameVector= super.getColumnWhere(PaymentGatewayData::NAME.toString(), StoreFrontData::getInstance().NAME.toString(), storeName);
    

                        if(paymentGatewayNameVector != 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicArrayList paymentGatewayVector = BasicArrayListD();;
    

    int32_t size = paymentGatewayNameVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string paymentTypeString = paymentGatewayNameVector.get(i);;
    

    BasicPaymentType paymentType = BasicPaymentTypeUtil::getInstance().get(paymentTypeString);;
    
paymentGatewayVector.add(paymentType);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "findPaymentTypeVectorByStore()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentGatewayVector;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListD();
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "findPaymentTypeVectorByStore", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: void remove(std::string storeName, BasicPaymentType paymentType){

        try {
            
    HashMap<Object*, Object*> whereHashMap = StdUtil::getInstance().createHashMap();;
    
whereHashMap.put(StoreFrontData::getInstance().NAME.toString(), storeName);
    
whereHashMap.put(PaymentGatewayData::NAME.toString(), paymentType.getName());
    
super.deleteWhere(whereHashMap);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "remove");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "remove", e);
    

                                    }
                                
}

}


    public: std::string createTableStatement(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE);
    
stringBuffer.append(this->tableName);
    
stringBuffer.append(this->sqlStrings.START);
    
stringBuffer.append(PaymentGatewayData::ID.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL);
    
stringBuffer.append(EntryData::getInstance().ENABLE);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(StoreFrontData::getInstance().NAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::NAME.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentData::METHOD);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::MODE.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::TESTPROTOCOL.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::TESTSERVER.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::TESTPORT.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::TESTPATH.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SERVERPROTOCOL.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SERVER.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SERVERPORT.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SERVERPATH.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(UserData::USERNAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(UserData::PASSWORD);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::TIMEOUT.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::PROXYPROTOCOL.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::PROXYSERVER.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::PROXYPORT.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::PROXYPATH.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::PROXYUSERNAME.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::PROXYPASSWORD.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::PROXYTIMEOUT.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SPECIAL1.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SPECIAL2.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SPECIAL3.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SPECIAL4.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SPECIAL5.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SPECIAL6.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SPECIAL7.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SPECIAL8.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentGatewayData::SPECIAL9.toString());
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(EntryData::getInstance().LASTMODIFIED);
    
stringBuffer.append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer.append(EntryData::getInstance().TIMECREATED);
    
stringBuffer.append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer.append(this->sqlStrings.PRIMARY_KEY);
    
stringBuffer.append(PaymentGatewayData::ID.toString());
    
stringBuffer.append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this->createTableStatement());;
    
}


    public: std::string dropTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

