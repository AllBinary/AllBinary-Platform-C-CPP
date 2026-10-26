
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
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/UserFactoryInterface.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdminUser.h"

class AdminUserFactory
            : public Object
        : public UserFactoryInterface {

public: AdminUserFactory(){
}


                //@Throws(Exception.constructor)
            
    public: UserInterface getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdminUser();
    
}


                //@Throws(Exception.constructor)
            
    public: UserInterface getInstance(HashMap<Object*, Object*> hashMap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdminUser(hashMap);
    
}


};

            

