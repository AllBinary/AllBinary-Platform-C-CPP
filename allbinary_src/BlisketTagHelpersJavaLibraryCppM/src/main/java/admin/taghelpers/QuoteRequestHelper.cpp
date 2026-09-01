
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

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"
//TWB - Am I missing the correct Quote Request? Probably not
class QuoteRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: WeblisketSession weblisketSession;

    private: StoreFrontInterface storeFrontInterface;

    private: QuoteRequest quoteRequest;

public: QuoteRequestHelper(HashMap<any, any> hashMap, PageContext pageContext){

    HttpServletRequest request = pageContext.getRequest() as HttpServletRequest;;
    
this->weblisketSession= WeblisketSession(hashMap, pageContext);
    
this->quoteRequest= QuoteRequest(this->weblisketSession.getUserName(), request);
    

    std::string storeName = hashMap.get(StoreFrontData::getInstance().NAME) as string;;
    

                        if(true)
                        
                                    {
                                    this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    

                                    }
                                
}


    public: Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->quoteRequest.isValid();;
    
}


    public: std::string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->quoteRequest.validationInfo();;
    
}


    public: std::string insert(){

        try {
            
    Vector values = this->quoteRequest.toVector();;
    
QuoteRequestEntityFactory::getInstance().getQuoteRequestEntityInstance().insert(values);
    

    std::string success = "New QuoteRequest Successfully added to the QuoteRequest Table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "add()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to add QuoteRequest";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "add()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string update(){

        try {
            
    HashMap<any, any> values = this->quoteRequest.toHashMap();;
    
QuoteRequestEntityFactory::getInstance().getQuoteRequestEntityInstance().update(this->quoteRequest.getUserName(), values);
    

    std::string success = "New QuoteRequest Successfully updated";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to update QuoteRequest";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "update()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string delete_(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commonStrings.NOT_IMPLEMENTED;
    
}


};

            

