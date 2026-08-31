
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
        

    private: static const instance: StoreRoleFactory = new StoreRoleFactory();

    public static StoreRoleFactory getInstance();

    private: const roles: Vector<any> = new Vector<any>();

    private: const subscriberRoles: Vector<any> = new Vector<any>();

    private: const wholesaleRoles: Vector<any> = new Vector<any>();

private constructor ();

    public Vector<any> getRoles();

    public Vector<any> getSubscriberRoles();

    public Vector<any> getWholesaleRoles();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H
