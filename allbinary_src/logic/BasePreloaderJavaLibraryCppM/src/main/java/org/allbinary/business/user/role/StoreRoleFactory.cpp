
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRoleFactory.h"

class StoreRoleFactory
            : public Object
         {

    private: static StoreRoleFactory instance() { return StoreRoleFactory(); }

    public: static StoreRoleFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreRoleFactory::instance();
    
}


    private: const BasicArrayList roles = BasicArrayListD();

    private: const BasicArrayList subscriberRoles = BasicArrayListD();

    private: const BasicArrayList wholesaleRoles = BasicArrayListD();

private: StoreRoleFactory(){

    BasicUserRoleFactory basicUserRoleFactory = BasicUserRoleFactory::getInstance();;
    
this->roles.add(basicUserRoleFactory.CUSTOMER);
    
this->roles.add(basicUserRoleFactory.SUBSCRIBERCUSTOMER);
    
this->roles.add(basicUserRoleFactory.WHOLESALECUSTOMER);
    
this->subscriberRoles.add(basicUserRoleFactory.SUBSCRIBERCUSTOMER);
    
this->wholesaleRoles.add(basicUserRoleFactory.WHOLESALECUSTOMER);
    
}


    public: BasicArrayList getRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->roles;
    
}


    public: BasicArrayList getSubscriberRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->subscriberRoles;
    
}


    public: BasicArrayList getWholesaleRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->wholesaleRoles;
    
}


};

            

