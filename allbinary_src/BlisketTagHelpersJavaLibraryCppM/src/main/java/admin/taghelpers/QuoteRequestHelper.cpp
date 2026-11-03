
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
        



        #ifndef ADMIN_TAGHELPERS_QUOTEREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_QUOTEREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/QuoteRequestHelper.h"
        

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

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"
//TWB - Am I missing the correct Quote Request? Probably not

QuoteRequestHelper::QuoteRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()){

    HttpServletRequest* request = dynamic_cast<HttpServletRequest*>(pageContext->getRequest());;
    
this->weblisketSession= new WeblisketSession(hashMap, pageContext);
    
this->quoteRequest= new QuoteRequest(this->weblisketSession->getUserName(), request);
    

    std::string storeName = JavaBoxes::unbox<std::string>(hashMap->get(StoreFrontData::getInstance()->NAME));;
    

                        if(true)
                        
                                    {
                                    this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    

                                    }
                                
}


    auto QuoteRequestHelper::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->quoteRequest->isValid();;
    
}


    auto QuoteRequestHelper::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->quoteRequest->validationInfo();;
    
}


    auto QuoteRequestHelper::insert() -> std::string{

        try {
            
    BasicArrayList* values = this->quoteRequest->toVector();;
    
QuoteRequestEntityFactory::getInstance()->getQuoteRequestEntityInstance()->insert(values);
    

    std::string success = "New QuoteRequest Successfully added to the QuoteRequest Table";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "add()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to add QuoteRequest";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "add()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto QuoteRequestHelper::update() -> std::string{

        try {
            
    HashMap<Object*, Object*>* values = this->quoteRequest->toHashMap();;
    
QuoteRequestEntityFactory::getInstance()->getQuoteRequestEntityInstance()->update(this->quoteRequest->getUserName(), values);
    

    std::string success = "New QuoteRequest Successfully updated";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to update QuoteRequest";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto QuoteRequestHelper::delete_() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return commonStrings.NOT_IMPLEMENTED;
    
}




        #endif //ADMIN_TAGHELPERS_QUOTEREQUESTHELPER_CPP
