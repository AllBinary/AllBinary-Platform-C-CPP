
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_CREATEUSERFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_CREATEUSERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/CreateUserFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleB.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/UserInterface.h"


CreateUserFactory::CreateUserFactory(){
}


                //@Throws(Exception.constructor)
            
    auto CreateUserFactory::getInstance(HashMap<Object*, Object*>* hashMap) -> UserInterface*{

                        if(hashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string roleString = JavaBoxes::unbox<std::string>(hashMap->get(UserRoleData::NAME->toString()));;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(roleString))
                        
                                    {
                                    
    UserRole* role = UserRoleB::getRole(roleString);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return role->getUserFactory()->getInstance(hashMap);;
    

                                    }
                                
                        else {
                            


                            throw Exception("No Role Specified");
                    

                        }
                            

                                    }
                                
                        else {
                            


                            throw Exception("Null HashMap");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_CREATEUSERFACTORY_CPP
