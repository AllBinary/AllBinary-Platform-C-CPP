
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
        



        #ifndef ADMIN_TAGHELPERS_ORDERHISTORYREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_ORDERHISTORYREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/OrderHistoryRequestHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/status/OrderStatusEmail.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"


OrderHistoryRequestHelper::OrderHistoryRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
this->getFormData();
    
}


    auto OrderHistoryRequestHelper::getFormData() -> void{
this->id= this->request->getParameter(OrderData::ID);
    
this->groupId= this->request->getParameter(ShippingMethodData::GROUP);
    
this->status= this->request->getParameter(OrderHistoryData::STATUS);
    
}


    auto OrderHistoryRequestHelper::setOrderStatus() -> std::string{

        try {
            
                        if(this->groupId.compare(CommonPhoneStrings::getInstance()->ZERO) != 0)
                        
                                    {
                                    
                        if(OrderItemsEntityFactory::getInstance()->isEverythingShipped(this->id))
                        
                                    {
                                    this->status= OrderHistoryData::SHIPPED;
    

                                    }
                                
                        else {
                            this->status= OrderHistoryData::PARTIALLYSHIPPED;
    

                        }
                            

                                    }
                                

    std::string success = JavaString::valueOf("Status successfully set to: ") +JavaString::valueOf(this->status);;
    
OrderHistoryEntityFactory::getInstance()->setStatus(this->id, this->status);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF("Success", this, "setOrderStatus()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to set order status";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setOrderStatus()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    auto OrderHistoryRequestHelper::setOrderStatus(std::string newStatus) -> std::string{

        try {
            
                        if(false)
                        newStatus= this->status;
                                

    std::string success = JavaString::valueOf("Status successfully set to: ") +JavaString::valueOf(newStatus);;
    
OrderHistoryEntityFactory::getInstance()->setStatus(this->id, newStatus);
    

    OrderHistory* orderHistory = OrderHistoryEntityFactory::getInstance()->getOrder(this->id);;
    
(new OrderStatusEmail(this->abeClientInformation, orderHistory))->process();
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF("Success", this, "setOrderStatus()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to view order table";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setOrderStatus(newStatus)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_ORDERHISTORYREQUESTHELPER_CPP
