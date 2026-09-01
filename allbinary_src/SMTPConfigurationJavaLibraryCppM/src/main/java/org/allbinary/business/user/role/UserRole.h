
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/Serializable.h>

      
#include <org/allbinary/business/user/UserFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRole.h"

class UserRole
            : public Object
        : public Serializable {

    private: BasicUserRole basicUserRole;

    private: UserFactoryInterface userFactoryInterface;

protected: UserRole(BasicUserRole aBasicUserRole, UserFactoryInterface aUserFactoryInterface);

    public: std::string toString();

    public: BasicUserRole getBasicUserRole();

                //@Throws(Exception.constructor)
            
    public: UserFactoryInterface getUserFactory();

    public: int64_t getSessionTimeout();

    public: int64_t getSessionInactivityTimeout();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_H
