
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RegistrationConfiguration
            : public Object
         {

    private: static RegistrationConfiguration* SINGLETON() { static std::unique_ptr<RegistrationConfiguration> value(new RegistrationConfiguration()); return value.get(); }

    public: static RegistrationConfiguration* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RegistrationConfiguration::SINGLETON();
    
}


    private: std::string registrationCode = "No Registration Code";

    public: const std::string NAME = "registrationid";

private: RegistrationConfiguration(){
}


                //@Throws(Exception.constructor)
            
    private: void read(){
}


                //@Throws(Exception.constructor)
            
    public: void write(){
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append("Registration Code: ")->append(this->getRegistrationCode())->toString();;
    
}


    public: void setRegistrationCode(std::string registrationCode){
this->registrationCode= registrationCode;
    
}


    public: std::string getRegistrationCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->registrationCode;
    
}


};

            

