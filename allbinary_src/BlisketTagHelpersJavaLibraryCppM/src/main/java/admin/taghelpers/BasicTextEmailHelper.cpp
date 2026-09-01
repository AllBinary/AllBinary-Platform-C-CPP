
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
        



            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class BasicTextEmailHelper: public TagHelper {

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: HashMap<any, any> hashMap;

    private: PageContext pageContext;

public: BasicTextEmailHelper(HashMap<any, any> hashMap, PageContext pageContext){
this->pageContext= pageContext;
    
this->hashMap= hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: void send(){

    std::string adminEmailSubject = this->hashMap.get("Subject") as string;;
    

    std::string adminEmailTextBody = this->hashMap.get("Body") as string;;
    

    BasicEmailInfo adminBasicEmailInfo = AdminEmailInfo(adminEmailSubject, adminEmailTextBody) as BasicEmailInfo;;
    

    EmailInfo adminEmailInfo = EmailInfo(adminBasicEmailInfo);;
    

    UserEmailEventHandler adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons::getInstance().getInstance(this->abeClientInformation, UserEmailEventNameData::INSTALLER);;
    
adminUserEmailEventHandler.receiveEmailInfo(UserEmailEventNameData::INSTALLER, adminEmailInfo);
    
}


};

            

