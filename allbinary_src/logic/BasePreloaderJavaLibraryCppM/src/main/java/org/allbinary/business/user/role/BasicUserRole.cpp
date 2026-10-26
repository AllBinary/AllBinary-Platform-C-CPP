
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
        
#include <java/io/Serializable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRoles.h"

class BasicUserRole
            : public Object
        : public Serializable {

    private: int32_t m_int_RoleId;

    private: std::string role;

    private: std::string displayValue;

    private: int64_t sessionTimeout;

    private: int64_t sessionInactivityTimeout;

: BasicUserRole(std::string aRole, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout) : BasicUserRole(aRole, aRole, a_int_RoleId, aSessionTimeout, aSessionInactivityTimeout){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


: BasicUserRole(std::string aRole, std::string aDisplayValue, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout){
this->m_int_RoleId= a_int_RoleId;
    
this->role= aRole;
    
this->displayValue= aDisplayValue;
    
this->sessionTimeout= aSessionTimeout;
    
this->sessionInactivityTimeout= aSessionInactivityTimeout;
    
BasicUserRoles::getInstance().roleVector.add(this);
    
}


    private: int32_t getRoleId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->m_int_RoleId;
    
}


    public: std::string getRole(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->role;
    
}


    public: int64_t getSessionTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sessionTimeout;
    
}


    public: int64_t getSessionInactivityTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sessionInactivityTimeout;
    
}


    public: bool equals(BasicUserRole basicUserRole){

                        if(this->getRoleId() == basicUserRole.getRoleId())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRole();;
    
}


};

            

