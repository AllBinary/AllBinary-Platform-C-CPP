
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLES_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLES_H

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

    public: static BasicUserRoles getInstance();

    public: const BasicArrayList roleVector = BasicArrayListD();

                //@Throws(Exception.constructor)
            
    public: BasicUserRole getRole(std::string role);

    public: BasicArrayList getAll();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLES_H
