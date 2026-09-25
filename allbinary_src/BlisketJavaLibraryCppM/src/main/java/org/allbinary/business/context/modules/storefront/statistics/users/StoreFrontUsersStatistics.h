
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICS_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICS_H

            #include <vector>
        
            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/UserEntityInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontUsersStatisticsInterface.h"
#include "StoreFrontUsersStatisticsData.h"

class StoreFrontUsersStatistics
            : public Object
        : public StoreFrontUsersStatisticsInterface {

    private: Long totalNumberOfUsers;

    private: HashMap<any, any> totalUsersByRoleHashMap;

public: StoreFrontUsersStatistics(StoreFrontInterface storeFrontInterface);

    private: Long getNewTotal(UserRole userRole);

    public: Long getNumberOfUsers();

    public: Long getNumberOfUsersByRole(std::string role);

    public: HashMap<any, any> toHashMap();

    public: BasicArrayList toVector();

    public: Object* getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICS_H
