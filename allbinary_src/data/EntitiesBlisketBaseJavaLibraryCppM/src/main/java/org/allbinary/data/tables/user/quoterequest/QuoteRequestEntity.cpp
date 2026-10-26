
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
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/quoterequest/QuoteRequestData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "QuoteRequestEntityInterface.h"

class QuoteRequestEntity: public AbSqlBean, public QuoteRequestEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string tableName = "quoterequest";

public: QuoteRequestEntity() : AbSqlBean(UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: void insert(BasicArrayList values){

        try {
            super.insert(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, INSERT, e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: QuoteRequest get(std::string userName, int32_t id){

    HashMap<Object*, Object*> row = StdUtil::getInstance().createHashMap();;
    
row.put(UserData::USERNAME, userName);
    
row.put(QuoteRequestData::getInstance().ID, std::to_string(id));
    

    HashMap<Object*, Object*> quoteRequestHashMap = super.getRow(row);;
    

                        if(quoteRequestHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org::allbinary::business::user::quoterequest::QuoteRequest(quoteRequestHashMap);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public: BasicArrayList getIds(std::string userName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getColumnWhere(QuoteRequestData::getInstance().ID, UserData::USERNAME, userName);;
    
}


    public: void deleteWhere(std::string key, std::string value){

        try {
            super.deleteWhere(key, value);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "deleteWhere");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "deleteWhere", e);
    

                                    }
                                
}

}


    public: std::string createTableStatement(){

    QuoteRequestData quoteRequestData = QuoteRequestData::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE).append(tableName).append(this->sqlStrings.START);
    
stringBuffer.append(quoteRequestData.ID).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer.append(UserData::USERNAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(quoteRequestData.PROJECT_INFO);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(quoteRequestData.CUSTOMER_COMMENTS);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(quoteRequestData.BUDGET);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(quoteRequestData.TIMEFRAME);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(quoteRequestData.COMMENTS);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(EntryData::getInstance().TIMECREATED);
    
stringBuffer.append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer.append(EntryData::getInstance().LASTMODIFIED);
    
stringBuffer.append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer.append(this->sqlStrings.PRIMARY_KEY);
    
stringBuffer.append(quoteRequestData.ID);
    
stringBuffer.append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this->createTableStatement());;
    
}


    public: std::string dropTable(){

    std::string result = dropTable.toCharArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public: void update(std::string userName, HashMap<Object*, Object*> updatedValues){
super.updateWhere(UserData::USERNAME, userName, updatedValues);
    
}


};

            

