
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/advertisement/AdvertisementData.h>

      
#include <org/allbinary/business/advertisement/AdvertisementInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementsEntityInterface.h"

class AdvertisementsEntity: public AbSqlBean, public AdvertisementsEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "advertisements";

    private: const std::string _INDEX = "_index";

public: AdvertisementsEntity() : AbSqlBean(UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: void delete_(std::string value){

        try {
            super.deleteWhere(EntryData::getInstance().ID, value);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, this->commonStrings.delete_);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, this->commonStrings.delete_, e);
    

                                    }
                                
}

}


    public: BasicArrayList get(std::string storeName){

    HashMap<Object*, Object*> keysAndValues = StdUtil::getInstance().createHashMap();;
    
keysAndValues.put(StoreFrontData::getInstance().NAME, storeName);
    

    BasicArrayList hashMapVector = super.getRows(keysAndValues);;
    

    BasicArrayList vector = BasicArrayListD();;
    

    int32_t size = hashMapVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*> hashMap = hashMapVector.get(index);;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public: AdvertisementInterface get(std::string storeName, std::string advertismentName){

    HashMap<Object*, Object*> keysAndValues = StdUtil::getInstance().createHashMap();;
    
keysAndValues.put(StoreFrontData::getInstance().NAME, storeName);
    
keysAndValues.put(AdvertisementData::getInstance().NAME, advertismentName);
    

    HashMap<Object*, Object*> hashMap = super.getRow(keysAndValues);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string createTableStatement(){

    AdvertisementData advertisementData = AdvertisementData::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE);
    
stringBuffer.append(this->getTableName()).append(this->sqlStrings.START).append(advertisementData.NAME).append(_INDEX).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(advertisementData.NAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(StoreFrontData::getInstance().NAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(advertisementData.DESCRIPTION).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(DynamicObjectData::NAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(EntryData::getInstance().TIMECREATED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(EntryData::getInstance().LASTMODIFIED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(this->sqlStrings.PRIMARY_KEY).append(advertisementData.NAME).append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string createTable(){

    std::string returnStr = super.createTable(this->createTableStatement());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnStr;
    
}


    public: void update(HashMap<Object*, Object*> updatedValues){
super.updateWhere(EntryData::getInstance().ID, updatedValues.get(EntryData::getInstance().ID), updatedValues);
    
}


    public: std::string dropTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

