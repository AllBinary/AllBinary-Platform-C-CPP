
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEINTERFACESINGLETON_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEINTERFACESINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/LicenseInterfaceSingleton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeNoLicense.h"
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"


LicenseInterfaceSingleton::LicenseInterfaceSingleton() {
        }
        AbeLicenseInterface* LicenseInterfaceSingleton::licenseInterface = AbeNoLicense::getInstance();

    auto LicenseInterfaceSingleton::getInstance() -> AbeLicenseInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseInterfaceSingleton::licenseInterface;
    
}


    auto LicenseInterfaceSingleton::init(AbeLicenseInterface* licenseInterface) -> void{

                        if(licenseInterface != 
                                    nullptr
                                )
                        
                                    {
                                    LicenseInterfaceSingleton::licenseInterface= licenseInterface;
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEINTERFACESINGLETON_CPP
