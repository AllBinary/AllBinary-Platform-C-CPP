
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_STOREFRONTORDERSSTATISTICSDATA_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_STOREFRONTORDERSSTATISTICSDATA_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontOrdersStatisticsData
            : public Object
         {

    private: static StoreFrontOrdersStatisticsData* instance() { static std::unique_ptr<StoreFrontOrdersStatisticsData> value(new StoreFrontOrdersStatisticsData()); return value.get(); }

    public: static StoreFrontOrdersStatisticsData* getInstance();

private: StoreFrontOrdersStatisticsData();

    public: const std::string NAME = "STOREFRONT_ORDERS_STATISTICS_NAME";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_ORDERS_STOREFRONTORDERSSTATISTICSDATA_H
