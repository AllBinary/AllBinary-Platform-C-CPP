
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/Serializable.h>

      
#include <org/allbinary/business/user/UserFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRole.h"

class UserRole
            : public Object
        : public Serializable {
        

    private: basicUserRole: BasicUserRole;

    private: userFactoryInterface: UserFactoryInterface;

protected constructor (BasicUserRole aBasicUserRole, UserFactoryInterface aUserFactoryInterface){

            super();
        this.basicUserRole= aBasicUserRole;
    
this.userFactoryInterface= aUserFactoryInterface;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicUserRole!.toString();;
    
}


    public BasicUserRole getBasicUserRole(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicUserRole;
    
}


                //@Throws(Exception.constructor)
            
    public UserFactoryInterface getUserFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userFactoryInterface;
    
}


    public int64_t getSessionTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicUserRole!.getSessionTimeout();;
    
}


    public int64_t getSessionInactivityTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicUserRole!.getSessionInactivityTimeout();;
    
}


};

            

