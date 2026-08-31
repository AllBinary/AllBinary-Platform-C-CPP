
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
        
            #include "../../../../../../../../java/lang/Float.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Random.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/BillingAddressData.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/Basket.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>

      
#include <org/allbinary/business/user/commerce/money/tax/TaxFactory.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethods.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>

      
#include <org/allbinary/data/generator/OrderHistoryIdGenerator.h>

      
#include <org/allbinary/data/tables/TableDataFactory.h>

      
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderHistoryEntityInterface.h"

class OrderHistoryEntity: public AbSqlBean: public OrderHistoryEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const tableName: string = "orderhistory";

public constructor (){
            super(new HistoryDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setTableName(this.tableName);
    
}


    public insert(string userName, Order order){

    vector: Vector = new Vector();;
    

        try {
            
    paymentInterface: PaymentInterface = new PaymentEntity().getDefault(userName)!;;
    

    billingAddress: StreetAddress = new BillingAddressesEntity(userName).getDefault()!;;
    

    shippingAddress: StreetAddress = new ShippingAddressesEntity(userName).getDefault()!;;
    

    abeClientInformation: AbeClientInformationInterface = ServiceClientInformationInterfaceFactory.getInstance()!;;
    

    storeFrontInterface: StoreFrontInterface = StoreFrontFactory.getInstance(order.getStoreName())!;;
    

    shippingInterface: ShippingInterface = new ShippingMethods(abeClientInformation, storeFrontInterface).getShippingInterface(order.getShippingMethod())!;;
    

    shippingCost: Money = shippingInterface!.getCost(order)!;;
    

    basketInterface: BasketInterface = order.getBasket()!;;
    

    subTotal: Money = basketInterface!.getSubTotal()!;;
    

    taxRate: number = TaxFactory.getInstance()!.getInstance(abeClientInformation, storeFrontInterface)!.getTaxRate(shippingAddress, storeFrontInterface)!;;
    

    tax: Money = new Money();;
    

    total: Money = new Money();;
    
total.add(shippingCost!.toString());
    
total.add(subTotal!.toString());
    
tax.add(total.toString());
    
tax.multiply(taxRate);
    
total.add(tax.toString());
    

    empty: string = StringUtil.getInstance()!.EMPTY_STRING;;
    
vector.add(new OrderHistoryIdGenerator().getNext());
    

    ZERO: string = TableDataFactory.getInstance()!.ZERO_STRING;;
    
vector.add(order.getId());
    
vector.add(userName);
    
vector.add(order.getStoreName());
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
vector.add(ZERO);
    
vector.add(time);
    
vector.add(ZERO);
    
vector.add(ZERO);
    
vector.add(OrderHistoryData.PREPROCESSING);
    
vector.add(order.getPaymentMethod());
    

                        if(paymentInterface != 
                                    null
                                )
                        
                                    {
                                    vector.add(paymentInterface!.getName());
    
vector.add(paymentInterface!.getType());
    
vector.add(paymentInterface!.getExpiration());
    

    random: int32_t = new Random().nextInt(SuperCrypt.KEYMAX)!;;
    
vector.add(new SuperCrypt(random).encrypt(paymentInterface!.getNumber()));
    
vector.add(new Integer(random).toString());
    

                                    }
                                
                        else {
                            vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(ZERO);
    

                        }
                            

                        if(billingAddress != 
                                    null
                                )
                        
                                    {
                                    vector.add(billingAddress!.getName());
    
vector.add(billingAddress!.getStreet());
    
vector.add(billingAddress!.getCity());
    
vector.add(billingAddress!.getState());
    
vector.add(billingAddress!.getCode());
    
vector.add(billingAddress!.getCountry());
    

                                    }
                                
                        else {
                            vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    

                        }
                            

                        if(shippingAddress != 
                                    null
                                )
                        
                                    {
                                    vector.add(shippingAddress!.getName());
    
vector.add(shippingAddress!.getStreet());
    
vector.add(shippingAddress!.getCity());
    
vector.add(shippingAddress!.getState());
    
vector.add(shippingAddress!.getCode());
    
vector.add(shippingAddress!.getCountry());
    

                                    }
                                
                        else {
                            vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    

                        }
                            
vector.add(order.getShippingMethod());
    
vector.add(subTotal!.toString());
    
vector.add(shippingCost!.toString());
    
vector.add(tax.toString());
    
vector.add(total.toString());
    
vector.add(order.getSpecial());
    
vector.add(order.getUserComments());
    
vector.add(order.getUserCancelComments());
    
vector.add(order.getStoreComments());
    
vector.add(order.getStoreCancelComments());
    
this.insert(vector);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put("Command Failed: " +vector, this, INSERT, e);
    

                                    }
                                
}

}


    public insert(Vector values){

        try {
            super.insert(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, INSERT, e);
    

                                    }
                                
}

}


    public setStatus(string orderId, string status){

        try {
            
    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    

    updateHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
updateHashMap!.put(OrderHistoryData.STATUS, status);
    

                        if(status.compareTo(OrderHistoryData.CANCELLED) == 0)
                        
                                    {
                                    updateHashMap!.put(OrderHistoryData.CANCELDATE, time);
    

                                    }
                                
                             else 
                        if(status.compareTo(OrderHistoryData.SHIPPED) == 0)
                        
                                    {
                                    updateHashMap!.put(OrderHistoryData.SHIPPEDDATE, time);
    

                                    }
                                
super.updateWhere(OrderData.ID, orderId, updateHashMap);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "setStatus", e);
    

                                    }
                                
}

}


    public setPaymentMethod(string orderId, string paymentMethod){

        try {
            
    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    

    updateHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
updateHashMap!.put(PaymentData.METHOD, paymentMethod);
    
updateHashMap!.put(OrderHistoryData.TRANSDATE, time);
    
super.updateWhere(OrderData.ID, orderId, updateHashMap);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "setPaymentMethod", e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public Vector getStoreOrders(StoreFrontInterface storeFrontInterface){

    orderReviewVector: Vector = new Vector();;
    

    whereHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
whereHashMap!.put(StoreFrontData.getInstance()!.NAME, storeFrontInterface!.getName());
    

    orderHashMapVector: Vector = super.getRows(whereHashMap)!;;
    

    size: int32_t = orderHashMapVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    orderReviewHashMap: HashMap<any, any> = orderHashMapVector!.get(i) as HashMap<any, any>;;
    

    orderReview: OrderHistory = new OrderHistory(new Basket(), orderReviewHashMap);;
    
orderReviewVector!.add(orderReview);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderReviewVector;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getOrders(string userName){

    orderReviewVector: Vector = new Vector();;
    

    whereHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
whereHashMap!.put(UserData.USERNAME, userName);
    

    orderHashMapVector: Vector = super.getRows(whereHashMap)!;;
    

    size: int32_t = orderHashMapVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    orderReviewHashMap: HashMap<any, any> = orderHashMapVector!.get(index) as HashMap<any, any>;;
    

    orderReview: OrderHistory = new OrderHistory(new Basket(), orderReviewHashMap);;
    
orderReviewVector!.add(orderReview);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderReviewVector;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getOrders(string status, string fromDate, string toDate){

    orderReviewVector: Vector = new Vector();;
    

    whereHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
whereHashMap!.put(OrderHistoryData.STATUS, status);
    

    orderHashMapVector: Vector = super.getRowsWhereBetween(whereHashMap, OrderHistoryData.ORDERDATE, fromDate, toDate)!;;
    

    size: int32_t = orderHashMapVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    orderReviewHashMap: HashMap<any, any> = orderHashMapVector!.get(index) as HashMap<any, any>;;
    

    orderReview: OrderHistory = new OrderHistory(new Basket(), orderReviewHashMap);;
    
orderReviewVector!.add(orderReview);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderReviewVector;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getOrders(string fromDate, string toDate){

    orderReviewVector: Vector = new Vector();;
    

    orderHashMapVector: Vector = super.getRowsWhereBetween(OrderHistoryData.ORDERDATE, fromDate, toDate)!;;
    

    size: int32_t = orderHashMapVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    orderReviewHashMap: HashMap<any, any> = orderHashMapVector!.get(index) as HashMap<any, any>;;
    

    orderReview: OrderHistory = new OrderHistory(new Basket(), orderReviewHashMap);;
    
orderReviewVector!.add(orderReview);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderReviewVector;
    
}


                //@Throws(Exception.constructor)
            
    public OrderHistory getOrder(string id){

    whereHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
whereHashMap!.put(OrderData.ID, id);
    

    orderReviewHashMap: HashMap<any, any> = super.getRow(whereHashMap)!;;
    

                        if(orderReviewHashMap != 
                                    null
                                )
                        
                                    {
                                    
    orderHistory: OrderHistory = new OrderHistory(new Basket(), orderReviewHashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderHistory;
    

                                    }
                                
                        else {
                            


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
    
stringBuffer!.append(UserData.USERNAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(StoreFrontData.getInstance()!.NAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.SHIPPEDDATE);
    
stringBuffer!.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer!.append(OrderHistoryData.ORDERDATE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.TRANSDATE);
    
stringBuffer!.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer!.append(OrderHistoryData.CANCELDATE);
    
stringBuffer!.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer!.append(OrderHistoryData.STATUS);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(PaymentData.METHOD);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(PaymentData.NAME);
    
stringBuffer!.append(" VARCHAR(255) ,");
    
stringBuffer!.append(PaymentData.TYPE);
    
stringBuffer!.append(" VARCHAR(255) ,");
    
stringBuffer!.append(PaymentData.EXPIRATION);
    
stringBuffer!.append(" VARCHAR(255) ,");
    
stringBuffer!.append(PaymentData.NUMBER);
    
stringBuffer!.append(" VARCHAR(255) ,");
    
stringBuffer!.append(entryData!.ENCRYPTION);
    
stringBuffer!.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer!.append(BillingAddressData.NAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BillingAddressData.STREET);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BillingAddressData.CITY);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BillingAddressData.STATE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BillingAddressData.CODE);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(BillingAddressData.COUNTRY);
    
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
    
stringBuffer!.append(OrderHistoryData.SUBTOTAL);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.SHIPPINGCOST);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.TAX);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(OrderHistoryData.TOTAL);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(entryData!.SPECIAL);
    
stringBuffer!.append(" VARCHAR(255) ,");
    
stringBuffer!.append(OrderData.CUSTOMERCOMMENT);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
stringBuffer!.append(OrderData.CUSTOMERCANCELCOMMENT);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
stringBuffer!.append(OrderData.STORECOMMENT);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
stringBuffer!.append(OrderData.STORECANCELCOMMENT);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
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


                //@Throws(Exception.constructor)
            
    public update(HashMap<any, any> whereHashMap, HashMap<any, any> orderHashMap){

        try {
            updateWhere(whereHashMap, orderHashMap);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


};

            

