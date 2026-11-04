
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
//Retrieves a single order for a user

OrderHistoryFactory::OrderHistoryFactory() : logUtil(LogUtil::getInstance()){
}


    auto OrderHistoryFactory::getInstance(std::string id) -> OrderHistory*{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    OrderHistoryEntity* orderHistoryEntityInterface = new org::allbinary::data::tables::user::commerce::inventory::order::OrderHistoryEntity();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<OrderHistory*>(orderHistoryEntityInterface->getOrder(id));
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->FACTORYERROR))
                        
                                    {
                                    logUtil->put(commonStrings->EXCEPTION, "OrderHistoryFactory", commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDERHISTORYFACTORY_CPP
