
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
        



        #ifndef ADMIN_TAGHELPERS_UPDATEORDERHELPER_CPP
        #define ADMIN_TAGHELPERS_UPDATEORDERHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/UpdateOrderHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/BillingAddressData.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"


UpdateOrderHelper::UpdateOrderHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()){
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
this->getFormData();
    
}


    auto UpdateOrderHelper::getFormData() -> void{
this->entryId= this->request->getParameter(EntryData::getInstance()->ID);
    
this->orderId= this->request->getParameter(OrderData::ID);
    
this->userName= this->request->getParameter(UserData::USERNAME);
    
this->storeName= this->request->getParameter(StoreFrontData::getInstance()->NAME);
    
this->shipDate= this->request->getParameter(OrderHistoryData::SHIPPEDDATE);
    
this->orderDate= this->request->getParameter(OrderHistoryData::ORDERDATE);
    
this->transDate= this->request->getParameter(OrderHistoryData::TRANSDATE);
    
this->cancelDate= this->request->getParameter(OrderHistoryData::CANCELDATE);
    
this->status= this->request->getParameter(OrderHistoryData::STATUS);
    
this->paymentMethod= this->request->getParameter(PaymentData::METHOD);
    
this->name= this->request->getParameter(PaymentData::NAME);
    
this->type= this->request->getParameter(PaymentData::TYPE);
    
this->expiration= this->request->getParameter(PaymentData::EXPIRATION);
    
this->number= this->request->getParameter(PaymentData::NUMBER);
    
this->encryption= this->request->getParameter(EntryData::getInstance()->ENCRYPTION);
    
this->billingName= this->request->getParameter(BillingAddressData::NAME);
    
this->billingStreet= this->request->getParameter(BillingAddressData::STREET);
    
this->billingCity= this->request->getParameter(BillingAddressData::CITY);
    
this->billingState= this->request->getParameter(BillingAddressData::STATE);
    
this->billingCode= this->request->getParameter(BillingAddressData::CODE);
    
this->billingCountry= this->request->getParameter(BillingAddressData::COUNTRY);
    
this->shippingName= this->request->getParameter(ShippingAddressData::NAME);
    
this->shippingStreet= this->request->getParameter(ShippingAddressData::STREET);
    
this->shippingCity= this->request->getParameter(ShippingAddressData::CITY);
    
this->shippingState= this->request->getParameter(ShippingAddressData::STATE);
    
this->shippingCode= this->request->getParameter(ShippingAddressData::CODE);
    
this->shippingCountry= this->request->getParameter(ShippingAddressData::COUNTRY);
    
this->shippingMethodName= this->request->getParameter(ShippingMethodData::NAME);
    
this->subTotal= this->request->getParameter(OrderHistoryData::SUBTOTAL);
    
this->shippingCost= this->request->getParameter(OrderHistoryData::SHIPPINGCOST);
    
this->tax= this->request->getParameter(OrderHistoryData::TAX);
    
this->total= this->request->getParameter(OrderHistoryData::TOTAL);
    
this->special= this->request->getParameter(EntryData::getInstance()->SPECIAL);
    
this->userComment= this->request->getParameter(OrderData::CUSTOMERCOMMENT);
    
this->userCancelComment= this->request->getParameter(OrderData::CUSTOMERCANCELCOMMENT);
    
this->storeComment= this->request->getParameter(OrderData::STORECOMMENT);
    
this->storeCancelComment= this->request->getParameter(OrderData::STORECANCELCOMMENT);
    
}


    auto UpdateOrderHelper::update() -> std::string{

        try {
            
    std::string success = "Successful update";;
    

    HashMap<Object*, Object*>* orderHashMap = StdUtil::getInstance()->createHashMap();;
    

    HashMap<Object*, Object*>* whereHashMap = StdUtil::getInstance()->createHashMap();;
    
orderHashMap->put(EntryData::getInstance()->ID, this->entryId);
    
orderHashMap->put(OrderData::ID, this->orderId);
    
orderHashMap->put(UserData::USERNAME, userName);
    
orderHashMap->put(StoreFrontData::getInstance()->NAME, this->storeName);
    
orderHashMap->put(OrderHistoryData::SHIPPEDDATE, shipDate);
    
orderHashMap->put(OrderHistoryData::ORDERDATE, orderDate);
    
orderHashMap->put(OrderHistoryData::TRANSDATE, transDate);
    
orderHashMap->put(OrderHistoryData::CANCELDATE, cancelDate);
    
orderHashMap->put(OrderHistoryData::STATUS, status);
    
orderHashMap->put(PaymentData::METHOD, paymentMethod);
    
orderHashMap->put(PaymentData::NAME, name);
    
orderHashMap->put(PaymentData::TYPE, type);
    
orderHashMap->put(PaymentData::EXPIRATION, expiration);
    
orderHashMap->put(BillingAddressData::NAME, billingName);
    
orderHashMap->put(BillingAddressData::STREET, billingStreet);
    
orderHashMap->put(BillingAddressData::CITY, billingCity);
    
orderHashMap->put(BillingAddressData::STATE, billingState);
    
orderHashMap->put(BillingAddressData::CODE, billingCode);
    
orderHashMap->put(BillingAddressData::COUNTRY, billingCountry);
    
orderHashMap->put(ShippingAddressData::NAME, shippingName);
    
orderHashMap->put(ShippingAddressData::STREET, shippingStreet);
    
orderHashMap->put(ShippingAddressData::CITY, shippingCity);
    
orderHashMap->put(ShippingAddressData::STATE, shippingState);
    
orderHashMap->put(ShippingAddressData::CODE, shippingCode);
    
orderHashMap->put(ShippingAddressData::COUNTRY, shippingCountry);
    
orderHashMap->put(ShippingMethodData::NAME, this->shippingMethodName);
    
orderHashMap->put(OrderHistoryData::SUBTOTAL, this->subTotal);
    
orderHashMap->put(OrderHistoryData::SHIPPINGCOST, this->shippingCost);
    
orderHashMap->put(OrderHistoryData::TAX, this->tax);
    
orderHashMap->put(OrderHistoryData::TOTAL, this->total);
    
orderHashMap->put(EntryData::getInstance()->SPECIAL, this->special);
    
orderHashMap->put(OrderData::CUSTOMERCOMMENT, this->userComment);
    
orderHashMap->put(OrderData::CUSTOMERCANCELCOMMENT, this->userCancelComment);
    
orderHashMap->put(OrderData::STORECOMMENT, this->storeComment);
    
orderHashMap->put(OrderData::STORECANCELCOMMENT, this->storeCancelComment);
    
whereHashMap->put(OrderData::ID, orderId);
    
OrderHistoryEntityFactory::getInstance()->update(whereHashMap, orderHashMap);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to update order table";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_UPDATEORDERHELPER_CPP
