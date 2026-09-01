
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/Serializable.h>

      
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicUserRole
            : public Object
        : public Serializable {

    private: static const Vector<any> roleVector = Vector<any>();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static BasicUserRole getRole(std::string role);

    public: static Vector<any> getAll();

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

    public: bool equals(BasicUserRole basicUserRole);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_H
