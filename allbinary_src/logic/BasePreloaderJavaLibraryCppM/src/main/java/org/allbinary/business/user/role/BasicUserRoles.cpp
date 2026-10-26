
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRole.h"

class BasicUserRoles
            : public Object
         {

    private: static BasicUserRoles instance() { return BasicUserRoles(); }

    public: static BasicUserRoles getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicUserRoles::instance();
    
}


    public: const BasicArrayList roleVector = BasicArrayListD();

                //@Throws(Exception.constructor)
            
    public: BasicUserRole getRole(std::string role){

    BasicArrayList roleVector = this->getAll();;
    

    int32_t size = roleVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicUserRole userRole = roleVector.get(index);;
    

                        if(role.compare(userRole.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userRole;
    

                                    }
                                
}




                            throw Exception("Unable to get role - Unknown Role");
                    
}


    public: BasicArrayList getAll(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->roleVector;
    
}


};

            

