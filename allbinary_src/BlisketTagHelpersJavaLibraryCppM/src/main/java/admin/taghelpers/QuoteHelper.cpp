
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntity.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/BasicTable.h"

class QuoteHelper: public BasicTable {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: WeblisketSession* weblisketSession;

    private: StoreFrontInterface* storeFrontInterface;

    private: Portion* portion;

public: QuoteHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext){

    std::string storeName = hashMap->get(StoreFrontData::getInstance()->NAME);;
    

                        if(true)
                        
                                    {
                                    this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    

                                    }
                                
                        else {
                            this->storeFrontInterface= new StoreFront();
    

                        }
                            
this->weblisketSession= new WeblisketSession(hashMap, pageContext);
    
this->portion= new Portion(hashMap);
    
}


                //@Throws(Exception.constructor)
            
    private: void emailUser(QuoteRequest* quoteRequest){

    UserInterface* user = UserEntityFactory::getInstance()->getUser(quoteRequest->getUserName());;
    

    std::string userEmailSubject = "Quote Request Receipt";;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("This is just a verification email. ");
    
stringBuffer->append("We usually respond to quote request within 24 hours.");
    
stringBuffer->append("\n\nThank You For Your Business.");
    

    std::string userEmailTextBody = stringBuffer->toString();;
    

    BasicEmailInfo* basicEmailInfo = dynamic_cast<BasicEmailInfo*>(new StoreEmailInfo(this->storeFrontInterface, userEmailSubject, userEmailTextBody));;
    

    EmailInfo* emailInfo = new EmailInfo(basicEmailInfo);;
    

    UserEmailEventHandler* userEmailEventHandler = UserEmailEventHandlerSingletons::getInstance()->getInstance(this->abeClientInformation, UserEmailEventNameData::QUOTEREQUEST, user);;
    
userEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::QUOTEREQUEST, emailInfo);
    
}


                //@Throws(Exception.constructor)
            
    private: void emailAdmins(QuoteRequest* quoteRequest){

    std::string adminEmailSubject = "Quote Request";;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("\nUserName: ");
    
stringBuffer->append(quoteRequest->getUserName());
    
stringBuffer->append("\nProject Info: \n");
    
stringBuffer->append(quoteRequest->getProjectInfo());
    
stringBuffer->append("\nUser Comments: \n");
    
stringBuffer->append(quoteRequest->getUserComments());
    
stringBuffer->append("\nBudget: \n");
    
stringBuffer->append(quoteRequest->getBudget());
    
stringBuffer->append("\nTime Frame: \n");
    
stringBuffer->append(quoteRequest->getTimeFrame());
    
stringBuffer->append("\nComments: \n");
    
stringBuffer->append(quoteRequest->getComments());
    

    std::string adminEmailTextBody = stringBuffer->toString();;
    

    BasicEmailInfo* basicEmailInfo = dynamic_cast<BasicEmailInfo*>(new StoreEmailInfo(this->storeFrontInterface, adminEmailSubject, adminEmailTextBody));;
    

    EmailInfo* emailInfo = new EmailInfo(basicEmailInfo);;
    

    UserEmailEventHandler* storeAdminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons::getInstance()->getInstance(this->abeClientInformation, UserEmailEventNameData::QUOTEREQUEST);;
    

    UserEmailEventHandler* adminUserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons::getInstance()->getInstance(UserEmailEventNameData::QUOTEREQUEST, this->abeClientInformation, this->storeFrontInterface);;
    
storeAdminUserEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::QUOTEREQUEST, emailInfo);
    
adminUserEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::QUOTEREQUEST, emailInfo);
    
}


                //@Throws(Exception.constructor)
            
    public: std::string email(){

        try {
            
    QuoteRequestEntity* quoteRequestEntity = QuoteRequestEntityFactory::getInstance()->getQuoteRequestEntityInstance();;
    

    std::string userName = this->weblisketSession->getUserName();;
    

    BasicArrayList* vector = quoteRequestEntity->getIds(userName);;
    

    int32_t id = 0;;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    int32_t nextId = (get).intValue();;
    

                        if(id < nextId)
                        
                                    {
                                    id= nextId;
    

                                    }
                                
}


    QuoteRequest* quoteRequest = quoteRequestEntity->get(userName, id);;
    

                        if(quoteRequest != 
                                    nullptr
                                )
                        
                                    {
                                    this->emailUser(quoteRequest);
    
this->emailAdmins(quoteRequest);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Thank You For Your Business.<p/>";
    

                                    }
                                
                        else {
                            


                            throw new Exception("No Quote Request");
                    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, "email", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Thank You For Your Business.<p>";
    
}

}


    public: std::string drop(){

        try {
            
    std::string success = QuoteRequestEntityFactory::getInstance()->getQuoteRequestEntityInstance()->dropTable();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, this->commonStrings.DROP);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to drop QuoteRequest table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, this->commonStrings.DROP, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string create(){

        try {
            
    std::string success = QuoteRequestEntityFactory::getInstance()->getQuoteRequestEntityInstance()->createTable();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "create()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to create new QuoteRequest table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "create()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string restore(){

        try {
            
    std::string success = "Restore Successful";;
    

    std::string result = AbSqlTableUtil::getInstance()->restoreTable(QuoteRequestEntityFactory::getInstance()->getQuoteRequestEntityInstance(), portion);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "restore()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to restore backup";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "restore()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string backup(){

        try {
            
    std::string success = "Restore Successful";;
    

    std::string result = AbSqlTableUtil::getInstance()->backupTable(QuoteRequestEntityFactory::getInstance()->getQuoteRequestEntityInstance());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "backup()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to make backup";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "backup()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

