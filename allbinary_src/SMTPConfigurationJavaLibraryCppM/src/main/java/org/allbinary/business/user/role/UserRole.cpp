
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/role/UserRole.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/Serializable.h>

      
#include <org/allbinary/business/user/UserFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRole.h"


UserRole::UserRole(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface){
this->basicUserRole= aBasicUserRole;
    
this->userFactoryInterface= aUserFactoryInterface;
    
}


    auto UserRole::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->basicUserRole);;
    
}


    auto UserRole::getBasicUserRole() -> BasicUserRole*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicUserRole;
    
}


                //@Throws(Exception.constructor)
            
    auto UserRole::getUserFactory() -> UserFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userFactoryInterface;
    
}


    auto UserRole::getSessionTimeout() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicUserRole->getSessionTimeout();;
    
}


    auto UserRole::getSessionInactivityTimeout() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicUserRole->getSessionInactivityTimeout();;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_CPP
