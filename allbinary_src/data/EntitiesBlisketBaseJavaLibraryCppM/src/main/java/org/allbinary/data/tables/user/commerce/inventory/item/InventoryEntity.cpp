
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_INVENTORYENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_INVENTORYENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItem.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      

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
        #include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h"


InventoryEntity::InventoryEntity() : AbSqlBean(new InventoryDbInitInfo()), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto InventoryEntity::insert(BasicArrayList* values) -> void{

        try {
            AbSqlBean::insert(values);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, INSERT, &e);
    

                                    }
                                
}

}


    auto InventoryEntity::delete_(std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(basicItemData->ID, value);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, this->commonStrings->delete_);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->delete_, &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto InventoryEntity::getItems(StoreFrontInterface* storeFrontInterface) -> BasicArrayList*{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Getting Items For: ") +JavaString::valueOf(storeFrontInterface->getName()), this, "getItems");
    

                                    }
                                

    BasicArrayList* itemVector = new BasicArrayListD();;
    

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    

    BasicArrayList* itemHashMapVector = AbSqlBean::getRows(keysAndValues);;
    

    int32_t size = itemHashMapVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    HashMap<Object*, Object*>* itemHashMap = dynamic_cast<HashMap*>(itemHashMapVector->get(i));;
    

                        if(itemHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string category = JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->CATEGORY));;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(category) && JavaString::startsWith(category, storeFrontInterface->getCategoryPath()))
                        
                                    {
                                    itemVector->add(new BasicItem(itemHashMap));
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return itemVector;
    
}


                //@Throws(MoneyException.constructor)
            
    auto InventoryEntity::getItem(std::string id) -> ItemInterface*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(basicItemData->ID, id);
    

    HashMap<Object*, Object*>* itemHashMap = AbSqlBean::getRow(keysAndValues);;
    

                        if(itemHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new BasicItem(itemHashMap);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            
}


    auto InventoryEntity::getWeight(std::string id) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::getField(basicItemData->ID, id, basicItemData->WEIGHT);;
    
}


    auto InventoryEntity::createTableStatement() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE);
    
stringBuffer->append(this->tableName);
    
stringBuffer->append(this->sqlStrings->START);
    
stringBuffer->append(basicItemData->ID);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->NUMBER);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->INBASKETS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->WEIGHT);
    
stringBuffer->append(" VARCHAR(20) NOT NULL,");
    
stringBuffer->append(EntryData::getInstance()->ENABLE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->NEWORUSED);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->SUMMARY);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->DISTRIBUTOR);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->IDUSEDBYDISTRIBUTOR);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->PRODUCEDBY);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->PRODUCTIONDATE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->STARTPRODUCTIONDATE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->DESCRIPTION);
    
stringBuffer->append(this->sqlTypeStrings->BLOB_NOT_NULL);
    
stringBuffer->append(basicItemData->KEYWORDS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->CATEGORY);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->TYPE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->SMALLIMAGE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->MEDIUMIMAGE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->LARGEIMAGE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(EntryData::getInstance()->LASTMODIFIED);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(EntryData::getInstance()->TIMECREATED);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->PRICE);
    
stringBuffer->append(" VARCHAR(20) NOT NULL,");
    
stringBuffer->append(basicItemData->COMMENT);
    
stringBuffer->append(this->sqlTypeStrings->BLOB_NOT_NULL);
    
stringBuffer->append(basicItemData->CUSTOMS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->DOWNLOADS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->GROUPS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->OPTIONS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->PERMISSIONS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->SPECIALS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(this->sqlStrings->PRIMARY_KEY);
    
stringBuffer->append(basicItemData->ID);
    
stringBuffer->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto InventoryEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto InventoryEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(basicItemData->ID, JavaBoxes::unbox<std::string>(updatedValues->get(basicItemData->ID)), updatedValues);
    
}


    auto InventoryEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}


    auto InventoryEntity::deleteWhere(std::string key, std::string value) -> void{
AbSqlBean::deleteWhere(key, value);
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_INVENTORYENTITY_CPP
