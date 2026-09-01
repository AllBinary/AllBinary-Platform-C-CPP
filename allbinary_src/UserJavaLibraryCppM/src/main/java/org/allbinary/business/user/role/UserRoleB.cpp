
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/UserFactoryInterface.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserRole.h"
#include "BasicUserRole.h"
#include "UserRoleFactory.h"

class UserRoleB: public UserRole {

    public: static Vector roleVector = Vector();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static UserRole getRole(std::string role){
UserRoleFactory::getInstance();
    

                        if(!StringValidationUtil::getInstance().isEmpty(role))
                        
                                    {
                                    
    Vector roleVector = UserRoleB::getAll();;
    

    int32_t size = roleVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserRole userRole = roleVector.get(index) as UserRole;;
    

                        if(role.compareTo(userRole.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userRole;
    

                                    }
                                
}


                                    }
                                



                            throw Exception("Unable to get role - Unknown Role = " +role);
                    
}


    public: static Vector getAll(){
UserRoleFactory::getInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserRoleB::roleVector;
    
}


protected: UserRoleB(BasicUserRole aBasicUserRole, UserFactoryInterface aUserFactoryInterface){
            super(aBasicUserRole, aUserFactoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
UserRoleB::roleVector.add(this);
    
}


};

            

