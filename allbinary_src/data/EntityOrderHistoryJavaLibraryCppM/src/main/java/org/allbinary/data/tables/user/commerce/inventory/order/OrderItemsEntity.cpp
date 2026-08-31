
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
        
#include <java/util/HashMap.h>

      
#include <java/util/ListIterator.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderItemsEntityInterface.h"

class OrderItemsEntity: public AbSqlBean: public OrderItemsEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const tableName: string = "orderitems";

public constructor (){
            super(new HistoryDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setTableName(this.tableName);
    
}


    public insert(string userName, OrderInterface order){

    vector: Vector = new Vector();;
    

        try {
            
    basket: BasketInterface = order.getBasket()!;;
    

    items: Set = basket.getIds()!;;
    

    ZERO_STRING: string = TableDataFactory.getInstance()!.ZERO_STRING;;
    

    EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

    inventoryEntity: InventoryEntity = InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!;;
    

    itemsArray: std::vector<any> = items.toArray()!;;
    

    itemsSize: int32_t = itemsArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < itemsSize; i++)
        {

    item: string = itemsArray[i]! as string;;
    

    itemInterface: ItemInterface = inventoryEntity!.getItem(item)!;;
    
vector= new Vector();
    
vector.add(new OrderItemIdGenerator().getNext());
    
vector.add(order.getId());
    
vector.add(TableDataFactory.getInstance()!.INTEGER_MAX_VALUE_STRING);
    
vector.add(userName);
    
vector.add(order.getStoreName());
    
vector.add(itemInterface!.getId());
    
vector.add(basket.getNumberOf(item)!.toString());
    
vector.add(itemInterface!.getNewOrUsed());
    
vector.add(itemInterface!.getSummary());
    
vector.add(itemInterface!.getDistributor());
    
vector.add(itemInterface!.getIdUsedByDistributor());
    
vector.add(itemInterface!.getProducedBy());
    
vector.add(itemInterface!.getProductionDate());
    
vector.add(itemInterface!.getStartProductionDate());
    
vector.add(itemInterface!.getDescription());
    
vector.add(itemInterface!.getKeywords());
    
vector.add(itemInterface!.getCategory());
    
vector.add(itemInterface!.getType());
    
vector.add(itemInterface!.getSmallImage());
    
vector.add(itemInterface!.getMediumImage());
    
vector.add(itemInterface!.getLargeImage());
    
vector.add(itemInterface!.getWeight());
    
vector.add(itemInterface!.getPrice()!.toString());
    
vector.add(itemInterface!.getComment());
    
vector.add(itemInterface!.getCustoms());
    
vector.add(itemInterface!.getDownloads());
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(EMPTY_STRING);
    
vector.add(ZERO_STRING);
    
vector.add(ZERO_STRING);
    
vector.add(ZERO_STRING);
    
vector.add(ZERO_STRING);
    
this.insert(vector);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Command Success Added: " +items.length, this, INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put("Command Failed: " +vector.toString(), this, INSERT, e);
    

                                    }
                                
}

}


    public setStatus(string orderId, string groupId, string status){

        try {
            
    whereHashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    updateHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
whereHashMap!.put(OrderData.ID, orderId);
    
whereHashMap!.put(ShippingMethodData.GROUP, groupId);
    
updateHashMap!.put(OrderHistoryData.STATUS, status);
    
super.updateWhere(whereHashMap, updateHashMap);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "setStatus", e);
    

                                    }
                                
}

}


    public bool isEverythingShipped(string orderId){

        try {
            
    itemStatusVector: Vector = super.getColumnWhere(OrderHistoryData.STATUS, OrderData.ID, orderId)!;;
    

    itemStatusIter: ListIterator = itemStatusVector!.listIterator()!;;
    

        while(itemStatusIter!.hasNext())
        {

    status: string = itemStatusIter!.next() as string;;
    

                        if(status.compareTo(OrderHistoryData.SHIPPED) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "isEverythingShipped", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public BasketReview getBasketReview(string orderId){

        try {
            
    basketReview: BasketReview = new BasketReview();;
    

    keyValues: HashMap<any, any> = new HashMap<any, any>();;
    
keyValues!.put(OrderData.ID, orderId);
    

    items: Vector = super.getRows(keyValues)!;;
    

    entryData: EntryData = EntryData.getInstance()!;;
    

                        if(items != 
                                    null
                                 && items.length > 0)
                        
                                    {
                                    
    EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

    itemsArray: std::vector<any> = items.toArray()!;;
    

    itemsSize: int32_t = itemsArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < itemsSize; i++)
        {

    itemHashMap: HashMap<any, any> = itemsArray[i]! as HashMap<any, any>;;
    
itemHashMap!.put(BasicItemData.INBASKETS, EMPTY_STRING);
    
itemHashMap!.put(entryData!.ENABLE, EMPTY_STRING);
    
itemHashMap!.put(entryData!.TIMECREATED, EMPTY_STRING);
    
itemHashMap!.put(entryData!.LASTMODIFIED, EMPTY_STRING);
    
itemHashMap!.put(BasicItemData.GROUPS, EMPTY_STRING);
    
itemHashMap!.put(BasicItemData.OPTIONS, EMPTY_STRING);
    
itemHashMap!.put(BasicItemData.PERMISSIONS, EMPTY_STRING);
    
itemHashMap!.put(BasicItemData.SPECIALS, EMPTY_STRING);
    

    item: Item = new Item(itemHashMap);;
    
basketReview!.addItem(item);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basketReview;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "getBasketReview", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public string createTableStatement(){

    entryData: EntryData = EntryData.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("CREATE TABLE ");
    
stringBuffer!.append(this.tableName);
    
stringBuffer!.append(" (");
    
stringBuffer!.append(entryData!.ID);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer!.append(OrderData.ID);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer!.append(ShippingMethodData.GROUP);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer!.append(UserData.USERNAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(StoreFrontData.getInstance()!.NAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.ID);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.NUMBER);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.NEWORUSED);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.SUMMARY);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.DISTRIBUTOR);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.IDUSEDBYDISTRIBUTOR);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.PRODUCEDBY);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.PRODUCTIONDATE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.STARTPRODUCTIONDATE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.DESCRIPTION);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
stringBuffer!.append(BasicItemData.KEYWORDS);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.CATEGORY);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.TYPE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.SMALLIMAGE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.MEDIUMIMAGE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.LARGEIMAGE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.WEIGHT);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BasicItemData.PRICE);
    
stringBuffer!.append(" VARCHAR(20) NOT NULL,");
    
stringBuffer!.append(BasicItemData.COMMENT);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
stringBuffer!.append(BasicItemData.CUSTOMS);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer!.append(BasicItemData.DOWNLOADS);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer!.append(ShippingMethodData.COST);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.TAX);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(ShippingAddressData.NAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(ShippingAddressData.STREET);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(ShippingAddressData.CITY);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(ShippingAddressData.STATE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(ShippingAddressData.CODE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(ShippingAddressData.COUNTRY);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(ShippingMethodData.NAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(entryData!.SPECIAL);
    
stringBuffer!.append(" VARCHAR(255) ,");
    
stringBuffer!.append(OrderHistoryData.STATUS);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.CANCELINFO);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.CANCELTYPE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.SHIPPEDDATE);
    
stringBuffer!.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer!.append(OrderHistoryData.ORDERDATE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.TRANSDATE);
    
stringBuffer!.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer!.append(OrderHistoryData.CANCELDATE);
    
stringBuffer!.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer!.append("PRIMARY KEY(");
    
stringBuffer!.append(entryData!.ID);
    
stringBuffer!.append(") )");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this.createTableStatement());;
    
}


    public string dropTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

