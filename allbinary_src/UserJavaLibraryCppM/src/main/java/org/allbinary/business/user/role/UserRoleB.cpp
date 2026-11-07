
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEB_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEB_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/role/UserRoleB.h"
        

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

BasicArrayList* UserRoleB::roleVector = new BasicArrayListD();

UserRoleB::UserRoleB(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface) : UserRole(aBasicUserRole, aUserFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
UserRoleB::roleVector->add(this);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UserRoleB::getRole(std::string role) -> UserRole*{
UserRoleFactory::getInstance();
    

                        if(!StringValidationUtil::getInstance()->isEmpty(role))
                        
                                    {
                                    
    BasicArrayList* roleVector = UserRoleB::getAll();;
    

    int32_t size = roleVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserRole* userRole = dynamic_cast<UserRole*>(roleVector->get(index));;
    

                        if(role.compare(JavaString::valueOf(userRole)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return userRole;
    

                                    }
                                
}


                                    }
                                



                            throw Exception(JavaString::valueOf("Unable to get role - Unknown Role = ") +JavaString::valueOf(role));
                    
}


    auto UserRoleB::getAll() -> BasicArrayList*{
UserRoleFactory::getInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UserRoleB::roleVector;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEB_CPP
