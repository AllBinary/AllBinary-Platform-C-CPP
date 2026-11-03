
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
        



        #ifndef TAGHELPERS_ORDERHISTORYHELPER_CPP
        #define TAGHELPERS_ORDERHISTORYHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "taghelpers/OrderHistoryHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/taghelpers/TagHelper.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryFactory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OrderHistoryHelper::OrderHistoryHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()){
this->propertiesHashMap= propertiesHashMap;
    
this->pageContext= pageContext;
    
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    

    std::string storeName = JavaBoxes::unbox<std::string>(propertiesHashMap->get(StoreFrontData::getInstance()->NAME));;
    
this->newStatus= JavaBoxes::unbox<std::string>(propertiesHashMap->get(OrderHistoryData::STATUS));
    

                        if(true)
                        
                                    {
                                    this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    

                                    }
                                
this->getFormData();
    
}


    auto OrderHistoryHelper::getFormData() -> void{
this->id= this->request->getParameter(OrderData::ID);
    
this->groupId= this->request->getParameter(ShippingMethodData::GROUP);
    

                        if(false)
                        
                                    {
                                    this->newStatus= this->request->getParameter(OrderHistoryData::STATUS);
    

                                    }
                                
}


    auto OrderHistoryHelper::setOrderStatus() -> std::string{

        try {
            
    std::string success = JavaString::valueOf("Status successfully set to: ") +JavaString::valueOf(this->status);;
    

    OrderHistoryInterface* orderReviewInterface = OrderHistoryFactory::getInstance(this->id);;
    

    std::string status = orderReviewInterface->getStatus();;
    

                        if(status.compare(OrderHistoryData::CANCELLED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf("Order ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" Already Cancelled<br/>");
    

                                    }
                                
                             else 
                        if(status.compare(OrderHistoryData::SHIPPED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf("Order ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" Already Shipped. You can't cancel a shipped order.<br/>");
    

                                    }
                                
                             else 
                        if(status.compare(OrderHistoryData::PREPROCESSING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf("Order ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" has been cancelled.<br/>");
    

                                    }
                                
                             else 
                        if(status.compare(OrderHistoryData::PARTIALLYSHIPPED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf("Order ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" Partially Shipped. You can cancel unshipped items, but not the whole order.<br/>");
    

                                    }
                                
                             else 
                        if(status.compare(OrderHistoryData::PROCESSING) == 0)
                        
                                    {
                                    
    OrderHistoryEntityInterface* orderHistoryEntityInterface = OrderHistoryEntityFactory::getInstance();;
    
orderHistoryEntityInterface->setStatus(this->id, this->newStatus);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf("Order ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" has been cancelled.<br/>");
    

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "setOrderStatus()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Setting Order Status";
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to set order status";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setOrderStatus()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(error) +JavaString::valueOf("<br/>")) +JavaString::valueOf("Exception: ")) +JavaString::valueOf(e)) +JavaString::valueOf("<br/>");
    
}

}




        #endif //TAGHELPERS_ORDERHISTORYHELPER_CPP
