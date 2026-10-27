
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontOrdersHistoryStatisticsData
            : public virtual Object
         {

    private: static StoreFrontOrdersHistoryStatisticsData* instance_owner();
    private: static StoreFrontOrdersHistoryStatisticsData* instance;

    public: static StoreFrontOrdersHistoryStatisticsData* getInstance();

private: StoreFrontOrdersHistoryStatisticsData();

    public: const std::string NAME = "STOREFRONT_ORDERS_HISTORY_STATISTICS_NAME";

    public: const std::string NUMBEROFORDERS = "STOREFRONT_ORDERS_HISTORY_STATISTICS_NUMBER_OF_ORDERS";

    public: const std::string SUBTOTAL = "STOREFRONT_ORDERS_HISTORY_STATISTICS_SUBTOTAL";

    public: const std::string SHIPPINGCOST = "STOREFRONT_ORDERS_HISTORY_STATISTICS_SHIPPINGCOST";

    public: const std::string TAXES = "STOREFRONT_ORDERS_HISTORY_STATISTICS_TAXES";

    public: const std::string TOTAL = "STOREFRONT_ORDERS_HISTORY_STATISTICS_TOTAL";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSDATA_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_HISTORY_STOREFRONTORDERSHISTORYSTATISTICSDATA_H_COMPLETE
        
        #endif
    
