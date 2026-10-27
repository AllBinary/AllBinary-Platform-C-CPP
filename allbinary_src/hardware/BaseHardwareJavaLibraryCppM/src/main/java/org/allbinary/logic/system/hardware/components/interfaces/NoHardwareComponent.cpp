
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_NOHARDWARECOMPONENT_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_NOHARDWARECOMPONENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/components/interfaces/NoHardwareComponent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"


NoHardwareComponent::NoHardwareComponent() {
        }
        auto NoHardwareComponent::instance_owner() -> NoHardwareComponent* { static std::unique_ptr<NoHardwareComponent> value(new NoHardwareComponent()); return value.get(); }
NoHardwareComponent* NoHardwareComponent::instance = NoHardwareComponent::instance_owner();

    auto NoHardwareComponent::getInstance() -> NoHardwareComponent*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoHardwareComponent::instance;
    
}


    auto NoHardwareComponent::compareTo(HardwareComponentInterface* componentInterface) -> bool{

                        if(this == componentInterface)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto NoHardwareComponent::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->NULL_STRING;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_NOHARDWARECOMPONENT_CPP
