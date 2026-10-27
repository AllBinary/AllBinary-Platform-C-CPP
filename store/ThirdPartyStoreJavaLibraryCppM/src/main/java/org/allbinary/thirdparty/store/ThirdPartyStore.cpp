
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThirdPartyStore
            : public Object
         {

    private: bool authorized= false;

    private: std::string name;

public: ThirdPartyStore(std::string name){
this->name= name;
    
}


    public: void authorize(AbeClientInformationInterface* clientInformationInterface){
}


    public: bool isAuthorized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->authorized;
    
}


    protected: void setAuthorized(bool authorized){
this->authorized= authorized;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


};

            

