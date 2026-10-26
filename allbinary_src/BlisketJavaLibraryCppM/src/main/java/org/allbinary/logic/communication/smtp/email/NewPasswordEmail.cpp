
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NewPasswordEmail
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: AbeClientInformationInterface abeClientInformation;

    private: UserInterface userInterface;

    private: std::string newPassword;

public: NewPasswordEmail(AbeClientInformationInterface abeClientInformation, UserInterface userInterface, std::string newPassword){
this->abeClientInformation= abeClientInformation;
    
this->userInterface= userInterface;
    
this->newPassword= newPassword;
    
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
                                    this->logUtil.putF("notifyStoreAdmin", this, "notifyStoreAdmin");
    

                                    }
                                

    std::string emailSubject = "New Password For User: " +this->userInterface.getUserName();;
    

    std::string emailBody = "New Password: " +this->newPassword;;
    

    BasicEmailInfo basicEmailInfo = AdminEmailInfo(emailSubject, emailBody);;
    

    EmailInfo emailInfo = EmailInfo(basicEmailInfo);;
    

    UserEmailEventHandler adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons::getInstance().getInstance(this->abeClientInformation, UserEmailEventNameData::NEWPASSWORD);;
    
adminUserEmailEventHandler.receiveEmailInfo(UserEmailEventNameData::NEWPASSWORD, emailInfo);
    

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
                                

    std::string subject = "New Password";;
    

    std::string body = "New Password: " +this->newPassword;;
    

    BasicEmailInfo basicEmailInfo = AdminEmailInfo(subject, body);;
    

    EmailInfo emailInfo = EmailInfo(basicEmailInfo);;
    

    UserEmailEventHandler userEmailEventHandler = UserEmailEventHandlerSingletons::getInstance().getInstance(this->abeClientInformation, UserEmailEventNameData::NEWPASSWORD, this->userInterface);;
    
userEmailEventHandler.receiveEmailInfo(UserEmailEventNameData::NEWPASSWORD, emailInfo);
    

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

            

