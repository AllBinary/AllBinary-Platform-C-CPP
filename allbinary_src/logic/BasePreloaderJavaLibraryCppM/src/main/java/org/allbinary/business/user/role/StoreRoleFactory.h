
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRoleFactory.h"

class StoreRoleFactory
            : public Object
         {

    private: static StoreRoleFactory* instance() { static std::unique_ptr<StoreRoleFactory> value(new StoreRoleFactory()); return value.get(); }

    public: static StoreRoleFactory* getInstance();

    private: BasicArrayList* roles = new BasicArrayListD();

    private: BasicArrayList* subscriberRoles = new BasicArrayListD();

    private: BasicArrayList* wholesaleRoles = new BasicArrayListD();

private: StoreRoleFactory();

    public: BasicArrayList* getRoles();

    public: BasicArrayList* getSubscriberRoles();

    public: BasicArrayList* getWholesaleRoles();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H
