
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRoleFactory.h"

class StoreRoleFactory
            : public Object
         {

    private: static StoreRoleFactory instance() { return StoreRoleFactory(); }

    public: static StoreRoleFactory getInstance();

    private: const Vector<any> roles = Vector<any>();

    private: const Vector<any> subscriberRoles = Vector<any>();

    private: const Vector<any> wholesaleRoles = Vector<any>();

private: StoreRoleFactory();

    public: Vector<any> getRoles();

    public: Vector<any> getSubscriberRoles();

    public: Vector<any> getWholesaleRoles();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H
