
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class BasicArrayList;

class StoreFrontInterface;
class UserInterface;
class UserRole;
class UserEntityFactory;
class UserEntityInterface;
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h"
class StoreFrontUsersStatisticsData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontUsersStatistics
            : public virtual Object
        , public StoreFrontUsersStatisticsInterface {

    private: int64_t totalNumberOfUsers;

    private: HashMap<Object*, Object*>* totalUsersByRoleHashMap;

public: StoreFrontUsersStatistics(StoreFrontInterface* storeFrontInterface);

    private: int64_t getNewTotal(UserRole* userRole);

    public: int64_t getNumberOfUsers();

    public: int64_t getNumberOfUsersByRole(std::string role);

    public: HashMap<Object*, Object*>* toHashMap();

    public: BasicArrayList* toVector();

    public: Object* getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICS_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICS_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/UserInterface.h>)
#include <org/allbinary/business/user/UserInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRole.h>)
#include <org/allbinary/business/user/role/UserRole.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/UserEntityFactory.h>)
#include <org/allbinary/data/tables/user/UserEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/UserEntityInterface.h>)
#include <org/allbinary/data/tables/user/UserEntityInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h")
#include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h"
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsData.h")
#include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsData.h"
#endif

        #endif
    
