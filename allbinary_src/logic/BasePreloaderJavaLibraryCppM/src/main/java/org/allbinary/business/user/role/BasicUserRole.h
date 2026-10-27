
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/Serializable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRoles.h"

class BasicUserRole
            : public Object
        , public Serializable {

    private: int32_t m_int_RoleId;

    private: std::string role;

    private: std::string displayValue;

    private: int64_t sessionTimeout;

    private: int64_t sessionInactivityTimeout;

: BasicUserRole(std::string aRole, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout);

: BasicUserRole(std::string aRole, std::string aDisplayValue, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout);

    private: int32_t getRoleId();

    public: std::string getRole();

    public: int64_t getSessionTimeout();

    public: int64_t getSessionInactivityTimeout();

    public: bool equals(BasicUserRole* basicUserRole);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_H
