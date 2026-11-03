
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICS_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatistics.h"
        

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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/UserEntityInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsData.h"


StoreFrontUsersStatistics::StoreFrontUsersStatistics(StoreFrontInterface* storeFrontInterface){
this->totalUsersByRoleHashMap= StdUtil::getInstance()->createHashMap();
    

    UserEntityInterface* userEntityInterface = UserEntityFactory::getInstance();;
    

    BasicArrayList* userVector = userEntityInterface->getCustomers();;
    
this->totalNumberOfUsers= int64_t(userVector->size());
    

    int32_t size = userVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserInterface* userInterface = dynamic_cast<UserInterface*>(userVector->get(index));;
    

    UserRole* nextUserRole = userInterface->getRole();;
    

    int64_t currentNumberOfUsersForRole = this->getNewTotal(nextUserRole);;
    
this->totalUsersByRoleHashMap->put(nextUserRole, currentNumberOfUsersForRole);
    
}

}


    auto StoreFrontUsersStatistics::getNewTotal(UserRole* userRole) -> int64_t{

    int64_t numberOfUsersForRoleLong = JavaBoxes::unbox<int64_t>(this->totalUsersByRoleHashMap->get(userRole));;
    

                        if(false)
                        
                                    {
                                    numberOfUsersForRoleLong= int64_t(0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return int64_t(numberOfUsersForRoleLong +1);
    
}


    auto StoreFrontUsersStatistics::getNumberOfUsers() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->totalNumberOfUsers;
    
}


    auto StoreFrontUsersStatistics::getNumberOfUsersByRole(std::string role) -> int64_t{

    int64_t totalForRole = JavaBoxes::unbox<int64_t>(this->totalUsersByRoleHashMap->get(role));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return totalForRole;
    
}


    auto StoreFrontUsersStatistics::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(StoreFrontUsersStatisticsData::getInstance()->NUMBEROFUSERS, this->getNumberOfUsers().toString());
    

    Set* setOfUserRoles = this->totalUsersByRoleHashMap->keys();;
    

    UserRole* nextUserRole;;
    

    std::vector<Object*> userRoleArray = setOfUserRoles->toArray();;
    

    int32_t size = userRoleArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextUserRole= dynamic_cast<UserRole*>(userRoleArray[index]);
    

    int64_t totalForRole = JavaBoxes::unbox<int64_t>(this->totalUsersByRoleHashMap->get(nextUserRole));;
    
hashMap->put(nextUserRole->toString(), JavaString::valueOf(totalForRole));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


    auto StoreFrontUsersStatistics::toVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto StoreFrontUsersStatistics::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_USERS_STOREFRONTUSERSSTATISTICS_CPP
