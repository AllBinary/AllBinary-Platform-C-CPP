
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
        



        #ifndef ADMIN_TAGHELPERS_BASICTEXTEMAILHELPER_CPP
        #define ADMIN_TAGHELPERS_BASICTEXTEMAILHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/BasicTextEmailHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "admin/taghelpers/TagHelper.h"


BasicTextEmailHelper::BasicTextEmailHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){
this->pageContext= pageContext;
    
this->hashMap= hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicTextEmailHelper::send() -> void{

    std::string adminEmailSubject = JavaBoxes::unbox<std::string>(this->hashMap->get("Subject"));;
    

    std::string adminEmailTextBody = JavaBoxes::unbox<std::string>(this->hashMap->get("Body"));;
    

    BasicEmailInfo* adminBasicEmailInfo = dynamic_cast<BasicEmailInfo*>(new AdminEmailInfo(adminEmailSubject, adminEmailTextBody));;
    

    EmailInfo* adminEmailInfo = new EmailInfo(adminBasicEmailInfo);;
    

    UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons::getInstance()->getInstance(this->abeClientInformation, UserEmailEventNameData::INSTALLER);;
    
adminUserEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::INSTALLER, adminEmailInfo);
    
}




        #endif //ADMIN_TAGHELPERS_BASICTEXTEMAILHELPER_CPP
