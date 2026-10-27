
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSDATA_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSDATA_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontUsersStatisticsData
            : public Object
         {

    private: static StoreFrontUsersStatisticsData* instance() { static std::unique_ptr<StoreFrontUsersStatisticsData> value(new StoreFrontUsersStatisticsData()); return value.get(); }

    public: static StoreFrontUsersStatisticsData* getInstance();

private: StoreFrontUsersStatisticsData();

    public: const std::string NAME = "STOREFRONT_USERS_STATISTICS_NAME";

    public: const std::string NUMBEROFUSERS = "STOREFRONT_USERS_STATISTICS_NUMBER_OF_USERS";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICSDATA_H
