
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICSDATA_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICSDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontInventoryStatisticsData
            : public virtual Object
         {

    private: static StoreFrontInventoryStatisticsData* instance_owner();
    private: static StoreFrontInventoryStatisticsData* instance;

    public: static StoreFrontInventoryStatisticsData* getInstance();

private: StoreFrontInventoryStatisticsData();

    public: const std::string NAME = "STOREFRONT_INVENTORY_STATISTICS_NAME";

    public: const std::string NUMBEROFITEMS = "STOREFRONT_INVENTORY_STATISTICS_NUMBER_OF_ITEMS";

    public: const std::string TOTALVALUE = "STOREFRONT_INVENTORY_STATISTICS_TOTAL_VALUE";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICSDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICSDATA_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_INVENTORY_STOREFRONTINVENTORYSTATISTICSDATA_H_COMPLETE
        
        #endif
    
