
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLES_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/role/BasicUserRoles.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRole.h"


BasicUserRoles::BasicUserRoles() : roleVector(new BasicArrayListD()) {
        }
        auto BasicUserRoles::instance_owner() -> BasicUserRoles* { static std::unique_ptr<BasicUserRoles> value(new BasicUserRoles()); return value.get(); }
BasicUserRoles* BasicUserRoles::instance = BasicUserRoles::instance_owner();

    auto BasicUserRoles::getInstance() -> BasicUserRoles*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicUserRoles::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicUserRoles::getRole(std::string role) -> BasicUserRole*{

    BasicArrayList* roleVector = this->getAll();;
    

    int32_t size = roleVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicUserRole* userRole = dynamic_cast<BasicUserRole*>(roleVector->get(index));;
    

                        if(role.compare(userRole->toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userRole;
    

                                    }
                                
}




                            throw Exception("Unable to get role - Unknown Role");
                    
}


    auto BasicUserRoles::getAll() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->roleVector;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLES_CPP
