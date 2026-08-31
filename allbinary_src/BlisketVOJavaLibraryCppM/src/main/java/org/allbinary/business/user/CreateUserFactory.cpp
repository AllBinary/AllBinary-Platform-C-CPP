
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleB.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserInterface.h"

class CreateUserFactory
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static UserInterface getInstance(HashMap<any, any> hashMap){

                        if(hashMap != 
                                    null
                                )
                        
                                    {
                                    
    roleString: string = hashMap!.get(UserRoleData.NAME.toString()) as string;;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(roleString))
                        
                                    {
                                    
    role: UserRole = UserRoleB.getRole(roleString)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return role.getUserFactory()!.getInstance(hashMap);;
    

                                    }
                                
                        else {
                            


                            throw new Exception("No Role Specified");
                    

                        }
                            

                                    }
                                
                        else {
                            


                            throw new Exception("Null HashMap");
                    

                        }
                            
}


private constructor (){

            super();
        }


};

            

