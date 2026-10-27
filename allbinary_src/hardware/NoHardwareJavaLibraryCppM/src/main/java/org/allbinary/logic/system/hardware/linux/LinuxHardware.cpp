
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/linux/LinuxHardware.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/BridgeInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/EthernetInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/FireWireInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardDriveInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MediaInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/UsbInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LinuxHardware::LinuxHardware(){
}


    auto LinuxHardware::getMultimedia(int32_t index) -> MediaInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getBridge(int32_t index) -> BridgeInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getCpu(int32_t index) -> CpuInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getEthernet(int32_t index) -> EthernetInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getFireWire(int32_t index) -> FireWireInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getHardDriveController(int32_t index) -> HardDriveControllerInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getHardDrive(int32_t index) -> HardDriveInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getMachineAccessControlAddress(int32_t index) -> MachineAccessControlAddressInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getMonitor(int32_t index) -> MonitorInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getUsb(int32_t index) -> UsbInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getVideo(int32_t index) -> VideoInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::getComponent(int32_t index) -> HardwareComponentInterface*{



                            throw RuntimeException();
                    
}


    auto LinuxHardware::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto LinuxHardware::compareTo(HardwareInterface* hardwareInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto LinuxHardware::difference(HardwareInterface* hardwareInterface) -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::getInstance()->NULL_TABLE;
    
}


    auto LinuxHardware::isNextHardware(std::string nextLine) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_CPP
