
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
        



            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class OrderItemsRequestHelper: public TagHelper {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

    private: std::string id;

    private: std::string groupId;

    private: std::string status;

public: OrderItemsRequestHelper(HashMap<Object*, Object*> hashMap, PageContext pageContext){
this->request= pageContext.getRequest();
    
this->getFormData();
    
}


    private: void getFormData(){
this->id= this->request.getParameter(OrderData::ID);
    
this->groupId= this->request.getParameter(ShippingMethodData::GROUP);
    
this->status= this->request.getParameter(OrderHistoryData::STATUS);
    
}


    public: std::string setOrderStatus(std::string newStatus){

        try {
            
                        if(false)
                        newStatus= this->status;
                                

    std::string success = "Status successfully set to: " +newStatus;;
    
OrderItemsEntityFactory::getInstance().setStatus(this->id, this->groupId, newStatus);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "setOrderStatus(newStatus)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to view order table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "setOrderStatus(newStatus)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string setOrderStatus(){

        try {
            
    std::string success = "Status successfully set to: " +this->status;;
    
OrderItemsEntityFactory::getInstance().setStatus(this->id, this->groupId, this->status);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "setOrderStatus(newStatus)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to view order table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "setOrderStatus(newStatus)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

