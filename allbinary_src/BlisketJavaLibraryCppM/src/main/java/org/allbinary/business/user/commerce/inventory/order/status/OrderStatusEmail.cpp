
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
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
        
class OrderStatusEmail
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: AbeClientInformationInterface abeClientInformation;

    private: OrderHistory orderHistory;

    private: StoreFrontInterface storeFrontInterface;

    private: UserInterface user;

public: OrderStatusEmail(AbeClientInformationInterface abeClientInformation, OrderHistory orderHistory){
this->abeClientInformation= abeClientInformation;
    
this->orderHistory= orderHistory;
    

    std::string storeName = orderHistory.getStoreName();;
    
this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    
this->user= UserEntityFactory::getInstance().getUser(orderHistory.getUserName());
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->notifyStoreAdmin();
    
this->notifyUser();
    
}


                //@Throws(Exception.constructor)
            
    private: void notifyStoreAdmin(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF("Order Email", this, "emailStoreAdmin");
    

                                    }
                                

    std::string adminEmailSubject = "Order " +this->orderHistory.getStatus() +" Attempt";;
    

    std::string adminEmailTextBody = "Order attempt: " +this->orderHistory.getId() +" Preprocessing by: " +this->user.getUserName();;
    

    BasicEmailInfo adminBasicEmailInfo = AdminEmailInfo(adminEmailSubject, adminEmailTextBody) as BasicEmailInfo;;
    

    BasicEmailInfo storeAdminBasicEmailInfo = StoreEmailInfo(this->storeFrontInterface, adminEmailSubject, adminEmailTextBody) as BasicEmailInfo;;
    

    EmailInfo storeAdminEmailInfo = EmailInfo(storeAdminBasicEmailInfo);;
    

    EmailInfo adminEmailInfo = EmailInfo(adminBasicEmailInfo);;
    

    UserEmailEventNameData userEmailEventNameData = UserEmailEventNameData::getInstance(this->orderHistory.getStatus());;
    

    UserEmailEventHandler adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons::getInstance().getInstance(this->abeClientInformation, userEmailEventNameData);;
    

    UserEmailEventHandler storeAdminUserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons::getInstance().getInstance(userEmailEventNameData, this->abeClientInformation, this->storeFrontInterface);;
    
storeAdminUserEmailEventHandler.receiveEmailInfo(userEmailEventNameData, storeAdminEmailInfo);
    
adminUserEmailEventHandler.receiveEmailInfo(userEmailEventNameData, adminEmailInfo);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "emailAdmin", e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    private: void notifyUser(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF("Email User", this, "notifyUser()");
    

                                    }
                                

    std::string subject = "Order " +this->orderHistory.getStatus() +" Attempt";;
    

    std::string textBody = "Order attempt: " +this->orderHistory.getId() +" Preprocessing by: " +this->user.getUserName();;
    

    BasicEmailInfo basicEmailInfo = StoreEmailInfo(this->storeFrontInterface, subject, textBody) as BasicEmailInfo;;
    

    EmailInfo emailInfo = EmailInfo(basicEmailInfo);;
    

    UserEmailEventNameData userEmailEventNameData = UserEmailEventNameData::getInstance(this->orderHistory.getStatus());;
    

    UserEmailEventHandler userEmailEventHandler = UserEmailEventHandlerSingletons::getInstance().getInstance(this->abeClientInformation, userEmailEventNameData, this->user);;
    
userEmailEventHandler.receiveEmailInfo(userEmailEventNameData, emailInfo);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "notifyUser", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

