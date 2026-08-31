
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

      
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicUserRole
            : public Object
        : public Serializable {
        

    private: static const roleVector: Vector<any> = new Vector<any>();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static BasicUserRole getRole(string role){

    roleVector: Vector<any> = BasicUserRole.getAll()!;;
    

    size: int32_t = roleVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    userRole: BasicUserRole = roleVector!.get(index) as BasicUserRole;;
    

                        if(role.compareTo(userRole!.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userRole;
    

                                    }
                                
}




                            throw new Exception("Unable to get role - Unknown Role");
                    
}


    public static Vector<any> getAll(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicUserRole.roleVector;
    
}


    private: const m_int_RoleId: int32_t;

    private: const role: string;

    private: const displayValue: string;

    private: const sessionTimeout: int64_t;

    private: const sessionInactivityTimeout: int64_t;

 constructor (string aRole, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout){
            this(aRole, aRole, a_int_RoleId, aSessionTimeout, aSessionInactivityTimeout);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


 constructor (string aRole, string aDisplayValue, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout){

            super();
        this.m_int_RoleId= a_int_RoleId;
    
this.role= aRole;
    
this.displayValue= aDisplayValue;
    
this.sessionTimeout= aSessionTimeout;
    
this.sessionInactivityTimeout= aSessionInactivityTimeout;
    
BasicUserRole.roleVector!.add(this);
    
}


    int32_t getRoleId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.m_int_RoleId;
    
}


    public string getRole(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.role;
    
}


    public int64_t getSessionTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sessionTimeout;
    
}


    public int64_t getSessionInactivityTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sessionInactivityTimeout;
    
}


    public bool equals(BasicUserRole basicUserRole){

                        if(this.getRoleId() == basicUserRole!.getRoleId())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getRole();;
    
}


};

            

