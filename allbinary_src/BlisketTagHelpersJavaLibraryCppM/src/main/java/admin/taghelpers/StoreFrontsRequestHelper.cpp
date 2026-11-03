
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
        



        #ifndef ADMIN_TAGHELPERS_STOREFRONTSREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_STOREFRONTSREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/StoreFrontsRequestHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"


StoreFrontsRequestHelper::StoreFrontsRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){
this->pageContext= pageContext;
    
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
this->weblisketSession= new WeblisketSession(hashMap, pageContext);
    
this->portion= new Portion(hashMap);
    
this->getFormData();
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFrontsRequestHelper::getFormData() -> void{
this->storeName= this->weblisketSession->getStoreName();
    
this->modifyingStoreFrontInterface= dynamic_cast<StoreFrontInterface*>(new StoreFront(this->request));
    
}


    auto StoreFrontsRequestHelper::update() -> std::string{

        try {
            
    std::string success = "Updated Successfully";;
    

    HashMap<Object*, Object*>* hashMapData = this->modifyingStoreFrontInterface->toHashMap();;
    
StoreFrontsEntityFactory::getInstance()->getStoreFrontsEntityInstance()->update(hashMapData);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to update storefronts table";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(Exception.constructor)
            
    auto StoreFrontsRequestHelper::sendStoreCreatedEmails() -> void{

    std::string storeManagerEmailSubject = JavaString::valueOf("Store Manager Nofification For Store: ") +JavaString::valueOf(this->modifyingStoreFrontInterface->getName());;
    

    std::string adminEmailSubject = JavaString::valueOf("Admin Notification For Store: ") +JavaString::valueOf(this->modifyingStoreFrontInterface->getName());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Store Created: ");
    
stringBuffer->append(this->modifyingStoreFrontInterface->getName());
    
stringBuffer->append("\n\n");
    
stringBuffer->append("Click here for the Admin Interface:\n");
    
stringBuffer->append(this->modifyingStoreFrontInterface->getCurrentHomeHostName());
    
stringBuffer->append("/admin/login.jsp\n\n");
    
stringBuffer->append("Goto Your Store:\n");
    
stringBuffer->append(this->modifyingStoreFrontInterface->getCurrentHomeHostName());
    
stringBuffer->append(this->modifyingStoreFrontInterface->getName());
    
stringBuffer->append("/index.jsp");
    
stringBuffer->append("\n\n");
    
stringBuffer->append("UserName: ");
    
stringBuffer->append(this->weblisketSession->getUserName());
    

    std::string adminEmailTextBody = stringBuffer->toString();;
    

    BasicEmailInfo* adminBasicEmailInfo = dynamic_cast<BasicEmailInfo*>(new AdminEmailInfo(adminEmailSubject, adminEmailTextBody));;
    

    BasicEmailInfo* storeAdminBasicEmailInfo = dynamic_cast<BasicEmailInfo*>(new StoreEmailInfo(this->modifyingStoreFrontInterface, storeManagerEmailSubject, adminEmailTextBody));;
    

    EmailInfo* storeAdminEmailInfo = new EmailInfo(storeAdminBasicEmailInfo);;
    

    EmailInfo* adminEmailInfo = new EmailInfo(adminBasicEmailInfo);;
    

    UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons::getInstance()->getInstance(this->abeClientInformation, UserEmailEventNameData::STORECREATED);;
    

    UserEmailEventHandler* storeAdminUserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons::getInstance()->getInstance(UserEmailEventNameData::STORECREATED, this->abeClientInformation, this->modifyingStoreFrontInterface);;
    
storeAdminUserEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::STORECREATED, storeAdminEmailInfo);
    
adminUserEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::STORECREATED, adminEmailInfo);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto StoreFrontsRequestHelper::install() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Intall StoreFront Successfully: ");
    
stringBuffer->appendint(JavaBoxes::value<int32_t>(this->portion->getCurrent()));
    
stringBuffer->append(" of ");
    
stringBuffer->appendint(JavaBoxes::value<int32_t>(this->portion->getTotal()));
    

    std::string success = stringBuffer->toString();;
    
this->modifyingStoreFrontInterface->install(JavaBoxes::value<int32_t>(this->portion->getCurrent()), JavaBoxes::value<int32_t>(this->portion->getTotal()));
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "install()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to Install storefront";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "install()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto StoreFrontsRequestHelper::insert() -> std::string{

        try {
            
    std::string success = "Added Successfully";;
    

    BasicArrayList* values = this->modifyingStoreFrontInterface->toVector();;
    
StoreFrontsEntityFactory::getInstance()->getStoreFrontsEntityInstance()->insert(values);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to add storefront";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "insert()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto StoreFrontsRequestHelper::delete_() -> std::string{

        try {
            
    std::string success = "Delete Successfully";;
    
StoreFrontsEntityFactory::getInstance()->getStoreFrontsEntityInstance()->delete_(this->storeName);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to delete storefronts table";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "delete()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_STOREFRONTSREQUESTHELPER_CPP
