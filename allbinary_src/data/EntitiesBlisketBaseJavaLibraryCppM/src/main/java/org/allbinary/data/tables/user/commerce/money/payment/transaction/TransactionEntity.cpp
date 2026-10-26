
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
        #include "TransactionEntityInterface.h"

class TransactionEntity: public AbSqlBean, public TransactionEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string tableName = "vtrans";

public: TransactionEntity() : AbSqlBean(UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: void remove(std::string userName, std::string orderNumber){

        try {
            
    HashMap<Object*, Object*> whereHashMap = StdUtil::getInstance().createHashMap();;
    
whereHashMap.put(OrderData::ID, orderNumber);
    
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


    public: void add(std::string userName, std::string orderNumber, PaymentTransactionInterface paymentTransactionInterface){

        try {
            
    BasicArrayList values = BasicArrayListD();;
    
values.add(orderNumber);
    
values.add(userName);
    
values.addAllList(paymentTransactionInterface.toVector());
    

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


    public: std::string createTableStatement(){

    PaymentTransactionKeysFactory paymentTransactionKeysFactory = PaymentTransactionKeysFactory::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE);
    
stringBuffer.append(this->tableName);
    
stringBuffer.append(this->sqlStrings.START);
    
stringBuffer.append(OrderData::ID).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(UserData::USERNAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.TRXTYPE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.TENDER.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.ACCT.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.EXPDATE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.AMT.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.AUTHCODE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.MICR.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.CHECKNUM.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.NAME.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.STREET.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.CITY.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.STATE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.ZIP.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.DL.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.EMAIL.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.COMMENT1.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.COMMENT2.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.ORIGID.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.PONUM.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.DESC.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.DESC1TO4.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.INVNUM.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SHIPTOZIP.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SWIPE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.TAXAMT.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.COMMCARD.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.DUTYAMT.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.FREIGHTAMT.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.ORDERDATE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.TAXEXEMPT.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.COUNTRYCODE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.CUSTCODE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.CVV2.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.ABA.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.ACCTTYPE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.DISCOUNT.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.FIRSTNAME.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.LASTNAME.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SHIPFROMZIP.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.PRENOTE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.CHKTYPE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.DOB.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.PHONENUM.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SS.toString()).append(" VARCHAR(30) NOT NULL,").append(paymentTransactionKeysFactory.COMPANYNAME.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.COUNTRY.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SHIPTOCITY.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SHIPTOFIRSTNAME.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SHIPTOLASTNAME.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SHIPTOSTATE.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SHIPTOSTREET.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SPECIAL1.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SPECIAL2.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(paymentTransactionKeysFactory.SPECIAL3.toString()).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(EntryData::getInstance().LASTMODIFIED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(EntryData::getInstance().TIMECREATED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(this->sqlStrings.PRIMARY_KEY).append(OrderData::ID).append(this->sqlStrings.END);
    



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

            

