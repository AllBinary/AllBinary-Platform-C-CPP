
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSINTERFACE_H

            #include "../../../../../../../../../java/lang/Long.h"
        
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontOrdersHistoryStatisticsInterface: public TableMappingInterface {
        

    Long getNumberOfOrders();

    Money getSubTotal();

    Money getShippingCost();

    Money getTaxes();

    Money getTotal();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSINTERFACE_H
