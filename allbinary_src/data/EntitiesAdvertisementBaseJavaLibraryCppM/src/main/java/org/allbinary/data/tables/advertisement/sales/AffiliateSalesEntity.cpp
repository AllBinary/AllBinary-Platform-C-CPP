
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/group/GroupData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/advertisement/sales/AffiliateSalesEntityInterface.h"

class AffiliateSalesEntity: public AbSqlBean, public AffiliateSalesEntityInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "affiliate";

public: AffiliateSalesEntity() : AbSqlBean(new UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: void delete_(std::string value){

        try {
            super.deleteWhere(StoreFrontData::getInstance()->NAME, value);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings.SUCCESS, this, this->commonStrings.delete_);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, this->commonStrings.delete_, &e);
    

                                    }
                                
}

}


    public: std::string createTableStatement(){

    EntryData* entryData = EntryData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings.CREATE_TABLE);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings.START);
    
stringBuffer->append(entryData->ID)->append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(StoreFrontData::getInstance()->NAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(GroupData::NAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(DynamicObjectData::NAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(entryData->TIMECREATED)->append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(entryData->LASTMODIFIED)->append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings.PRIMARY_KEY)->append(entryData->ID)->append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: std::string createTable(){

    std::string returnStr = super.createTable(this->createTableStatement());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnStr;
    
}


    public: void update(HashMap<Object*, Object*>* updatedValues){
super.updateWhere(EntryData::getInstance()->ID, updatedValues->get(EntryData::getInstance()->ID), updatedValues);
    
}


    public: std::string dropTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

