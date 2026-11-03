
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERITEMSENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERITEMSENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntity.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/ListIterator.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketReview.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/Item.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/generator/OrderItemIdGenerator.h>

      
#include <org/allbinary/data/tables/TableDataFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      

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
        #include "org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityInterface.h"


OrderItemsEntity::OrderItemsEntity() : AbSqlBean(new HistoryDbInitInfo()), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto OrderItemsEntity::insert(std::string userName, OrderInterface* order) -> void{

    BasicArrayList* vector = new BasicArrayListD();;
    

        try {
            
    BasketInterface* basket = order->getBasket();;
    

    Set* items = basket->getIds();;
    

    std::string ZERO_STRING = TableDataFactory::getInstance()->ZERO_STRING;;
    

    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    

    InventoryEntity* inventoryEntity = InventoryEntityFactory::getInstance()->getInventoryEntityInstance();;
    

    std::vector<Object*> itemsArray = items->toArray();;
    

    int32_t itemsSize = itemsArray.size();;
    




                        for (
    int32_t i = 0;i < itemsSize; i++)
        {

    std::string item = JavaBoxes::unbox<std::string>(itemsArray[i]);;
    

    ItemInterface* itemInterface = inventoryEntity->getItem(item);;
    
vector= new BasicArrayListD();
    
vector->add((new OrderItemIdGenerator())->getNext());
    
vector->add(order->getId());
    
vector->add(TableDataFactory::getInstance()->INTEGER_MAX_VALUE_STRING);
    
vector->add(userName);
    
vector->add(order->getStoreName());
    
vector->add(itemInterface->getId());
    
vector->add(basket->getNumberOf(item)->toString());
    
vector->add(itemInterface->getNewOrUsed());
    
vector->add(itemInterface->getSummary());
    
vector->add(itemInterface->getDistributor());
    
vector->add(itemInterface->getIdUsedByDistributor());
    
vector->add(itemInterface->getProducedBy());
    
vector->add(itemInterface->getProductionDate());
    
vector->add(itemInterface->getStartProductionDate());
    
vector->add(itemInterface->getDescription());
    
vector->add(itemInterface->getKeywords());
    
vector->add(itemInterface->getCategory());
    
vector->add(itemInterface->getType());
    
vector->add(itemInterface->getSmallImage());
    
vector->add(itemInterface->getMediumImage());
    
vector->add(itemInterface->getLargeImage());
    
vector->add(itemInterface->getWeight());
    
vector->add(itemInterface->getPrice()->toString());
    
vector->add(itemInterface->getComment());
    
vector->add(itemInterface->getCustoms());
    
vector->add(itemInterface->getDownloads());
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(EMPTY_STRING);
    
vector->add(ZERO_STRING);
    
vector->add(ZERO_STRING);
    
vector->add(ZERO_STRING);
    
vector->add(ZERO_STRING);
    
this->AbSqlBean::insert(vector);
    
}


                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Command Success Added: ") +JavaString::valueOf(items->size()), this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf("Command Failed: ") +JavaString::valueOf(vector->toString()), this, INSERT, &e);
    

                                    }
                                
}

}


    auto OrderItemsEntity::setStatus(std::string orderId, std::string groupId, std::string status) -> void{

        try {
            
    HashMap<Object*, Object*>* whereHashMap = StdUtil::getInstance()->createHashMap();;
    

    HashMap<Object*, Object*>* updateHashMap = StdUtil::getInstance()->createHashMap();;
    
whereHashMap->put(OrderData::ID, orderId);
    
whereHashMap->put(ShippingMethodData::GROUP, groupId);
    
updateHashMap->put(OrderHistoryData::STATUS, status);
    
AbSqlBean::updateWhere(whereHashMap, updateHashMap);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "setStatus", &e);
    

                                    }
                                
}

}


    auto OrderItemsEntity::isEverythingShipped(std::string orderId) -> bool{

        try {
            
    BasicArrayList* itemStatusVector = AbSqlBean::getColumnWhere(OrderHistoryData::STATUS, OrderData::ID, orderId);;
    

    int32_t size = itemStatusVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string status = JavaBoxes::unbox<std::string>(itemStatusVector->get(index));;
    

                        if(status.compare(OrderHistoryData::SHIPPED) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "isEverythingShipped", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto OrderItemsEntity::getBasketReview(std::string orderId) -> BasketReview*{

        try {
            
    BasketReview* basketReview = new BasketReview();;
    

    HashMap<Object*, Object*>* keyValues = StdUtil::getInstance()->createHashMap();;
    
keyValues->put(OrderData::ID, orderId);
    

    BasicArrayList* items = AbSqlBean::getRows(keyValues);;
    

    EntryData* entryData = EntryData::getInstance();;
    

                        if(items != 
                                    nullptr
                                 && items->size() > 0)
                        
                                    {
                                    
    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    

    std::vector<Object*> itemsArray = items->toArray();;
    

    int32_t itemsSize = itemsArray.size();;
    




                        for (
    int32_t i = 0;i < itemsSize; i++)
        {

    HashMap<Object*, Object*>* itemHashMap = dynamic_cast<HashMap*>(itemsArray[i]);;
    
itemHashMap->put(basicItemData->INBASKETS, EMPTY_STRING);
    
itemHashMap->put(entryData->ENABLE, EMPTY_STRING);
    
itemHashMap->put(entryData->TIMECREATED, EMPTY_STRING);
    
itemHashMap->put(entryData->LASTMODIFIED, EMPTY_STRING);
    
itemHashMap->put(basicItemData->GROUPS, EMPTY_STRING);
    
itemHashMap->put(basicItemData->OPTIONS, EMPTY_STRING);
    
itemHashMap->put(basicItemData->PERMISSIONS, EMPTY_STRING);
    
itemHashMap->put(basicItemData->SPECIALS, EMPTY_STRING);
    

    Item* item = new Item(itemHashMap);;
    
basketReview->addItem(item);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return basketReview;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "getBasketReview", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto OrderItemsEntity::createTableStatement() -> std::string{

    EntryData* entryData = EntryData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("CREATE TABLE ");
    
stringBuffer->append(this->tableName);
    
stringBuffer->append(" (");
    
stringBuffer->append(entryData->ID);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(OrderData::ID);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(ShippingMethodData::GROUP);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(UserData::USERNAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(StoreFrontData::getInstance()->NAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->ID);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->NUMBER);
    
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
    
stringBuffer->append(basicItemData->WEIGHT);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(basicItemData->PRICE);
    
stringBuffer->append(" VARCHAR(20) NOT NULL,");
    
stringBuffer->append(basicItemData->COMMENT);
    
stringBuffer->append(this->sqlTypeStrings->BLOB_NOT_NULL);
    
stringBuffer->append(basicItemData->CUSTOMS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(basicItemData->DOWNLOADS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(ShippingMethodData::COST);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(OrderHistoryData::TAX);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(ShippingAddressData::NAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(ShippingAddressData::STREET);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(ShippingAddressData::CITY);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(ShippingAddressData::STATE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(ShippingAddressData::CODE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(ShippingAddressData::COUNTRY);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(ShippingMethodData::NAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(entryData->SPECIAL);
    
stringBuffer->append(" VARCHAR(255) ,");
    
stringBuffer->append(OrderHistoryData::STATUS);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(OrderHistoryData::CANCELINFO);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(OrderHistoryData::CANCELTYPE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(OrderHistoryData::SHIPPEDDATE);
    
stringBuffer->append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer->append(OrderHistoryData::ORDERDATE);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(OrderHistoryData::TRANSDATE);
    
stringBuffer->append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer->append(OrderHistoryData::CANCELDATE);
    
stringBuffer->append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer->append("PRIMARY KEY(");
    
stringBuffer->append(entryData->ID);
    
stringBuffer->append(") )");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto OrderItemsEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto OrderItemsEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ORDER_ORDERITEMSENTITY_CPP
