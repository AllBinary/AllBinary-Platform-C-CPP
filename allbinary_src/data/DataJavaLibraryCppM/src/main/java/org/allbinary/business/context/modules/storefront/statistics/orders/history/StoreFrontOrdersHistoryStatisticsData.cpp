
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontOrdersHistoryStatisticsData
            : public Object
         {

    private: static StoreFrontOrdersHistoryStatisticsData instance() { return StoreFrontOrdersHistoryStatisticsData(); }

    public: static StoreFrontOrdersHistoryStatisticsData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreFrontOrdersHistoryStatisticsData::instance();
    
}


private: StoreFrontOrdersHistoryStatisticsData(){
}


    public: const std::string NAME = "STOREFRONT_ORDERS_HISTORY_STATISTICS_NAME";

    public: const std::string NUMBEROFORDERS = "STOREFRONT_ORDERS_HISTORY_STATISTICS_NUMBER_OF_ORDERS";

    public: const std::string SUBTOTAL = "STOREFRONT_ORDERS_HISTORY_STATISTICS_SUBTOTAL";

    public: const std::string SHIPPINGCOST = "STOREFRONT_ORDERS_HISTORY_STATISTICS_SHIPPINGCOST";

    public: const std::string TAXES = "STOREFRONT_ORDERS_HISTORY_STATISTICS_TAXES";

    public: const std::string TOTAL = "STOREFRONT_ORDERS_HISTORY_STATISTICS_TOTAL";

};

            

