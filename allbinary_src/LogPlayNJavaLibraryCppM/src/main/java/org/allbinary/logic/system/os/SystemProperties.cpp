
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/os/SystemProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
auto SystemProperties::instance_owner() -> SystemProperties* { static std::unique_ptr<SystemProperties> value(new SystemProperties()); return value.get(); }
SystemProperties* SystemProperties::instance = SystemProperties::instance_owner();

    /*actual*/ auto SystemProperties::getInstance() -> SystemProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SystemProperties::instance;
    
}


SystemProperties::SystemProperties(){
}


    /*actual*/ auto SystemProperties::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->OS_NAME;
    
}


    /*actual*/ auto SystemProperties::getArch() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->OS_ARCH;
    
}


    /*actual*/ auto SystemProperties::getVersion() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->OS_VERSION;
    
}


    auto SystemProperties::getUserHomePath() -> std::string{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_CPP
