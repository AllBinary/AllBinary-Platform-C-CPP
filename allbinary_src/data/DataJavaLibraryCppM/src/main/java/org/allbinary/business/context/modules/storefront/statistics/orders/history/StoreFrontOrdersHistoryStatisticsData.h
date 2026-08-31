
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSDATA_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSDATA_H

            #include "../../../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontOrdersHistoryStatisticsData
            : public Object
         {
        

    private: static const instance: StoreFrontOrdersHistoryStatisticsData = new StoreFrontOrdersHistoryStatisticsData();

    public static StoreFrontOrdersHistoryStatisticsData getInstance();

private constructor ();

    public const NAME: string = "STOREFRONT_ORDERS_HISTORY_STATISTICS_NAME";

    public const NUMBEROFORDERS: string = "STOREFRONT_ORDERS_HISTORY_STATISTICS_NUMBER_OF_ORDERS";

    public const SUBTOTAL: string = "STOREFRONT_ORDERS_HISTORY_STATISTICS_SUBTOTAL";

    public const SHIPPINGCOST: string = "STOREFRONT_ORDERS_HISTORY_STATISTICS_SHIPPINGCOST";

    public const TAXES: string = "STOREFRONT_ORDERS_HISTORY_STATISTICS_TAXES";

    public const TOTAL: string = "STOREFRONT_ORDERS_HISTORY_STATISTICS_TOTAL";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSDATA_H
