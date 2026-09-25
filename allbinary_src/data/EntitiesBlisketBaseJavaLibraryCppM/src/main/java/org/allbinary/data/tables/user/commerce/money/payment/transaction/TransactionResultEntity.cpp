
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
        



            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Long.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransactionResultEntityInterface.h"

class TransactionResultEntity: public AbSqlBean, public TransactionResultEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string tableName = "vresults";

public: TransactionResultEntity(){
            super(UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: void remove(std::string userName, std::string orderNumber){

        try {
            
    HashMap<any, any> whereHashMap = StdUtil::getInstance().createHashMap();;
    
whereHashMap.put(OrderData::ID, orderNumber as string);
    
whereHashMap.put(UserData::USERNAME, userName);
    
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


    public: void add(std::string userName, std::string orderNumber, TransactionResultInterface transactionResultInterface){

        try {
            
    BasicArrayList values = BasicArrayListD();;
    
values.add(orderNumber);
    
values.add(userName);
    
values.addAllList(transactionResultInterface.getValues());
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
values.add(time);
    
values.add(time);
    
super.insert(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "add");
    

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


    public: TransactionResultInterface getTransactionResultInterface(std::string orderNumber){

        try {
            
    HashMap<any, any> resultHashMap = StdUtil::getInstance().createHashMap();;
    

    HashMap<any, any> updateKeyAndValue = StdUtil::getInstance().createHashMap();;
    
updateKeyAndValue.put(OrderData::ID, orderNumber);
    
resultHashMap= super.getRow(updateKeyAndValue);
    

                        if(resultHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    TransactionResult transactionResult = TransactionResult(resultHashMap);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "getTransactionResultInterface");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return transactionResult as TransactionResultInterface;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "getTransactionResultInterface", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: std::string createTableStatement(){

    PaymentTransactionKeysFactory paymentTransactionKeysFactory = PaymentTransactionKeysFactory::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE).append(tableName).append(this->sqlStrings.START).append(OrderData::ID).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(UserData::USERNAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(paymentTransactionKeysFactory.RESULT.toString()).append(this->sqlTypeStrings.MAX_INT_NOT_NULL).append(paymentTransactionKeysFactory.PNREF.toString()).append(this->sqlTypeStrings.TWELVE_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(paymentTransactionKeysFactory.RESPMSG.toString()).append(this->sqlTypeStrings.BLOB_NOT_NULL).append(paymentTransactionKeysFactory.AUTHCODE.toString()).append(this->sqlTypeStrings.SIX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.AVSADDR.toString()).append(this->sqlTypeStrings.ONE_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(paymentTransactionKeysFactory.AVSZIP.toString()).append(this->sqlTypeStrings.ONE_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.ORIGRESULT.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.STATUS.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(paymentTransactionKeysFactory.FRAUDCODE.toString()).append(this->sqlTypeStrings.TWO_INT_NOT_NULL);
    
stringBuffer.append(paymentTransactionKeysFactory.FRAUDMSG.toString()).append(this->sqlTypeStrings.MAX_INT_NOT_NULL);
    
stringBuffer.append(paymentTransactionKeysFactory.ERRCODE.toString()).append(this->sqlTypeStrings.MAX_INT_NOT_NULL);
    
stringBuffer.append(paymentTransactionKeysFactory.SCORE.toString()).append(this->sqlTypeStrings.THREE_INT_NOT_NULL);
    
stringBuffer.append(paymentTransactionKeysFactory.REASON1.toString()).append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(paymentTransactionKeysFactory.REASON2.toString()).append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(paymentTransactionKeysFactory.REASON3.toString());
    
stringBuffer.append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(paymentTransactionKeysFactory.EXCEPTION1.toString()).append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(paymentTransactionKeysFactory.EXCEPTION2.toString()).append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(paymentTransactionKeysFactory.EXCEPTION3.toString()).append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(paymentTransactionKeysFactory.EXCEPTION4.toString()).append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(paymentTransactionKeysFactory.EXCEPTION5.toString()).append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(paymentTransactionKeysFactory.EXCEPTION6.toString()).append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(paymentTransactionKeysFactory.EXCEPTION7.toString()).append(this->sqlTypeStrings.FOUR_INT_NOT_NULL).append(EntryData::getInstance().LASTMODIFIED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(EntryData::getInstance().TIMECREATED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(this->sqlStrings.PRIMARY_KEY).append(OrderData::ID).append(this->sqlStrings.END);
    



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

            

