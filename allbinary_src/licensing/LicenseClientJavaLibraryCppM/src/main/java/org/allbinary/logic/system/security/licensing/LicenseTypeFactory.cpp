
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSETYPEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSETYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/LicenseTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/LicenseType.h"


LicenseTypeFactory::LicenseTypeFactory() : UNKNOWN(new LicenseType(CommonStrings::getInstance()->UNKNOWN)), DEMO(new LicenseType("Demo")), NORMAL(new LicenseType("Normal")) {
        }
        auto LicenseTypeFactory::instance_owner() -> LicenseTypeFactory* { static std::unique_ptr<LicenseTypeFactory> value(new LicenseTypeFactory()); return value.get(); }
LicenseTypeFactory* LicenseTypeFactory::instance = LicenseTypeFactory::instance_owner();

    auto LicenseTypeFactory::getInstance() -> LicenseTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LicenseTypeFactory::instance;
    
}


    auto LicenseTypeFactory::getInstance(std::string name) -> LicenseType*{

                        if(this->DEMO->getName().compare(name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->DEMO;
    

                                    }
                                
                             else 
                        if(this->NORMAL->getName().compare(name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NORMAL;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->UNKNOWN;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSETYPEFACTORY_CPP
