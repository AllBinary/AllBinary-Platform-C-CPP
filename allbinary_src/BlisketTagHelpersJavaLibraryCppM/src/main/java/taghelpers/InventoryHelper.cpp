
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
        



            #include "../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpServletResponse.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/taghelpers/TagHelper.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchParams.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <views/admin/inventory/listings/InventoryViewFactory.h>

      
#include <views/admin/inventory/listings/InventoryViewSearchInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventoryHelper: public TagHelper {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: WeblisketSession weblisketSession;

    private: HttpServletResponse response;

    private: HttpServletRequest request;

    private: StreetAddress streetAddress;

    private: std::string id;

    private: SearchRequest searchRequest;

public: InventoryHelper(HashMap<any, any> propertiesHashMap, PageContext pageContext){
this->response= pageContext.getResponse() as HttpServletResponse;
    
this->request= pageContext.getRequest() as HttpServletRequest;
    

    std::string storeName = propertiesHashMap.get(StoreFrontData::getInstance().NAME) as string;;
    

    std::string xslFile = propertiesHashMap.get(TransformInfoData::getInstance().TEMPLATEFILENAME) as string;;
    

                        if(true)
                        
                                    {
                                    
    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(storeName);;
    

    std::string contentType = AcceptableResponseGenerator::getInstance().get(this->request);;
    

    SearchParams searchParams = SearchParams(this->request);;
    
this->searchRequest= SearchRequest(storeFrontInterface, searchParams, xslFile, contentType, propertiesHashMap, pageContext);
    

                                    }
                                
this->getFormData();
    
}


    private: void getFormData(){
this->id= this->request.getParameter(BasicItemData::ID);
    
}


    public: std::string viewSummary(){

        try {
            
    InventoryViewSearchInterface inventoryViewSearchInterface = InventoryViewFactory::getInstance(this->searchRequest);;
    

    std::string result = inventoryViewSearchInterface.getProduct(this->id);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF("Successfull Inventory View Summary", this, "viewSummary()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to View Summary";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "viewSummary()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error +"<br>" +"Exception: " +e +"<br>";
    
}

}


    public: std::string search(){

        try {
            
    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::string keywords = this->searchRequest.getParams().get().get(BasicItemData::KEYWORDS) as string;;
    

                        if(false || keywords.compareTo(stringUtil.EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Please enter a keyword in the search field above the Search button.";
    

                                    }
                                

    InventoryViewSearchInterface inventoryViewSearchInterface = InventoryViewFactory::getInstance(this->searchRequest);;
    

    std::string result = inventoryViewSearchInterface.searchSingleDynamicPage();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF("Successful Inventory Dynamic Search", this, "searchSingleDynamicPage()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to search Inventory by keyword";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "searchSingleDynamicPage()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error +"<br>" +"Exception: " +e +"<br>";
    
}

}


};

            

