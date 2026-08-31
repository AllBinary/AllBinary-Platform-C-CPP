
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: orderHistory: OrderHistory;

    private: storeFrontInterface: StoreFrontInterface;

    private: user: UserInterface;

public constructor (AbeClientInformationInterface abeClientInformation, OrderHistory orderHistory){

            super();
        this.abeClientInformation= abeClientInformation;
    
this.orderHistory= orderHistory;
    

    storeName: string = orderHistory!.getStoreName()!;;
    
this.storeFrontInterface= StoreFrontFactory.getInstance(storeName);
    
this.user= UserEntityFactory.getInstance()!.getUser(orderHistory!.getUserName());
    
}


                //@Throws(Exception.constructor)
            
    public process(){
this.notifyStoreAdmin();
    
this.notifyUser();
    
}


                //@Throws(Exception.constructor)
            
    notifyStoreAdmin(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Order Email", this, "emailStoreAdmin");
    

                                    }
                                

    adminEmailSubject: string = "Order " +this.orderHistory!.getStatus() +" Attempt";;
    

    adminEmailTextBody: string = "Order attempt: " +this.orderHistory!.getId() +" Preprocessing by: " +this.user.getUserName();;
    

    adminBasicEmailInfo: BasicEmailInfo = new AdminEmailInfo(adminEmailSubject, adminEmailTextBody) as BasicEmailInfo;;
    

    storeAdminBasicEmailInfo: BasicEmailInfo = new StoreEmailInfo(this.storeFrontInterface, adminEmailSubject, adminEmailTextBody) as BasicEmailInfo;;
    

    storeAdminEmailInfo: EmailInfo = new EmailInfo(storeAdminBasicEmailInfo);;
    

    adminEmailInfo: EmailInfo = new EmailInfo(adminBasicEmailInfo);;
    

    userEmailEventNameData: UserEmailEventNameData = UserEmailEventNameData.getInstance(this.orderHistory!.getStatus())!;;
    

    adminUserEmailEventHandler: UserEmailEventHandler = AdminUserEmailEventHandlerSingletons.getInstance()!.getInstance(this.abeClientInformation, userEmailEventNameData)!;;
    

    storeAdminUserEmailEventHandler: UserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons.getInstance()!.getInstance(userEmailEventNameData, this.abeClientInformation, this.storeFrontInterface)!;;
    
storeAdminUserEmailEventHandler!.receiveEmailInfo(userEmailEventNameData, storeAdminEmailInfo);
    
adminUserEmailEventHandler!.receiveEmailInfo(userEmailEventNameData, adminEmailInfo);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "emailAdmin", e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    notifyUser(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Email User", this, "notifyUser()");
    

                                    }
                                

    subject: string = "Order " +this.orderHistory!.getStatus() +" Attempt";;
    

    textBody: string = "Order attempt: " +this.orderHistory!.getId() +" Preprocessing by: " +this.user.getUserName();;
    

    basicEmailInfo: BasicEmailInfo = new StoreEmailInfo(this.storeFrontInterface, subject, textBody) as BasicEmailInfo;;
    

    emailInfo: EmailInfo = new EmailInfo(basicEmailInfo);;
    

    userEmailEventNameData: UserEmailEventNameData = UserEmailEventNameData.getInstance(this.orderHistory!.getStatus())!;;
    

    userEmailEventHandler: UserEmailEventHandler = UserEmailEventHandlerSingletons.getInstance()!.getInstance(this.abeClientInformation, userEmailEventNameData, this.user)!;;
    
userEmailEventHandler!.receiveEmailInfo(userEmailEventNameData, emailInfo);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "notifyUser", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

