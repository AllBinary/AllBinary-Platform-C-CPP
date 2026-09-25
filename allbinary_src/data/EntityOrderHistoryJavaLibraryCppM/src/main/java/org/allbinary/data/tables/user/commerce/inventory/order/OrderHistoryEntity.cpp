
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderHistoryEntityInterface.h"

class OrderHistoryEntity: public AbSqlBean, public OrderHistoryEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "orderhistory";

public: OrderHistoryEntity(){
            super(HistoryDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: void insert(std::string userName, Order order){

    BasicArrayList vector = BasicArrayListD();;
    

        try {
            
    PaymentInterface paymentInterface = PaymentEntity().getDefault(userName);;
    

    StreetAddress billingAddress = BillingAddressesEntity(userName).getDefault();;
    

    StreetAddress shippingAddress = ShippingAddressesEntity(userName).getDefault();;
    

    AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();;
    

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(order.getStoreName());;
    

    ShippingInterface shippingInterface = ShippingMethods(abeClientInformation, storeFrontInterface).getShippingInterface(order.getShippingMethod());;
    

    Money shippingCost = shippingInterface.getCost(order);;
    

    BasketInterface basketInterface = order.getBasket();;
    

    Money subTotal = basketInterface.getSubTotal();;
    

    number taxRate = TaxFactory::getInstance().getInstance(abeClientInformation, storeFrontInterface).getTaxRate(shippingAddress, storeFrontInterface);;
    

    Money tax = Money();;
    

    Money total = Money();;
    
total.add(shippingCost.toString());
    
total.add(subTotal.toString());
    
tax.add(total.toString());
    
tax.multiply(taxRate);
    
total.add(tax.toString());
    

    std::string empty = StringUtil::getInstance().EMPTY_STRING;;
    
vector.add(OrderHistoryIdGenerator().getNext());
    

    std::string ZERO = TableDataFactory::getInstance().ZERO_STRING;;
    
vector.add(order.getId());
    
vector.add(userName);
    
vector.add(order.getStoreName());
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
vector.add(ZERO);
    
vector.add(time);
    
vector.add(ZERO);
    
vector.add(ZERO);
    
vector.add(OrderHistoryData::PREPROCESSING);
    
vector.add(order.getPaymentMethod());
    

                        if(paymentInterface != 
                                    nullptr
                                )
                        
                                    {
                                    vector.add(paymentInterface.getName());
    
vector.add(paymentInterface.getType());
    
vector.add(paymentInterface.getExpiration());
    

    int32_t random = Random().nextInt(SuperCrypt::KEYMAX);;
    
vector.add(SuperCrypt(random).encrypt(paymentInterface.getNumber()));
    
vector.add(Integer(random).toString());
    

                                    }
                                
                        else {
                            vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(empty);
    
vector.add(ZERO);
    

                        }
                            

                        if(billingAddress != 
                                    nullptr
                                )
                        
                                    {
                                    vector.add(billingAddress.getName());
    
vector.add(billingAddress.getStreet());
    
vector.add(billingAddress.getCity());
    
vector.add(billingAddress.getState());
    
vector.add(billingAddress.getCode());
    
vector.add(billingAddress.getCountry());
    

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
                                    nullptr
                                )
                        
                                    {
                                    vector.add(shippingAddress.getName());
    
vector.add(shippingAddress.getStreet());
    
vector.add(shippingAddress.getCity());
    
vector.add(shippingAddress.getState());
    
vector.add(shippingAddress.getCode());
    
vector.add(shippingAddress.getCountry());
    

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
    
vector.add(subTotal.toString());
    
vector.add(shippingCost.toString());
    
vector.add(tax.toString());
    
vector.add(total.toString());
    
vector.add(order.getSpecial());
    
vector.add(order.getUserComments());
    
vector.add(order.getUserCancelComments());
    
vector.add(order.getStoreComments());
    
vector.add(order.getStoreCancelComments());
    
this->insert(vector);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put("Command Failed: " +vector, this, INSERT, e);
    

                                    }
                                
}

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


    public: void setStatus(std::string orderId, std::string status){

        try {
            
    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    

    HashMap<any, any> updateHashMap = StdUtil::getInstance().createHashMap();;
    
updateHashMap.put(OrderHistoryData::STATUS, status);
    

                        if(status.compareTo(OrderHistoryData::CANCELLED) == 0)
                        
                                    {
                                    updateHashMap.put(OrderHistoryData::CANCELDATE, time);
    

                                    }
                                
                             else 
                        if(status.compareTo(OrderHistoryData::SHIPPED) == 0)
                        
                                    {
                                    updateHashMap.put(OrderHistoryData::SHIPPEDDATE, time);
    

                                    }
                                
super.updateWhere(OrderData::ID, orderId, updateHashMap);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "setStatus", e);
    

                                    }
                                
}

}


    public: void setPaymentMethod(std::string orderId, std::string paymentMethod){

        try {
            
    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    

    HashMap<any, any> updateHashMap = StdUtil::getInstance().createHashMap();;
    
updateHashMap.put(PaymentData::METHOD, paymentMethod);
    
updateHashMap.put(OrderHistoryData::TRANSDATE, time);
    
super.updateWhere(OrderData::ID, orderId, updateHashMap);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "setPaymentMethod", e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getStoreOrders(StoreFrontInterface storeFrontInterface){

    BasicArrayList orderReviewVector = BasicArrayListD();;
    

    HashMap<any, any> whereHashMap = StdUtil::getInstance().createHashMap();;
    
whereHashMap.put(StoreFrontData::getInstance().NAME, storeFrontInterface.getName());
    

    BasicArrayList orderHashMapVector = super.getRows(whereHashMap);;
    

    int32_t size = orderHashMapVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    HashMap<any, any> orderReviewHashMap = orderHashMapVector.get(i) as HashMap<any, any>;;
    

    OrderHistory orderReview = OrderHistory(Basket(), orderReviewHashMap);;
    
orderReviewVector.add(orderReview);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderReviewVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getOrders(std::string userName){

    BasicArrayList orderReviewVector = BasicArrayListD();;
    

    HashMap<any, any> whereHashMap = StdUtil::getInstance().createHashMap();;
    
whereHashMap.put(UserData::USERNAME, userName);
    

    BasicArrayList orderHashMapVector = super.getRows(whereHashMap);;
    

    int32_t size = orderHashMapVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<any, any> orderReviewHashMap = orderHashMapVector.get(index) as HashMap<any, any>;;
    

    OrderHistory orderReview = OrderHistory(Basket(), orderReviewHashMap);;
    
orderReviewVector.add(orderReview);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderReviewVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getOrders(std::string status, std::string fromDate, std::string toDate){

    BasicArrayList orderReviewVector = BasicArrayListD();;
    

    HashMap<any, any> whereHashMap = StdUtil::getInstance().createHashMap();;
    
whereHashMap.put(OrderHistoryData::STATUS, status);
    

    BasicArrayList orderHashMapVector = super.getRowsWhereBetween(whereHashMap, OrderHistoryData::ORDERDATE, fromDate, toDate);;
    

    int32_t size = orderHashMapVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<any, any> orderReviewHashMap = orderHashMapVector.get(index) as HashMap<any, any>;;
    

    OrderHistory orderReview = OrderHistory(Basket(), orderReviewHashMap);;
    
orderReviewVector.add(orderReview);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderReviewVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getOrders(std::string fromDate, std::string toDate){

    BasicArrayList orderReviewVector = BasicArrayListD();;
    

    BasicArrayList orderHashMapVector = super.getRowsWhereBetween(OrderHistoryData::ORDERDATE, fromDate, toDate);;
    

    int32_t size = orderHashMapVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<any, any> orderReviewHashMap = orderHashMapVector.get(index) as HashMap<any, any>;;
    

    OrderHistory orderReview = OrderHistory(Basket(), orderReviewHashMap);;
    
orderReviewVector.add(orderReview);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderReviewVector;
    
}


                //@Throws(Exception.constructor)
            
    public: OrderHistory getOrder(std::string id){

    HashMap<any, any> whereHashMap = StdUtil::getInstance().createHashMap();;
    
whereHashMap.put(OrderData::ID, id);
    

    HashMap<any, any> orderReviewHashMap = super.getRow(whereHashMap);;
    

                        if(orderReviewHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    OrderHistory orderHistory = OrderHistory(Basket(), orderReviewHashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderHistory;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public: std::string createTableStatement(){

    EntryData entryData = EntryData::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("CREATE TABLE ");
    
stringBuffer.append(this->tableName);
    
stringBuffer.append(" (");
    
stringBuffer.append(entryData.ID);
    
stringBuffer.append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer.append(OrderData::ID);
    
stringBuffer.append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer.append(UserData::USERNAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(StoreFrontData::getInstance().NAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(OrderHistoryData::SHIPPEDDATE);
    
stringBuffer.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer.append(OrderHistoryData::ORDERDATE);
    
stringBuffer.append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer.append(OrderHistoryData::TRANSDATE);
    
stringBuffer.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer.append(OrderHistoryData::CANCELDATE);
    
stringBuffer.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer.append(OrderHistoryData::STATUS);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentData::METHOD);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(PaymentData::NAME);
    
stringBuffer.append(" VARCHAR(255) ,");
    
stringBuffer.append(PaymentData::TYPE);
    
stringBuffer.append(" VARCHAR(255) ,");
    
stringBuffer.append(PaymentData::EXPIRATION);
    
stringBuffer.append(" VARCHAR(255) ,");
    
stringBuffer.append(PaymentData::NUMBER);
    
stringBuffer.append(" VARCHAR(255) ,");
    
stringBuffer.append(entryData.ENCRYPTION);
    
stringBuffer.append(" BIGINT(19) UNSIGNED ,");
    
stringBuffer.append(BillingAddressData::NAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(BillingAddressData::STREET);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(BillingAddressData::CITY);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(BillingAddressData::STATE);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(BillingAddressData::CODE);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(BillingAddressData::COUNTRY);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(ShippingAddressData::NAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(ShippingAddressData::STREET);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(ShippingAddressData::CITY);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(ShippingAddressData::STATE);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(ShippingAddressData::CODE);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(ShippingAddressData::COUNTRY);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(ShippingMethodData::NAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(OrderHistoryData::SUBTOTAL);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(OrderHistoryData::SHIPPINGCOST);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(OrderHistoryData::TAX);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(OrderHistoryData::TOTAL);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(entryData.SPECIAL);
    
stringBuffer.append(" VARCHAR(255) ,");
    
stringBuffer.append(OrderData::CUSTOMERCOMMENT);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(OrderData::CUSTOMERCANCELCOMMENT);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(OrderData::STORECOMMENT);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(OrderData::STORECANCELCOMMENT);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append("PRIMARY KEY(");
    
stringBuffer.append(entryData.ID);
    
stringBuffer.append(") )");
    



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


                //@Throws(Exception.constructor)
            
    public: void update(HashMap<any, any> whereHashMap, HashMap<any, any> orderHashMap){

        try {
            updateWhere(whereHashMap, orderHashMap);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


};

            

