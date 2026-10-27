
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/role/BasicUserRole.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/Serializable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRoles.h"


BasicUserRole::BasicUserRole(std::string aRole, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout) : BasicUserRole(aRole, aRole, a_int_RoleId, aSessionTimeout, aSessionInactivityTimeout){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


BasicUserRole::BasicUserRole(std::string aRole, std::string aDisplayValue, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout){
this->m_int_RoleId= a_int_RoleId;
    
this->role= aRole;
    
this->displayValue= aDisplayValue;
    
this->sessionTimeout= aSessionTimeout;
    
this->sessionInactivityTimeout= aSessionInactivityTimeout;
    
BasicUserRoles::getInstance()->roleVector->add(this);
    
}


    auto BasicUserRole::getRoleId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->m_int_RoleId;
    
}


    auto BasicUserRole::getRole() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->role;
    
}


    auto BasicUserRole::getSessionTimeout() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sessionTimeout;
    
}


    auto BasicUserRole::getSessionInactivityTimeout() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sessionInactivityTimeout;
    
}


    auto BasicUserRole::equals(BasicUserRole* basicUserRole) -> bool{

                        if(this->getRoleId() == basicUserRole->getRoleId())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto BasicUserRole::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRole();;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_CPP
