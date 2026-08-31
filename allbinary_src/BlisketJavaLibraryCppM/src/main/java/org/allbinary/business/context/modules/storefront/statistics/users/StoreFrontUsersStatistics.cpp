
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
        

    private: totalNumberOfUsers: Long;

    private: totalUsersByRoleHashMap: HashMap<any, any>;

public constructor (StoreFrontInterface storeFrontInterface){

            super();
        this.totalUsersByRoleHashMap= new HashMap<any, any>();
    

    userEntityInterface: UserEntityInterface = UserEntityFactory.getInstance()!;;
    

    userVector: Vector = userEntityInterface!.getCustomers()!;;
    
this.totalNumberOfUsers= new Long(userVector!.length);
    

    size: int32_t = userVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    userInterface: UserInterface = userVector!.get(index) as UserInterface;;
    

    nextUserRole: UserRole = userInterface!.getRole()!;;
    

    currentNumberOfUsersForRole: Long = this.getNewTotal(nextUserRole)!;;
    
this.totalUsersByRoleHashMap!.put(nextUserRole, currentNumberOfUsersForRole);
    
}

}


    Long getNewTotal(UserRole userRole){

    numberOfUsersForRoleLong: Long = this.totalUsersByRoleHashMap!.get(userRole) as Long;;
    

                        if(numberOfUsersForRoleLong == 
                                    null
                                )
                        
                                    {
                                    numberOfUsersForRoleLong= new Long(0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(numberOfUsersForRoleLong!.longValue() +1);
    
}


    public Long getNumberOfUsers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalNumberOfUsers;
    
}


    public Long getNumberOfUsersByRole(string role){

    totalForRole: Long = this.totalUsersByRoleHashMap!.get(role) as Long;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return totalForRole;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(StoreFrontUsersStatisticsData.getInstance()!.NUMBEROFUSERS, this.getNumberOfUsers()!.toString());
    

    setOfUserRoles: Set = this.totalUsersByRoleHashMap!.keys()!;;
    

    nextUserRole: UserRole;;
    

    userRoleArray: std::vector<any> = setOfUserRoles!.toArray()!;;
    

    size: int32_t = userRoleArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
nextUserRole= userRoleArray[index]! as UserRole;
    

    totalForRole: Long = this.totalUsersByRoleHashMap!.get(nextUserRole) as Long;;
    
hashMap!.put(nextUserRole!.toString(), totalForRole!.toString());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public Vector toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

