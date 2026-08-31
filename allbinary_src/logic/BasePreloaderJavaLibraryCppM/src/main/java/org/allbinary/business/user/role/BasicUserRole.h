
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
        

    private: static const roleVector: Vector<any> = new Vector<any>();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static BasicUserRole getRole(string role);

    public static Vector<any> getAll();

    private: const m_int_RoleId: int32_t;

    private: const role: string;

    private: const displayValue: string;

    private: const sessionTimeout: int64_t;

    private: const sessionInactivityTimeout: int64_t;

 constructor (string aRole, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout);

 constructor (string aRole, string aDisplayValue, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout);

    int32_t getRoleId();

    public string getRole();

    public int64_t getSessionTimeout();

    public int64_t getSessionInactivityTimeout();

    public bool equals(BasicUserRole basicUserRole);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_H
