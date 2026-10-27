
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto RegistrationConfiguration::SINGLETON_owner() -> RegistrationConfiguration* { static std::unique_ptr<RegistrationConfiguration> value(new RegistrationConfiguration()); return value.get(); }
RegistrationConfiguration* RegistrationConfiguration::SINGLETON = RegistrationConfiguration::SINGLETON_owner();

RegistrationConfiguration::RegistrationConfiguration(){
}


    auto RegistrationConfiguration::getInstance() -> RegistrationConfiguration*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RegistrationConfiguration::SINGLETON;
    
}


                //@Throws(Exception.constructor)
            
    auto RegistrationConfiguration::read() -> void{
}


                //@Throws(Exception.constructor)
            
    auto RegistrationConfiguration::write() -> void{
}


    auto RegistrationConfiguration::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append("Registration Code: ")->append(this->getRegistrationCode())->toString();;
    
}


    auto RegistrationConfiguration::setRegistrationCode(std::string registrationCode) -> void{
this->registrationCode= registrationCode;
    
}


    auto RegistrationConfiguration::getRegistrationCode() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->registrationCode;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_CPP
