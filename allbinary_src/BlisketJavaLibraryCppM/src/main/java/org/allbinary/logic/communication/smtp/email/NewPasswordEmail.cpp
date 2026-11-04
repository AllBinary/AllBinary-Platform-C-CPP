
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_NEWPASSWORDEMAIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_NEWPASSWORDEMAIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/email/NewPasswordEmail.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NewPasswordEmail::NewPasswordEmail(AbeClientInformationInterface* abeClientInformation, UserInterface* userInterface, std::string newPassword) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->abeClientInformation= abeClientInformation;
    
this->userInterface= userInterface;
    
this->newPassword= newPassword;
    
}


                //@Throws(Exception.constructor)
            
    auto NewPasswordEmail::process() -> void{
this->notifyStoreAdmin();
    
this->notifyUser();
    
}


                //@Throws(Exception.constructor)
            
    auto NewPasswordEmail::notifyStoreAdmin() -> void{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("notifyStoreAdmin", this, "notifyStoreAdmin");
    

                                    }
                                

    std::string emailSubject = JavaString::valueOf("New Password For User: ") +JavaString::valueOf(this->userInterface->getUserName());;
    

    std::string emailBody = JavaString::valueOf("New Password: ") +JavaString::valueOf(this->newPassword);;
    

    BasicEmailInfo* basicEmailInfo = dynamic_cast<BasicEmailInfo*>(new AdminEmailInfo(emailSubject, emailBody));;
    

    EmailInfo* emailInfo = new EmailInfo(basicEmailInfo);;
    

    UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons::getInstance()->getInstance(this->abeClientInformation, UserEmailEventNameData::NEWPASSWORD);;
    
adminUserEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::NEWPASSWORD, emailInfo);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "emailAdmin", &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto NewPasswordEmail::notifyUser() -> void{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Email User", this, "notifyUser()");
    

                                    }
                                

    std::string subject = "New Password";;
    

    std::string body = JavaString::valueOf("New Password: ") +JavaString::valueOf(this->newPassword);;
    

    BasicEmailInfo* basicEmailInfo = dynamic_cast<BasicEmailInfo*>(new AdminEmailInfo(subject, body));;
    

    EmailInfo* emailInfo = new EmailInfo(basicEmailInfo);;
    

    UserEmailEventHandler* userEmailEventHandler = UserEmailEventHandlerSingletons::getInstance()->getInstance(this->abeClientInformation, UserEmailEventNameData::NEWPASSWORD, this->userInterface);;
    
userEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::NEWPASSWORD, emailInfo);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "notifyUser", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_NEWPASSWORDEMAIL_CPP
