
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

class StoreFrontUsersStatistics
            : public Object
        , public StoreFrontUsersStatisticsInterface {

    private: int64_t totalNumberOfUsers;

    private: HashMap<Object*, Object*>* totalUsersByRoleHashMap;

public: StoreFrontUsersStatistics(StoreFrontInterface* storeFrontInterface){
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


    private: int64_t getNewTotal(UserRole* userRole){

    int64_t numberOfUsersForRoleLong = this->totalUsersByRoleHashMap->get(userRole);;
    

                        if(numberOfUsersForRoleLong == 
                                    nullptr
                                )
                        
                                    {
                                    numberOfUsersForRoleLong= int64_t(0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(numberOfUsersForRoleLong.longValue() +1);
    
}


    public: int64_t getNumberOfUsers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalNumberOfUsers;
    
}


    public: int64_t getNumberOfUsersByRole(std::string role){

    int64_t totalForRole = this->totalUsersByRoleHashMap->get(role);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return totalForRole;
    
}


    public: HashMap<Object*, Object*>* toHashMap(){

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
    

    int64_t totalForRole = this->totalUsersByRoleHashMap->get(nextUserRole);;
    
hashMap->put(nextUserRole->toString(), totalForRole.toString());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: BasicArrayList* toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

