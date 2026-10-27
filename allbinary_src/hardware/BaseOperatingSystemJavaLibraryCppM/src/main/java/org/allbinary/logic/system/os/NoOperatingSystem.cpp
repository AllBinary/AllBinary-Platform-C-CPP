
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_NOOPERATINGSYSTEM_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_NOOPERATINGSYSTEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/os/NoOperatingSystem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/os/GenericOperatingSystem.h"

auto NoOperatingSystem::NO_OPERATING_SYSTEM_owner() -> GenericOperatingSystem* { static std::unique_ptr<GenericOperatingSystem> value(new GenericOperatingSystem()); return value.get(); }
GenericOperatingSystem* NoOperatingSystem::NO_OPERATING_SYSTEM = NoOperatingSystem::NO_OPERATING_SYSTEM_owner();

NoOperatingSystem::NoOperatingSystem(){
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_NOOPERATINGSYSTEM_CPP
