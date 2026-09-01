
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderHistory.h"
//Retrieves a single order for a user
class OrderHistoryFactory
            : public Object
         {

    public: static OrderHistory getInstance(std::string id){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    OrderHistoryEntity orderHistoryEntityInterface = org::allbinary::data::tables::user::commerce::inventory::order::OrderHistoryEntity();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderHistoryEntityInterface.getOrder(id) as OrderHistory;
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().FACTORYERROR))
                        
                                    {
                                    logUtil.put(commonStrings.EXCEPTION, "OrderHistoryFactory", commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: OrderHistoryFactory(){
}


};

            

