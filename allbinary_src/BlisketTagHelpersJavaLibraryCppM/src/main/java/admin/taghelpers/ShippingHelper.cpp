
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

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class ShippingHelper: public TagHelper {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: WeblisketSession weblisketSession;

    private: StoreFrontInterface storeFrontInterface;

    private: HashMap<any, any> propertiesHashMap;

    private: PageContext pageContext;

    private: HttpServletRequest request;

    private: std::string shippingType;

public: ShippingHelper(HashMap<any, any> hashMap, PageContext pageContext){
this->pageContext= pageContext;
    
this->request= pageContext.getRequest() as HttpServletRequest;
    

    std::string storeName = hashMap.get(StoreFrontData::getInstance().NAME) as string;;
    

                        if(true)
                        
                                    {
                                    this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    

                                    }
                                
this->weblisketSession= WeblisketSession(hashMap, pageContext);
    
this->getFormData();
    
}


    private: void getFormData(){
this->shippingType= this->request.getParameter(ShippingMethodData::NAME);
    
}


    public: std::string setShippingType(){

        try {
            
    std::string success = "Successfully Set Shipping Type";;
    

    OrderInterface order = this->weblisketSession.getOrder();;
    
order.setShippingMethod(this->shippingType);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "setShippingType()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to view Shipping Type";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "setShippingType()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

