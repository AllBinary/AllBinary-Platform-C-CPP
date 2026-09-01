
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Random.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>

      
#include <org/allbinary/data/generator/PaymentIdGenerator.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentEntityInterface.h"

class PaymentEntity: public AbSqlBean, public PaymentEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string tableName = "payment";

public: PaymentEntity(){
            super(UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: std::string getLastId(std::string userName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getLargestIntegerInColumnWhere(PaymentData::ID, UserData::USERNAME, userName);;
    
}


    public: void setDefault(std::string userName, Integer index){

        try {
            
    HashMap<any, any> updateKeyAndValue = HashMap<any, any>();;
    

    HashMap<any, any> whereKeyAndValue = HashMap<any, any>();;
    
whereKeyAndValue.put(UserData::USERNAME, userName);
    

    PaymentInterface paymentInterface = this->getDefault(userName);;
    

                        if(paymentInterface != 
                                    nullptr
                                )
                        
                                    {
                                    updateKeyAndValue.put(EntryData::getInstance().DEFAULT, StringUtil::getInstance().EMPTY_STRING);
    
whereKeyAndValue.put(PaymentData::ID, paymentInterface.getId());
    
super.updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                                    }
                                
updateKeyAndValue.put(EntryData::getInstance().DEFAULT, EntryData::getInstance().DEFAULT);
    
whereKeyAndValue.put(PaymentData::ID, std::to_string(index));
    
super.updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "setDefault");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "setDefault", e);
    

                                    }
                                
}

}


    public: Vector get(std::string userName){

        try {
            
    Vector paymentVector = Vector();;
    

    HashMap<any, any> keyAndValue = HashMap<any, any>();;
    
keyAndValue.put(UserData::USERNAME, userName);
    

    Vector paymentList = super.getRows(keyAndValue);;
    

    int32_t size = paymentList.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<any, any> paymentHashMap = paymentList.get(index) as HashMap<any, any>;;
    

    Payment payment = Payment(paymentHashMap);;
    

                        if(payment != 
                                    nullptr
                                )
                        
                                    {
                                    paymentVector.add(payment);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentVector;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, this->commonStrings.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: PaymentInterface getDefault(std::string userName){

        try {
            
    HashMap<any, any> paymentHashMap = HashMap<any, any>();;
    

    HashMap<any, any> updateKeyAndValue = HashMap<any, any>();;
    
updateKeyAndValue.put(EntryData::getInstance().DEFAULT, EntryData::getInstance().DEFAULT);
    
updateKeyAndValue.put(UserData::USERNAME, userName);
    
paymentHashMap= super.getRow(updateKeyAndValue);
    

                        if(paymentHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    Payment payment = Payment(paymentHashMap);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "getDefault");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return payment as PaymentInterface;
    

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
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "getDefault", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: void remove(std::string userName, Integer index){

        try {
            
    HashMap<any, any> whereHashMap = HashMap<any, any>();;
    
whereHashMap.put(UserData::USERNAME, userName);
    
whereHashMap.put(PaymentData::ID, std::to_string(index) as string);
    
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


    public: void add(std::string userName, PaymentInterface paymentInterface){

        try {
            
    Vector vector = Vector();;
    
vector.add(PaymentIdGenerator().getNext());
    
vector.add(userName);
    
vector.add(StringUtil::getInstance().EMPTY_STRING);
    
vector.add(paymentInterface.getName());
    
vector.add(paymentInterface.getType());
    
vector.add(paymentInterface.getExpiration());
    

    int32_t random = Random().nextInt(SuperCrypt::KEYMAX);;
    
vector.add(SuperCrypt(random).encrypt(paymentInterface.getNumber()));
    
vector.add(Integer(random).toString());
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
vector.add(time);
    
super.insert(vector);
    

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

    EntryData entryData = EntryData::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE).append(tableName).append(this->sqlStrings.START).append(PaymentData::ID).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL).append(UserData::USERNAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(entryData.DEFAULT).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(PaymentData::NAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(PaymentData::TYPE).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(PaymentData::EXPIRATION).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(PaymentData::NUMBER).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(entryData.ENCRYPTION).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(entryData.TIMECREATED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(this->sqlStrings.PRIMARY_KEY).append(PaymentData::ID).append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this->createTableStatement());;
    
}


    public: std::string drop(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

