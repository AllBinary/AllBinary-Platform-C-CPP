
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_STATUS_ORDERSTATUSEMAIL_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_STATUS_ORDERSTATUSEMAIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/order/status/OrderStatusEmail.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OrderStatusEmail::OrderStatusEmail(AbeClientInformationInterface* abeClientInformation, OrderHistory* orderHistory) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->abeClientInformation= abeClientInformation;
    
this->orderHistory= orderHistory;
    

    std::string storeName = orderHistory->getStoreName();;
    
this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    
this->user= UserEntityFactory::getInstance()->getUser(orderHistory->getUserName());
    
}


                //@Throws(Exception.constructor)
            
    auto OrderStatusEmail::process() -> void{
this->notifyStoreAdmin();
    
this->notifyUser();
    
}


                //@Throws(Exception.constructor)
            
    auto OrderStatusEmail::notifyStoreAdmin() -> void{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Order Email", this, "emailStoreAdmin");
    

                                    }
                                

    std::string adminEmailSubject = JavaString::valueOf(JavaString::valueOf("Order ") +JavaString::valueOf(this->orderHistory->getStatus())) +JavaString::valueOf(" Attempt");;
    

    std::string adminEmailTextBody = JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Order attempt: ") +JavaString::valueOf(this->orderHistory->getId())) +JavaString::valueOf(" Preprocessing by: ")) +JavaString::valueOf(this->user->getUserName());;
    

    BasicEmailInfo* adminBasicEmailInfo = dynamic_cast<BasicEmailInfo*>(new AdminEmailInfo(adminEmailSubject, adminEmailTextBody));;
    

    BasicEmailInfo* storeAdminBasicEmailInfo = dynamic_cast<BasicEmailInfo*>(new StoreEmailInfo(this->storeFrontInterface, adminEmailSubject, adminEmailTextBody));;
    

    EmailInfo* storeAdminEmailInfo = new EmailInfo(storeAdminBasicEmailInfo);;
    

    EmailInfo* adminEmailInfo = new EmailInfo(adminBasicEmailInfo);;
    

    UserEmailEventNameData* userEmailEventNameData = UserEmailEventNameData::getInstance(this->orderHistory->getStatus());;
    

    UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons::getInstance()->getInstance(this->abeClientInformation, userEmailEventNameData);;
    

    UserEmailEventHandler* storeAdminUserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons::getInstance()->getInstance(userEmailEventNameData, this->abeClientInformation, this->storeFrontInterface);;
    
storeAdminUserEmailEventHandler->receiveEmailInfo(userEmailEventNameData, storeAdminEmailInfo);
    
adminUserEmailEventHandler->receiveEmailInfo(userEmailEventNameData, adminEmailInfo);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "emailAdmin", &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto OrderStatusEmail::notifyUser() -> void{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Email User", this, "notifyUser()");
    

                                    }
                                

    std::string subject = JavaString::valueOf(JavaString::valueOf("Order ") +JavaString::valueOf(this->orderHistory->getStatus())) +JavaString::valueOf(" Attempt");;
    

    std::string textBody = JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Order attempt: ") +JavaString::valueOf(this->orderHistory->getId())) +JavaString::valueOf(" Preprocessing by: ")) +JavaString::valueOf(this->user->getUserName());;
    

    BasicEmailInfo* basicEmailInfo = dynamic_cast<BasicEmailInfo*>(new StoreEmailInfo(this->storeFrontInterface, subject, textBody));;
    

    EmailInfo* emailInfo = new EmailInfo(basicEmailInfo);;
    

    UserEmailEventNameData* userEmailEventNameData = UserEmailEventNameData::getInstance(this->orderHistory->getStatus());;
    

    UserEmailEventHandler* userEmailEventHandler = UserEmailEventHandlerSingletons::getInstance()->getInstance(this->abeClientInformation, userEmailEventNameData, this->user);;
    
userEmailEventHandler->receiveEmailInfo(userEmailEventNameData, emailInfo);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "notifyUser", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_STATUS_ORDERSTATUSEMAIL_CPP
