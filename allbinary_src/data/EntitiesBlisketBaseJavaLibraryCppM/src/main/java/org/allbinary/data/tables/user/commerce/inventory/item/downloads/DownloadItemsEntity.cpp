
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_DOWNLOADS_DOWNLOADITEMSENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_DOWNLOADS_DOWNLOADITEMSENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityInterface.h"


DownloadItemsEntity::DownloadItemsEntity() : AbSqlBean(new InventoryDbInitInfo()), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto DownloadItemsEntity::insert(BasicArrayList* values) -> void{

        try {
            AbSqlBean::insert(values);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, INSERT, &e);
    

                                    }
                                
}

}


    auto DownloadItemsEntity::delete_(std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(DownloadItemData::ID, value);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, this->commonStrings->delete_);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->delete_, &e);
    

                                    }
                                
}

}


    auto DownloadItemsEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(DownloadItemData::ID, JavaBoxes::unbox<std::string>(updatedValues->get(DownloadItemData::ID)), updatedValues);
    
}


    auto DownloadItemsEntity::getForItem(std::string id) -> BasicArrayList*{

    BasicArrayList* returnVector = new BasicArrayListD();;
    

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(basicItemData->ID, id);
    

    BasicArrayList* vector = AbSqlBean::getRows(keysAndValues);;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* hashMap = dynamic_cast<HashMap*>(vector->get(index));;
    
returnVector->add(new DownloadableItem(hashMap));
    
}


                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Found: ") +JavaString::valueOf(size), this, "getForItem");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnVector;
    
}


    auto DownloadItemsEntity::getForItem(std::string id, std::string downloadItemId) -> BasicArrayList*{

    BasicArrayList* returnVector = new BasicArrayListD();;
    

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(basicItemData->ID, id);
    
keysAndValues->put(DownloadItemData::ID, downloadItemId);
    

    BasicArrayList* vector = AbSqlBean::getRows(keysAndValues);;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* hashMap = dynamic_cast<HashMap*>(vector->get(index));;
    
returnVector->add(new DownloadableItem(hashMap));
    
}


                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Found: ") +JavaString::valueOf(size), this, "getForItem");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnVector;
    
}


    auto DownloadItemsEntity::createTableStatement() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE)->append(tableName)->append(this->sqlStrings->START)->append(DownloadItemData::ID)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(basicItemData->ID)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->ENABLE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(DownloadItemData::SPECIAL_NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(DownloadItemData::VERSION)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(DownloadItemData::CHANGES)->append(this->sqlTypeStrings->BLOB_NOT_NULL)->append(DownloadItemData::SYSTEM)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(DownloadItemData::PLATFORM)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(DownloadItemData::LICENSE_FILE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(DownloadItemData::FILE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(DownloadItemData::SIZE)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(DownloadItemData::VALID_TIME)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(DownloadItemData::RETRIES)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(DownloadItemData::ID)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto DownloadItemsEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto DownloadItemsEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_DOWNLOADS_DOWNLOADITEMSENTITY_CPP
