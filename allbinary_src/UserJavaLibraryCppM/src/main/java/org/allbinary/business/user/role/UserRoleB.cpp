
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/UserFactoryInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/business/user/role/BasicUserRole.h"
#include "org/allbinary/business/user/role/UserRoleFactory.h"

class UserRoleB: public UserRole {

    public: static inline BasicArrayList* roleVector = new BasicArrayListD();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static UserRole* getRole(std::string role){
UserRoleFactory::getInstance();
    

                        if(!StringValidationUtil::getInstance()->isEmpty(role))
                        
                                    {
                                    
    BasicArrayList* roleVector = UserRoleB::getAll();;
    

    int32_t size = roleVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserRole* userRole = dynamic_cast<UserRole*>(roleVector->get(index));;
    

                        if(role.compare(userRole->toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userRole;
    

                                    }
                                
}


                                    }
                                



                            throw new Exception("Unable to get role - Unknown Role = " +role);
                    
}


    public: static BasicArrayList* getAll(){
UserRoleFactory::getInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserRoleB::roleVector;
    
}


protected: UserRoleB(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface) : UserRole(aBasicUserRole, aUserFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
UserRoleB::roleVector->add(this);
    
}


};

            

