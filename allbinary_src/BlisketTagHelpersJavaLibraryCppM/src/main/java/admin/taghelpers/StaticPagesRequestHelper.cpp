
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
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>

      
#include <org/allbinary/logic/control/search/SearchParams.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <views/admin/inventory/listings/ProductListingFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelperInterface.h"

class StaticPagesRequestHelper: public AbContext, public TagHelperInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: HttpServletRequest* request;

    private: std::string storeName;

    private: SearchParams* searchParams;

    private: std::string xslFile;

public: StaticPagesRequestHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : AbContext(propertiesHashMap, pageContext){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
this->xslFile= propertiesHashMap->get(TransformInfoData::getInstance()->TEMPLATEFILENAME);
    
this->getFormData();
    
}


    private: void getFormData(){
this->storeName= this->request->getParameter(StoreFrontData::getInstance()->NAME);
    
this->searchParams= new SearchParams(this->request);
    
}


                //@Throws(Exception.constructor)
            
    private: void email(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Generated Static Pages Notification Email", this, "email");
    

                                    }
                                

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->storeName);;
    

    std::string adminEmailSubject = "Generated Static Pages Email Notification";;
    

    std::string adminEmailTextBody = "Generated static pages for store: " +this->storeName;;
    

    BasicEmailInfo* adminBasicEmailInfo = dynamic_cast<BasicEmailInfo*>(new AdminEmailInfo(adminEmailSubject, adminEmailTextBody));;
    

    BasicEmailInfo* storeAdminBasicEmailInfo = dynamic_cast<BasicEmailInfo*>(new StoreEmailInfo(storeFrontInterface, adminEmailSubject, adminEmailTextBody));;
    

    EmailInfo* storeAdminEmailInfo = new EmailInfo(storeAdminBasicEmailInfo);;
    

    EmailInfo* adminEmailInfo = new EmailInfo(adminBasicEmailInfo);;
    

    UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons::getInstance()->getInstance(this->abeClientInformation, UserEmailEventNameData::STOREGENERATINGSTATICPAGES);;
    

    UserEmailEventHandler* storeAdminUserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons::getInstance()->getInstance(UserEmailEventNameData::STOREGENERATINGSTATICPAGES, this->abeClientInformation, storeFrontInterface);;
    
storeAdminUserEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::STOREGENERATINGSTATICPAGES, storeAdminEmailInfo);
    
adminUserEmailEventHandler->receiveEmailInfo(UserEmailEventNameData::STOREGENERATINGSTATICPAGES, adminEmailInfo);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, "email", &e);
    

                                    }
                                
}

}


    public: std::string generateStaticPages(){

        try {
            
    std::string contentType = AcceptableResponseGenerator::getInstance()->get(this->request);;
    

    SearchRequest* searchRequest = new SearchRequest(
                            nullptr, this->searchParams, this->xslFile, contentType, this->getPropertiesHashMap(), this->getPageContext());;
    

    std::string success = ProductListingFactory::getInstance(searchRequest)->generateAll(this->storeName);;
    
this->email();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "generateStaticPages()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to generate staticpages table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "generateStaticPages()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string makePublic(){

        try {
            
    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->storeName);;
    

    AbPath* fromAbPath = new AbPath(storeFrontInterface->getTestHtmlPath() +storeFrontInterface->getStaticPath(), StringUtil::getInstance()->EMPTY_STRING);;
    

    AbPath* toAbPath = new AbPath(URLGLOBALS::getWebappPath() +storeFrontInterface->getName() +AbPathData::getInstance()->SEPARATOR +storeFrontInterface->getStaticPath(), StringUtil::getInstance()->EMPTY_STRING);;
    
FileUtil::getInstance()->copy(fromAbPath, toAbPath);
    

    std::string success = "Made Public";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "makePublic()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to makePublic";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "makePublic()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

