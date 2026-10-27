
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/NoHardware.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/NoHardwareComponent.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/hardware/HardwareInterface.h"


NoHardware::NoHardware() {
        }
        HardwareInterface* NoHardware::instance = new NoHardware();

    auto NoHardware::getInstance() -> HardwareInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoHardware::instance;
    
}


    auto NoHardware::getComponent(int32_t index) -> HardwareComponentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoHardwareComponent::getInstance();;
    
}


    auto NoHardware::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "No Hardware";
    
}


    auto NoHardware::compareTo(HardwareInterface* hardwareInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto NoHardware::difference(HardwareInterface* hardwareInterface) -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::getInstance()->NULL_TABLE;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_CPP
