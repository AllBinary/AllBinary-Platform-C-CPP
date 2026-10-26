
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_STOREFRONTSTATISTICSDATA_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_STOREFRONTSTATISTICSDATA_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontStatisticsData
            : public Object
         {

    private: static StoreFrontStatisticsData instance() { return StoreFrontStatisticsData(); }

    public: static StoreFrontStatisticsData getInstance();

private: StoreFrontStatisticsData();

    public: const std::string NAME = "STOREFRONT_STATISTICS_NAME";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_STOREFRONTSTATISTICSDATA_H
