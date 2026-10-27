
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicUserRole;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicUserRoles
            : public virtual Object
         {

    private: static BasicUserRoles* instance_owner();
    private: static BasicUserRoles* instance;

    public: static BasicUserRoles* getInstance();


            
    public: BasicUserRoles();
        
    public: BasicArrayList* roleVector;

                //@Throws(Exception.constructor)
            
    public: BasicUserRole* getRole(std::string role);

    public: BasicArrayList* getAll();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLES_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLES_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/business/user/role/BasicUserRole.h")
#include "org/allbinary/business/user/role/BasicUserRole.h"
#endif

        #endif
    
