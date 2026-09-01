
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
        
            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/UserEntityInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontUsersStatisticsInterface.h"
#include "StoreFrontUsersStatisticsData.h"

class StoreFrontUsersStatistics
            : public Object
        : public StoreFrontUsersStatisticsInterface {

    private: Long totalNumberOfUsers;

    private: HashMap<any, any> totalUsersByRoleHashMap;

public: StoreFrontUsersStatistics(StoreFrontInterface storeFrontInterface){
this->totalUsersByRoleHashMap= HashMap<any, any>();
    

    UserEntityInterface userEntityInterface = UserEntityFactory::getInstance();;
    

    Vector userVector = userEntityInterface.getCustomers();;
    
this->totalNumberOfUsers= Long(userVector.length);
    

    int32_t size = userVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserInterface userInterface = userVector.get(index) as UserInterface;;
    

    UserRole nextUserRole = userInterface.getRole();;
    

    Long currentNumberOfUsersForRole = this->getNewTotal(nextUserRole);;
    
this->totalUsersByRoleHashMap.put(nextUserRole, currentNumberOfUsersForRole);
    
}

}


    private: Long getNewTotal(UserRole userRole){

    Long numberOfUsersForRoleLong = this->totalUsersByRoleHashMap.get(userRole) as Long;;
    

                        if(numberOfUsersForRoleLong == 
                                    nullptr
                                )
                        
                                    {
                                    numberOfUsersForRoleLong= Long(0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(numberOfUsersForRoleLong.longValue() +1);
    
}


    public: Long getNumberOfUsers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalNumberOfUsers;
    
}


    public: Long getNumberOfUsersByRole(std::string role){

    Long totalForRole = this->totalUsersByRoleHashMap.get(role) as Long;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return totalForRole;
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = HashMap<any, any>();;
    
hashMap.put(StoreFrontUsersStatisticsData::getInstance().NUMBEROFUSERS, this->getNumberOfUsers().toString());
    

    Set setOfUserRoles = this->totalUsersByRoleHashMap.keys();;
    

    UserRole nextUserRole;;
    

    std::vector<Object*> userRoleArray = setOfUserRoles.toArray();;
    

    int32_t size = userRoleArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextUserRole= userRoleArray[index]! as UserRole;
    

    Long totalForRole = this->totalUsersByRoleHashMap.get(nextUserRole) as Long;;
    
hashMap.put(nextUserRole.toString(), totalForRole.toString());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: Vector toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

