
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

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/taghelpers/TagHelper.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryFactory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderHistoryHelper: public TagHelper {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: weblisketSession: WeblisketSession;

    private: storeFrontInterface: StoreFrontInterface;

    private: const propertiesHashMap: HashMap<any, any>;

    private: const pageContext: PageContext;

    private: const request: HttpServletRequest;

    private: streetAddress: StreetAddress;

    private: id: string;

    private: groupId: string;

    private: status: string;

    private: newStatus: string;

public constructor (HashMap<any, any> propertiesHashMap, PageContext pageContext){

            super();
        this.propertiesHashMap= propertiesHashMap;
    
this.pageContext= pageContext;
    
this.request= pageContext!.getRequest() as HttpServletRequest;
    

    storeName: string = propertiesHashMap!.get(StoreFrontData.getInstance()!.NAME) as string;;
    
this.newStatus= propertiesHashMap!.get(OrderHistoryData.STATUS) as string;
    

                        if(storeName != 
                                    null
                                )
                        
                                    {
                                    this.storeFrontInterface= StoreFrontFactory.getInstance(storeName);
    

                                    }
                                
this.getFormData();
    
}


    getFormData(){
this.id= this.request.getParameter(OrderData.ID);
    
this.groupId= this.request.getParameter(ShippingMethodData.GROUP);
    

                        if(this.newStatus == 
                                    null
                                )
                        
                                    {
                                    this.newStatus= this.request.getParameter(OrderHistoryData.STATUS);
    

                                    }
                                
}


    public string setOrderStatus(){

        try {
            
    success: string = "Status successfully set to: " +this.status;;
    

    orderReviewInterface: OrderHistoryInterface = OrderHistoryFactory.getInstance(this.id)!;;
    

    status: string = orderReviewInterface!.getStatus()!;;
    

                        if(status.compareTo(OrderHistoryData.CANCELLED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Order " +this.id +" Already Cancelled<br/>";
    

                                    }
                                
                             else 
                        if(status.compareTo(OrderHistoryData.SHIPPED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Order " +this.id +" Already Shipped. You can't cancel a shipped order.<br/>";
    

                                    }
                                
                             else 
                        if(status.compareTo(OrderHistoryData.PREPROCESSING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Order " +this.id +" has been cancelled.<br/>";
    

                                    }
                                
                             else 
                        if(status.compareTo(OrderHistoryData.PARTIALLYSHIPPED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Order " +this.id +" Partially Shipped. You can cancel unshipped items, but not the whole order.<br/>";
    

                                    }
                                
                             else 
                        if(status.compareTo(OrderHistoryData.PROCESSING) == 0)
                        
                                    {
                                    
    orderHistoryEntityInterface: OrderHistoryEntityInterface = OrderHistoryEntityFactory.getInstance()!;;
    
orderHistoryEntityInterface!.setStatus(this.id, this.newStatus);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Order " +this.id +" has been cancelled.<br/>";
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "setOrderStatus()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Setting Order Status";
    

                //: 
} catch(e) 
            {

    error: string = "Failed to set order status";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "setOrderStatus()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error +"<br/>" +"Exception: " +e +"<br/>";
    
}

}


};

            

